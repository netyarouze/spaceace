/************************************************************
 *                                                          *
 *                      Space Ace                           *
 *                  PlayStation version                     *
 *          Based on Dragon's Lair II Time Warp             *
 *         To be compiled with Psyq 4.6 or higher           *
 *                                                          *
 *                 Started:  June 2024                      *
 *               Completed:  July 2024 		            *
 *                		                            *
 *            https://archive.org/details/@qbl              *
 *         https://github.com/netyarouze/spaceace           *
 *                                                          *
 ***********************************************************/


#include <sys/types.h>
#include <libgte.h>
#include <libgpu.h>
#include <libcd.h>
#include "kernel.h"
#include <libsnd.h>

#define GAME_C

#include "control.h"
#include "assets.h"
#include "files.h"
#include "options.h"
#include "sectors.h"
#include "game.h"
#include "bsframes.h"
#include "font.h"
#include "main.h"
#include "sound.h"
#include "movie.h"
#include "movies.h"
#include "language.h"
#include "debug.h"
#include "stages.h"
#include "credits.h"


// ******************************************************************************************


// For debugging only. Modify with custom parameters as required.

void Print_Debug_Info(void)
{

if ( Player1.CurrentScene <= Game_Stages[Player1.CurrentStage].TotalScenes)
	{
FntPrint(fIdA, "Next move: ");

// Display next move.
// Up
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[1] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[1]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[1]->Type == MOVIE_DEXTER))
		{
		FntPrint(fIdA, "UP ");
		}

// Down
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[2] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[2]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[2]->Type == MOVIE_DEXTER))
		{
		FntPrint(fIdA, "DOWN ");
		}

// Left
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[3] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[3]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[3]->Type == MOVIE_DEXTER))
		{
		FntPrint(fIdA, "LEFT ");
		}

// Right.
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[4] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[4]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[4]->Type == MOVIE_DEXTER) )
		{
		FntPrint(fIdA, "RIGHT ");
		}

// Fire
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[5] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[5]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[5]->Type == MOVIE_DEXTER))
		{
		FntPrint(fIdA, "FIRE ");
		}
	}
else
	{
	FntPrint(fIdA, " ");
	}

FntPrint(fIdA, "\nStage: %d", Player1.CurrentStage+1);
FntPrint(fIdA, "\nScene: %d", Player1.CurrentScene+1);// In STAGES.H scenes start counting on 1.
FntPrint(fIdA, "\nCheckpoint: %d", Player1.CurrentCheckpoint);
FntPrint(fIdA, "\nFrame: %d", STRCurrentFrame);
FntPrint(fIdA, "\nEnergize: %d/%d", MAX_DEXTER-Player1.Dexter, MAX_DEXTER);
FntPrint(fIdA, "\nTMP Dexter: %d", Player1.TMP_Dexter);

/*
if (Game_Config.Vibration == YES)
	{
	FntPrint(fIdA, "\nNext rumble at: %d. Type: %d", Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleFrame, Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleType);
	}
*/

if ( ( STRCurrentFrame >= Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Frame ) && ( STRCurrentFrame < Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Frame + INTERACTION_FRAMES + COURTESY_FRAMES) )
	{
	FntPrint(fIdA, "\n\n\n\n\n			   ~c990Action!\n\n");

// Print pad input.
	if (Pad1.Up)
		{
		FntPrint(fIdA, " UP, ");
		}
	if (Pad1.Down)
		{
		FntPrint(fIdA, " DOWN, ");
		}
	if (Pad1.Left)
		{
		FntPrint(fIdA, " LEFT, ");
		}
	if (Pad1.Right)
		{
		FntPrint(fIdA, " RIGHT, ");
		}
	if (Pad1.Fire)
		{
		FntPrint(fIdA, " FIRE, ");
		}

	}

FntFlush(fIdA);

}


// ******************************************************************************************


// Stores debug info for spotting errors.

void SaveError(short ErrorID, char File[12], char Function[30], int Line)
{

Error_Report.ErrorID = ErrorID;
strcpy(Error_Report.File, File);
strcpy(Error_Report.Function, Function);
Error_Report.Line = Line;

}

// ******************************************************************************************


// This stores a screenshot on vram which will be used for the fadeout effect.


void CopyScreen(short CurrentDisplayBuffer)
{
RECT MyRect;

// Some garbage (a few wrong pixels) is displayed storing the screen like this. Doing it in two steps the result is the same.
setRECT(&MyRect, db[CurrentDisplayBuffer].disp.disp.x, db[CurrentDisplayBuffer].disp.disp.y, db[CurrentDisplayBuffer].disp.disp.w, db[CurrentDisplayBuffer].disp.disp.h);

MoveImage(&MyRect, 320, 0);
DrawSync(0);

// Init brightness for the fade out.
FadeBrightness = 150;
}



// ******************************************************************************************

void Set_StartingFrame(void)
{

if (Player1.CurrentCheckpoint > 0)
	{

	switch (Player1.CurrentStage)
		{

		case 0: // Robot drillers.
			Player1.CurrentScene = 12;
		break;

		case 1: // Flight to the space base.
			Player1.CurrentScene = 0;
		break;

		case 2: 
// Space base. Force fields and robot guards.
			if (Game_Stages[Player1.CurrentStage].Id == 4 || Game_Stages[Player1.CurrentStage].Id == 5)
				{
				Player1.CurrentScene = 10;
				}
// Space base. Platforms and sentry drones.
			else
				{
				Player1.CurrentScene = 11;
				}
		break;

		case 3:
// Green dogs.
			if (Game_Stages[Player1.CurrentStage].Id == 8 || Game_Stages[Player1.CurrentStage].Id == 9)
				{
				Player1.CurrentScene = 11;
				}
// Junkyard.
			else if (Game_Stages[Player1.CurrentStage].Id == 10 || Game_Stages[Player1.CurrentStage].Id == 11)
				{
				Player1.CurrentScene = 9;
				}
		break;

// Dogfight.
		case 4:
			Player1.CurrentScene = 7;
		break;

// Tunnel.
		case 5:
			Player1.CurrentScene = 9;
		break;

// Blue cats.
		case 6:
			Player1.CurrentScene = 5;
		break;

// Bike chase.
		case 8:
			Player1.CurrentScene = 12;
		break;

// Roller skates.
		case 9:
			Player1.CurrentScene = 12;
		break;

// Ending.
		case 10:
			Player1.CurrentScene = 19;
		break;

		}
	
	Player1.StartingFrame = Game_Stages[Player1.CurrentStage].Checkpoint;

	}
else
	{
	Player1.CurrentScene = 0;
	Player1.StartingFrame = 0;
	}

}

// ******************************************************************************************

// Randomly set regular or mirrored stages. 

void Shuffle_Stages(void)
{
short Result;
// Order is: Stage 1, Stages 2 to 9 randomly regular or mirrored, Stage 10.


// Stage 1.
Game_Stages[0] = Stage1;
Current_Stage = Previous_Stage = Game_Stages[0];


// Stage 2.
Result = rand() % 2;
//printf("\nStage 2 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[1] = Stage2;// Regular
	}
else
	{
	Game_Stages[1] = Stage3;// Mirrored
	}

// Stage 3. Init with Stage 4 or 5 by default. Later player choice may require them to be replaced by Stage 6 or 7.
Result = rand() % 2;
//printf("\nStage 3 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[2] = Stage4;
	}
else
	{
	Game_Stages[2] = Stage5;
	}

// Stage 4. Init with Stage 8 or 9 by default. Later player choice may require them to be replaced by Stage 10 or 11.
Result = rand() % 2;
//printf("\nStage 4 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[3] = Stage8;
	}
else
	{
	Game_Stages[3] = Stage9;
	}

// Stage 5. 

Result = rand() % 2;
//printf("\nStage 5 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[4] = Stage12;
	}
else
	{
	Game_Stages[4] = Stage13;
	}


// Stage 6.
Result = rand() % 2;
//printf("\nStage 6 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[5] = Stage14;
	}
else
	{
	Game_Stages[5] = Stage15;
	}

// Stage 7.
Result = rand() % 2;
//printf("\nStage 7 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[6] = Stage16;
	}
else
	{
	Game_Stages[6] = Stage17;
	}

// Stage 8.
Result = rand() % 2;
//printf("\nStage 8 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[7] = Stage18;
	}
else
	{
	Game_Stages[7] = Stage19;
	}

// Stage 9.
Result = rand() % 2;
//printf("\nStage 9 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[8] = Stage20;
	}
else
	{
	Game_Stages[8] = Stage21;
	}

// Stage 10.
Result = rand() % 2;
//printf("\nStage 10 = %d", Result);
if ( Result == 1 )
	{
	Game_Stages[9] = Stage22;
	}
else
	{
	Game_Stages[9] = Stage23;
	}

// Stage 11.

Game_Stages[10] = Stage24;

}


// ******************************************************************************************


// Set player variables during game.

void Init_Player(short Cause)
{
short Result; // Stores random value for setting regular or mirrored level.

switch (Cause)
	{

	case INIT_PLAYER_NEWGAME:

	Player1.Lives = INITIAL_LIVES;
	switch (Game_Config.Difficulty)
		{
		case EASY_DIFFICULTY:
		Player1.Credits = -1; // Unlimited
		break;

		case NORMAL_DIFFICULTY:
		Player1.Credits = 3;
		break;

		case HARD_DIFFICULTY:
		Player1.Credits = 0;
		break;
		}
	Player1.CurrentStage = 0;
	Player1.CurrentScene = 0;
	Player1.CurrentCheckpoint = 0;
	Player1.StartingFrame = 0;
	Player1.Dexter = 0;
	Player1.TMP_Dexter = 0;
	Player1.CurrentAction = NO_ACTION;
	Player1.Deaths = 0;
	Player1.CreditsUsed = 0;
	Player1.Pause = NO;
	Player1.Score = 0;
	Player1.ExitChoice = DEFAULT_EXIT;

	break;

	case INIT_PLAYER_DEATH:

// Unlimited lives in debug mode.
	if (Debug_Config.Debug_Mode == NO)
		{
		Player1.Lives--;
		}
	else if (Debug_Stage.UnlimitedLives == NO)
		{
		Player1.Lives--;
		}

// Restore temp Dexter path count in hard mode.
	if (Game_Config.Difficulty == HARD_DIFFICULTY || Current_Stage.Movie->Type != MOVIE_DEXTER)
		{
		Player1.TMP_Dexter = 0;
		}
	Player1.Deaths++;

// No checkpoints in hard mode. Restore level when dying in Dexter alternate scene. In easy and normal difficulty, Dexter variants are checkpoints.
	if (Game_Config.Difficulty == HARD_DIFFICULTY)
		{
		if (Current_Stage.Movie->Type != Previous_Stage.Movie->Type)
			{
			Current_Stage = Previous_Stage;
			Game_Stages[Player1.CurrentStage] = Current_Stage;
			}
		}

	// Set current scene after checkpoint or restart from the beginning.
	Set_StartingFrame();

	Player1.CurrentAction = NO_ACTION;

	break;

	case INIT_PLAYER_DEXTER:

// Stage 2 is an exception since there is no energize scene but an alternate route. Stage 11 is an exception too, there is a shorter path but it also involves Dexter becoming Ace.
	if (Player1.CurrentStage != 1 && Player1.CurrentStage != 10)
		{
		Player1.TMP_Dexter++;
		}

	Previous_Stage = Game_Stages[Player1.CurrentStage];

	switch(Player1.CurrentStage)
		{

		case 0: // Stage 1 (the robot drillers)

		Current_Stage = Stage1p1;
		Game_Stages[Player1.CurrentStage] = Current_Stage;

		break;

		case 1: // Stage 2 (flight to the space base)

		if (Game_Stages[Player1.CurrentStage].Id == 2) // Regular version.
			{
			Current_Stage = Stage2p1;
			}
		else // Mirrored version.
			{
			Current_Stage = Stage3p1;
			}

		break;

		case 2: // Stage 3 (space base, force fields and robot guards) or (space base, platforms and sentry drones)

		if (Game_Stages[Player1.CurrentStage].Id == 4) // Regular version.
			{
			Current_Stage = Stage4p2;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 5) // Mirrored version.
			{
			Current_Stage = Stage5p2;
			}

		else if (Game_Stages[Player1.CurrentStage].Id ==6) // Regular version.
			{
			Current_Stage = Stage6p2;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 7) // Mirrored version.
			{
			Current_Stage = Stage7p2;
			}

		break;

		case 3: // Stage 4 (green dogs or the junkyard)

		if (Game_Stages[Player1.CurrentStage].Id == 8) // Regular version.
			{
			Current_Stage = Stage8p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 9) // Mirrored version.
			{
			Current_Stage = Stage9p1;
			}

		if (Game_Stages[Player1.CurrentStage].Id == 10) // Regular version.
			{
			Current_Stage = Stage10p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 11) // Mirrored version.
			{
			Current_Stage = Stage11p1;
			}

		break;

		case 5: // Tunnel and red robots.

		if (Game_Stages[Player1.CurrentStage].Id == 14) // Regular version.
			{
			Current_Stage = Stage14p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 15) // Mirrored version.
			{
			Current_Stage = Stage15p1;
			}

		break;

		case 6: // Blue cats.

		if (Game_Stages[Player1.CurrentStage].Id == 16) // Regular version.
			{
			Current_Stage = Stage16p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 17) // Mirrored version.
			{
			Current_Stage = Stage17p1;
			}

		break;

		case 7: // Evil Ace.

		if (Game_Stages[Player1.CurrentStage].Id == 18) // Regular version.
			{
			Current_Stage = Stage18p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 19) // Mirrored version.
			{
			Current_Stage = Stage19p1;
			}

		break;

		case 8: // Bike chase.

		if (Game_Stages[Player1.CurrentStage].Id == 20) // Regular version.
			{
			Current_Stage = Stage20p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 21) // Mirrored version.
			{
			Current_Stage = Stage21p1;
			}

		break;

		case 9: // Roller skates.

		if (Game_Stages[Player1.CurrentStage].Id == 22) // Regular version.
			{
			Current_Stage = Stage22p1;
			}

		else if (Game_Stages[Player1.CurrentStage].Id == 23) // Mirrored version.
			{
			Current_Stage = Stage23p1;
			}

		break;

		case 10: // Ending.

		if (Game_Stages[Player1.CurrentStage].Id == 24)
			{
			Current_Stage = Stage24p2;
			}

		break;

		}

	Game_Stages[Player1.CurrentStage] = Current_Stage;

	Player1.CurrentScene = 0;
	Player1.StartingFrame = 0;
	Player1.CurrentAction = NO_ACTION;
	Game_Status = STATUS_DEXTER;

	break;

	case INIT_PLAYER_CONTINUE:

	if (Game_Config.Difficulty > EASY_DIFFICULTY)
		Player1.Credits--;
	Player1.CreditsUsed++;
	Player1.Lives = INITIAL_LIVES;
	// Set current scene after checkpoint or restart from the beginning.
	Set_StartingFrame();
	Player1.CurrentAction = NO_ACTION;

	break;

	case INIT_PLAYER_STAGECLEAR:

// Stage 4 variant depends on path chosen in stage 3.

	if (Player1.ExitChoice == ALT_EXIT && Player1.CurrentStage == 2)
		{

		Result = rand() % 2;

		if ( Result == 1 )
			{
			Game_Stages[Player1.CurrentStage+1] = Stage10; // Regular.
			}
		else

			{
			Game_Stages[Player1.CurrentStage+1] = Stage11; // Mirrored.
			}

		}

// Stage 2 is an exception, next stage is decided in the middle of the stage instead of the last move.

	else if (Game_Stages[Player1.CurrentStage].Movie == Stage2p1.Movie || Game_Stages[Player1.CurrentStage].Movie == Stage3p1.Movie) // Lower path has been chosen.
			{
			Result = rand() % 2;

			if ( Result == 1 )
				{
				Game_Stages[Player1.CurrentStage+1] = Stage6;// Regular
				}
			else
				{
				Game_Stages[Player1.CurrentStage+1] = Stage7;// Mirrored
				}
			}
//---------------

	Player1.CurrentStage++;
	Player1.Dexter += Player1.TMP_Dexter;
	Player1.TMP_Dexter = 0;
	Player1.CurrentScene = 0;
	Player1.CurrentCheckpoint = 0;
	Player1.StartingFrame = 0;
	Player1.CurrentAction = NO_ACTION;
	Previous_Stage = Current_Stage = Game_Stages[Player1.CurrentStage];
	Player1.ExitChoice = DEFAULT_EXIT;

	break;

	case INIT_PLAYER_DEBUGGING:

// Restore current stage.
	Game_Stages[Player1.CurrentStage] = Previous_Stage;

	Player1.CurrentStage = Debug_Stage.Stage;
	Player1.CurrentCheckpoint = Debug_Stage.Checkpoint;
	Player1.Dexter += Player1.TMP_Dexter;
	Player1.TMP_Dexter = 0;


// Replace random stage with custom selected one.
	switch(Player1.CurrentStage)
		{
		case 1: // Stage2
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[1] = Stage3;
			}
		else
			{
			Game_Stages[1] = Stage2;
			}
		break;

		case 2: // Stage 3
		if (Debug_Stage.Alternate == 1)
			{
// Default path.
			if (Game_Stages[2].Id == 4 || Game_Stages[2].Id == 5)
				{
				Game_Stages[2] = Stage5;
				}
// Alternate path.
			else
				{
				Game_Stages[2] = Stage7;
				}
			}
		else
			{
// Default path.
			if (Game_Stages[2].Id == 4 || Game_Stages[2].Id == 5)
				{
				Game_Stages[2] = Stage4;
				}
// Alternate path.
			else
				{
				Game_Stages[2] = Stage6;
				}
			}
		break;

		case 3: // Stage 4
		if (Debug_Stage.Alternate == 1)
			{
// Default path.
			if (Game_Stages[3].Id == 8 || Game_Stages[3].Id == 9)
				{
				Game_Stages[3] = Stage9;
				}
// Alternate path.

			else
				{
				Game_Stages[3] = Stage11;
				}

			}
		else
			{
// Default path.
			if (Game_Stages[3].Id == 8 || Game_Stages[3].Id == 9)
				{
				Game_Stages[3] = Stage8;
				}
// Alternate path.

			else
				{
				Game_Stages[3] = Stage10;
				}

			}

		case 4:
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[4] = Stage13;
			}
		else
			{
			Game_Stages[4] = Stage12;
			}
		break;

		case 5:
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[5] = Stage15;
			}
		else
			{
			Game_Stages[5] = Stage14;
			}
		break;

		case 6:
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[6] = Stage17;
			}
		else
			{
			Game_Stages[6] = Stage16;
			}
		break;

		case 7:
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[7] = Stage19;
			}
		else
			{
			Game_Stages[7] = Stage18;
			}
		break;

		case 8:
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[8] = Stage21;
			}
		else
			{
			Game_Stages[8] = Stage20;
			}
		break;

		case 9:
		if (Debug_Stage.Alternate == 1)
			{
			Game_Stages[9] = Stage23;
			}
		else
			{
			Game_Stages[9] = Stage22;
			}
		break;

		}

//-------------------

	Previous_Stage = Current_Stage = Game_Stages[Debug_Stage.Stage];
	Set_StartingFrame();
	Player1.CurrentAction = NO_ACTION;
	Game_Status = STATUS_GAMEPLAY;
	Player1.ExitChoice = DEFAULT_EXIT;

	break;

	}

BSCurrentFrame = 0;

}


// ******************************************************************************************


// Init required variables when starting a new game.

void Init_Game(void)
{

Init_Player(INIT_PLAYER_NEWGAME);

Shuffle_Stages();

}


// ******************************************************************************************


// Init variables as required for current game status.

void Init_Status(short Status)
{

switch (Status)
	{

	case STATUS_LOADING:
	CopyScreen(cdb);
	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_LOADING;
	break;

	case STATUS_TITLE:
	if (Game_Config.Vibration == YES && PadGetState(0x00) == 6 )
		{
		Init_DS_Motors();
		}
// Exclude fadeout in 24bit mode.
	if (dec.is24Bit)
		{
		FadeBrightness = 150;
		}
// Select required buffer index before taking screenshot for fadeout.
	else if (Game_Status == STATUS_GAMEPLAY || Game_Status == STATUS_DEATH || Game_Status == STATUS_BORF)
		{

		if( !(Player1.Pause) )
			{
			dec.rectId ^= 1;
			CopyScreen(dec.rectId);
			}
		else
			{
			CopyScreen(dec.rectId);
			dec.rectId ^= 1;
			}

//		dec.rectId ^= 1;
//		CopyScreen(dec.rectId);
		}
	else if (Game_Status == STATUS_INTRO_MOVIE || Game_Status == STATUS_SECRET || Game_Status == STATUS_WATCHMOVIES)
		{
		CopyScreen(dec.rectId);		
		}
	else
		{
		CopyScreen(cdb);
		}

	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_TITLE;
	Title_Music_Playing = NO;
	Countdown_To_Intro = TITLE_IDLE_TIME;
	BSCurrentFrame = 0;
	Options_Menu = 0;
	Selected_Option = 0;
	Player1.Pause = 0;
	break;

	case STATUS_INTRO_MOVIE:
	CopyScreen(cdb);
	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_INTRO_MOVIE;
	break;

	case STATUS_GAMEPLAY:
	if (Game_Config.Vibration == YES && PadGetState(0x00) == 6 )
		{
		Init_DS_Motors();
		}
	Init_Game();
	CopyScreen(cdb);
	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_GAMEPLAY;
	break;

	case STATUS_CONTINUE:
	CopyScreen(cdb);
	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_GAMEPLAY;

	Init_Player(INIT_PLAYER_CONTINUE);
	break;

	case STATUS_CREDITS:
// Japanese font set can't display western characters with accents.
	if (SelectedLanguage == 1) // Japanese
		{
		End_Credits[CREDITS_LENGTH-3][9] = 'O';
		}
	else
		{
		End_Credits[CREDITS_LENGTH-3][9] = 'Ó';
		}

	Credits_Y = 240;
	BSCurrentFrame = 0;
	Game_Status = STATUS_CREDITS;
	PlaySound(SFXEnd);
	break;

	case STATUS_DEBUGMENU:
	CopyScreen(cdb);
	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_DEBUGMENU;
	BSCurrentFrame = 0;
	break;

	case STATUS_PADTEST:
	CopyScreen(cdb);
	Game_Status = STATUS_FADEOUT;
	Next_Game_Status = STATUS_PADTEST;
	break;
	
	}

// For handling errors.
Prev_Game_Status = Next_Game_Status;

}

// ******************************************************************************************

// Score for ending screen.


void Display_Score(void)
{
char TotalStars[5];

short i;

if (Player1.Score == 0)
	{
	for (i=0; i<5; i++)
		{
		TotalStars[i] = ' ';
		}

	switch(Game_Config.Difficulty)
		{

		case EASY_DIFFICULTY:
		if (Player1.Dexter == 0)
			{
			Player1.Score += 1;
			}

		if (Player1.CreditsUsed == 0)
			{
			Player1.Score += 1;
			}

		if (Player1.Deaths == 0)
			{
			Player1.Score += 1;
			}
		break;

		case NORMAL_DIFFICULTY:
		if (Player1.Dexter == 0)
			{
			Player1.Score += 2;
			}
		else
			{
			Player1.Score += 1;
			}

		if (Player1.CreditsUsed == 0)
			{
			Player1.Score += 1;
			}

		if (Player1.Deaths == 0)
			{
			Player1.Score += 1;
			}
		break;

		case HARD_DIFFICULTY:
		if (Player1.Dexter == 0)
			{
			Player1.Score += 3;
			}
		else
			{
			Player1.Score += 2;
			}

		if (Player1.Deaths == 0)
			{
			Player1.Score += 2;
			}
		break;
		}

//printf("\nScore: %d", Player1.Score);
	}


for (i=0; i<Player1.Score; i++)
	{
	TotalStars[i] = ' '-15;
	}

if (Player1.Score == 0)
	{
	TotalStars[0] = ' '-16;
	Puts16p(16+(strlen(TXT_Score[SelectedLanguage]) * 16)+32, 26+(20*9), TotalStars, ColorYellow);	
	}
else
	{
	Puts16p(16+(strlen(TXT_Score[SelectedLanguage]) * 16)+32, 26+(20*9), TotalStars, ColorYellow);
	}

}


// ******************************************************************************************


// Ending screen.

void Ending_Screen(void)
{
char MyText[30];


PlayBSFrame(BSEnding, BSNOLOOP);


// Energize / Dexter.
sprintf(MyText, "%s: %d/%d", TXT_Energize[SelectedLanguage], MAX_DEXTER - Player1.Dexter, MAX_DEXTER);
Puts16p(16, 26, MyText, ColorWhite);

// Deaths.
sprintf(MyText, "%s: %d", TXT_Mistakes[SelectedLanguage], Player1.Deaths);
Puts16p(16, 26+(20), MyText, ColorWhite);

// Continues.
sprintf(MyText, "%s: %d", TXT_Retries[SelectedLanguage], Player1.CreditsUsed);
Puts16p(16, 26+(20*2), MyText, ColorWhite);

// Perfect run.
if ( Player1.Deaths == 0 && Player1.Dexter == 0 )
	{
	Blinking_Text( TXT_Perfect[SelectedLanguage] );
	}

//Difficulty.
sprintf(MyText, "%s:%s", TXT_Difficulty[SelectedLanguage], Difficulty_Entries[Game_Config.Difficulty]);
if ( (Game_Config.Difficulty == 2 && SelectedLanguage == 4) || SelectedLanguage == 5)
	{
	Puts8p(16, 26+(20*7), MyText, ColorWhite);
	}
else
	{
	Puts16p(16, 26+(20*7), MyText, ColorWhite);
	}

// Score.
sprintf(MyText, "%s:", TXT_Score[SelectedLanguage]);
Puts16p(16, 26+(20*9), MyText, ColorWhite);
Display_Score();

if (Debug_Config.Debug_Mode == 1)
	{
	CenterText(10, 8, "Debug Mode", ColorWhite);
	}

if (Pad1.Start == TAP_BUTTON)
	{
	SsUtAllKeyOff(0);
	Init_Status(STATUS_CREDITS);
	}
}


// ******************************************************************************************

// Hidden movie playback.


void Play_Secret(void)
{

PlayStream(&STR_DLDemo, 0);

if (Game_Status != STATUS_ERRORSCREEN)
	{
	Init_Status(STATUS_TITLE);
	}
// To avoid a blinking frame when framebuffer index does not match.
cdb = dec.rectId;
}


// ******************************************************************************************


// End credits roll.

void Credits_Roll(void)
{
short i;

PlayBSFrame(BSEnding, BSNOLOOP);


if ( Credits_Y > (-12 * CREDITS_LENGTH) )
	{
	Credits_Y-=2;
	}
else
	{
	SsUtAllKeyOff(0);
	if (Game_Config.Difficulty == HARD_DIFFICULTY && Player1.Dexter == 0)
		{
		Game_Status = STATUS_SECRET;
		}
	else
		{
		Init_Status(STATUS_TITLE);
		}
	return;
	}


for (i=0;i < CREDITS_LENGTH; i++)
	{
	if ( ( ( Credits_Y + (i*12) ) > -8 ) && ( ( Credits_Y + (i*12) ) < 248 ) )
		{
		CenterText(Credits_Y + (i*12), 8, End_Credits[i], ColorWhite);
		}
	}

//if (Credits_Y < -1800)
if (Credits_Y < -12 * (CREDITS_LENGTH - 10) )
	{
	CenterText(116,16,"Thanks for playing!", ColorWhite);
	}

if ( Pressed(UP_KEY) || Left_Stick_Y < -STICK_THRESHOLD || Right_Stick_Y < -STICK_THRESHOLD )
	{
	Credits_Y -= 10;
	}

if ( Credits_Y < 240 && ( Pressed(DOWN_KEY) || Left_Stick_Y > STICK_THRESHOLD || Right_Stick_Y > STICK_THRESHOLD ) )
	{
	Credits_Y += 10;
	}

}


// ******************************************************************************************


// Play current stage movie.

void Play_Stage(void)
{

PlayStream(Game_Stages[Player1.CurrentStage].Movie, Player1.StartingFrame);

// Init next stage or alternate path.

// Play alternate exit movie if required.

if (Game_Status == STATUS_ALT_EXIT)
	{
	PlayStream(Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction], 0);

// Check if player has not pressed START+SELECT to quit during movie.
	if (Game_Status == STATUS_ALT_EXIT)
		{
		Game_Status = STATUS_GAMEPLAY; // Keep playing game.
		Player1.ExitChoice = ALT_EXIT;
		}
	}


if (Game_Status == STATUS_GAMEPLAY)
	{
	if (Player1.CurrentStage < MAX_STAGES-1)
		{
		Init_Player(INIT_PLAYER_STAGECLEAR);
		}
	else
		{
		Player1.Dexter += Player1.TMP_Dexter;
		BSCurrentFrame = 0;
		Game_Status = STATUS_ENDING;
		PlaySound(SFXContinue);
		}
	}

else if (Game_Status == STATUS_DEXTER)
	{
	Game_Status = STATUS_GAMEPLAY;
	}

else if (Game_Status == STATUS_DEBUGGING)
	{
	Init_Player(INIT_PLAYER_DEBUGGING);
	}

// To avoid a blinking frame when framebuffer index does not match.
cdb = dec.rectId;
}


// ******************************************************************************************


// Game Over screen.

void GameOver_Screen(void)
{

PlayBSFrame(BSGameOver, BSNOLOOP);

CenterText(112, 16, "Game Over", ColorWhite);

if (Pad1.Start == TAP_BUTTON || Pad1.Fire == TAP_BUTTON && BSCurrentFrame >= 10)
	{
	SsUtAllKeyOff(0);
	PlaySound(SFXConfirm);
	Init_Status(STATUS_TITLE);
	}

}


// ******************************************************************************************


// Continue screen.

void Continue_Screen(void)
{
char MyText[20];

PlayBSFrame(BSGameOver, BSNOLOOP);

if ( Game_Config.Difficulty == EASY_DIFFICULTY )
	{
	sprintf(MyText, "%s: `", TXT_Credits[SelectedLanguage]);
	Puts16p(16, 26, MyText, ColorWhite);
	}
else
	{
	sprintf(MyText, "%s: %d", TXT_Credits[SelectedLanguage], Player1.Credits);
	Puts16p(16, 26, MyText, ColorWhite);
	}

CenterText(112, 16, TXT_Continue[SelectedLanguage], ColorWhite);

sprintf(MyText, "%d", Countdown_To_Intro);

CenterText(132, 16, MyText, ColorWhite);

if (Countdown_To_Intro <= 0)
	{
	PlaySound(SFXContinue);
	Game_Status = STATUS_GAMEOVER;
	BSCurrentFrame = 0;
	}

else if (  ( ( LoopCount % (FRAMES_PER_SECOND/2) ) == 0 ) || Pad1.Fire == TAP_BUTTON)
	{
	PlaySound(SFXWrong);
	Countdown_To_Intro--;
	}

else if (Pad1.Start == TAP_BUTTON)
	{
	PlaySound(SFXTitle);
	Init_Status(STATUS_CONTINUE);
	}

}

// ******************************************************************************************

// Print remaining lives.

void Print_Lives(void)
{
char MyText[20];

sprintf(MyText, "%s: %d", TXT_Lives[SelectedLanguage], Player1.Lives);
CenterText(210, 16, MyText, ColorWhite);

}


// ******************************************************************************************

// Borf animation.

void Play_BorfMovie(void)
{

PlayStream(Game_Stages[Player1.CurrentStage].BorfMovie, 0);

// If not preseed SELECT+START during movie playback continue playing game.

if (Game_Status == STATUS_BORF)
	{
	Game_Status = STATUS_GAMEPLAY;
	Prev_Game_Status = STATUS_BORF;
	}

}


// ******************************************************************************************


// Play death movie.

void Play_Death(void)
{

PlayStream(Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction], 0);

// Check player has not pressed START + SELECT during movie.
if (Game_Status == STATUS_DEATH)
	{
	Init_Player(INIT_PLAYER_DEATH);

	if (Player1.Lives > 0)
		{
		Game_Status = STATUS_BORF;
		}
	else
		{
// Game Over / Continue screen.
		if (Player1.Credits > 0 || Game_Config.Difficulty == EASY_DIFFICULTY)
			{
			Game_Status = STATUS_CONTINUE;
			Countdown_To_Intro = 10;
			}
		else
			{
			PlaySound(SFXContinue);
			Game_Status = STATUS_GAMEOVER;
			}
		BSCurrentFrame = 0;
		}
	}

if (Game_Config.Vibration == YES && PadGetState(0x00) == 6)
	{
	Init_DS_Motors();
	}

// To avoid a blinking frame when framebuffer index does not match.
cdb = dec.rectId;
}


// ******************************************************************************************


// Initialize textures and sounds previously loaded from disc.

int InitAssets(void)
{
// Init font textures. Load western font by default.

	if ( ReadMyTIM((u_long *)FONT16W_TIM) == 1)
		{
		return 1; // Error.
		}
	InitFont16p(640, 0, 640, 256);

	if ( ReadMyTIM((u_long *)FONT8W_TIM) == 1)
		{
		return 1; // Error.
		}
	InitFont8p(704, 0, 704, 256);

// Set up primitives for the fade out effect.
	setRGB0(&FadeLeft, 255, 255, 255);
	setXYWH(&FadeLeft, 0, 0, 192, 255 );
	setTPage(&FadeLeft, 2, 1, 320, 0);
	setUV4(&FadeLeft, 0, 0, 192, 0, 0, 255, 192, 255);

	setRGB0(&FadeRight, 255, 255, 255);
	setXYWH(&FadeRight, 192, 0, 128, 255 );
	setTPage(&FadeRight, 2, 1, 512, 0);
	setUV4(&FadeRight, 0, 0, 128, 0, 0, 255, 128, 255);

// Init dimensions of bitstream chunks.
	InitBSFrameSize();
	InitBSMovie();

// Init sound samples.
	SoundEffects = SsVabTransfer((u_char*)SFX_VH, (u_char*)SFX_VB, 0, SS_WAIT_COMPLETED);

// Check for errors.

	if ( (int)SoundEffects < 0 )
		{
		return 1;
		}

// No errors.
	return 0;

}


// ******************************************************************************************

// Intro movie playback.


void Play_Intro(void)
{

PlayStream(&STR_Intro, 0);

if (Game_Status != STATUS_ERRORSCREEN)
	{
	Init_Status(STATUS_TITLE);
	}
// To avoid a blinking frame when framebuffer index does not match.
cdb = dec.rectId;
}


// ****************************************************************************************



// Show stored screenshot with decreasing brightness until screen fades to black.


void FadeOut(void)
{
RECT MyRect = {320,0,320,240};

setRGB0(&FadeLeft, FadeBrightness, FadeBrightness, FadeBrightness);
setRGB0(&FadeRight, FadeBrightness, FadeBrightness, FadeBrightness);

setPolyFT4(&FadeLeft);
DrawPrim(&FadeLeft);

setPolyFT4(&FadeRight);
DrawPrim(&FadeRight);

FadeBrightness -= 2;


if (FadeBrightness <= 0)
	{
//Fade out complete, move on.
	Game_Status = Next_Game_Status;
	ClearImage(&MyRect, 0, 0, 0);
	}

}


// ******************************************************************************************

// This is the first screen shown after booting the program. Assets are loaded from disc while a progress bar is displayed.

void Loading_Screen(void)
{
POLY_F4 BG_Frame;
CdlLOC FilePosition;
static short Gauge = 0;

//Frame and background.

SetPolyF4(&BG_Frame);
setRGB0(&BG_Frame, 0, 0, 255); //Blue background
//setXY4(&BG_Frame, 10, 15, 310, 15, 10, Height-30, 310, Height-30);
setXY4(&BG_Frame, 0, 0, 320, 0, 0, Height, 320, Height);
DrawPrim(&BG_Frame);

//Loading gauge
SetPolyF4(&BG_Frame);
setRGB0(&BG_Frame, 255, 255, 255); //White frame
setXY4(&BG_Frame, 60, 150, 260, 150, 60, 200, 260, 200);
DrawPrim(&BG_Frame);

//Empty bar
SetPolyF4(&BG_Frame);
setRGB0(&BG_Frame, 0, 0, 255); //Blue empty bar
setXY4(&BG_Frame, 60+5, 150+5, 260-5, 150+5, 60+5, 200-5, 260-5, 200-5);
DrawPrim(&BG_Frame);

FntPrint(fIdA, "\n\n\n~c990Space Ace~c999 is a registered\ntrademark of\
 bluth group, ltd.\n\n\nThis is an unofficial, unauthorized \nport made \
for educational purposes\nonly.\n\n\nNot to be sold in any form.");

//Progress bar is empty
if (Gauge == 0)
	{
//Start reading assets file.
	if ( !CdControl(CdlSetloc, (u_char *)CdIntToPos(Assets.Position, &FilePosition),0) )
		{
//		CdControlB(CdlPause, 0, 0); //Pause CD
		PauseCD();
		Prev_Game_Status = Game_Status;
		Game_Status = STATUS_ERRORSCREEN;

		SaveError(READ_ERROR, __FILE__, __FUNCTION__, __LINE__);
		return;
		}

	if ( !CdRead(Assets.Size, (u_long *)ASSETS_ADDRESS, CdlModeSpeed) )
		{
//		CdControlB(CdlPause, 0, 0); //Pause CD
		PauseCD();
		Prev_Game_Status = Game_Status;
		Game_Status = STATUS_ERRORSCREEN;

		SaveError(READ_ERROR, __FILE__, __FUNCTION__, __LINE__);
		return;
		}

// Compute % of loaded data.
	Gauge = 1 + Assets.Size - CdReadSync(1, 0);
	}
else if (CdReadSync(1, 0) == 0)
	{
//Assets loaded.
	if ( InitAssets() == 0)
		{
		Game_Status = STATUS_FADEOUT;
		Next_Game_Status = STATUS_LANGUAGE_SELECTION;
		}
	else
		{
		Game_Status = STATUS_ERRORSCREEN;
		SaveError(READ_ERROR, __FILE__, __FUNCTION__, __LINE__);
		return;
		}
	}
else if (CdReadSync(1, 0) == -1 || _get_errno() == 2)
	{
//Read error.
//	CdControlB(CdlPause, 0, 0); //Pause CD
	PauseCD();
	Prev_Game_Status = Game_Status;
	Game_Status = STATUS_ERRORSCREEN;

	SaveError(READ_ERROR, __FILE__, __FUNCTION__, __LINE__);
	return;
	}

//Fill progress bar while loading.
	Gauge = 1 + Assets.Size - CdReadSync(1, 0);

	//Yellow progress bar
	SetPolyF4(&BG_Frame);
	setRGB0(&BG_Frame, 255, 255, 0); //Yellow progress bar
	setXY4(&BG_Frame, 60+5, 150+5, ((60+5) + ( (Gauge * 100)/Assets.Size)*190/100 ), 150+5, 60+5, 200-5, ((60+5) + ( (Gauge * 100)/Assets.Size)*190/100 ), 200-5);
	DrawPrim(&BG_Frame);


//Print % of loaded data.
FntPrint(fIdA, "\n\n\n\n\n\n\n			 Loading %3d%%", (Gauge * 100)/Assets.Size);

//Print errors (for debugging only)
//FntPrint(fIdA, "\n\nError: %d", _get_errno());
//printf("\nError: %d", _get_errno());


FntFlush(fIdA);

// Leave when ready and take a screenshot for the fade out.
if ( Game_Status == STATUS_FADEOUT)
	{
	FntPrint(fIdA, "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n 	   WELCOME TO SPACE ACE");

// For the random mirrored levels.
//	srand(LoopCount);
	srand(GetRCnt(2));
	printf("\nWelcome to Space Ace.\nBuild date: %s", __DATE__);
	PlaySound(SFXConfirm);
	FntFlush(fIdA);
	CopyScreen(cdb);
	}
// In case of read error init gauge to retry reading.
else if ( Game_Status == STATUS_ERRORSCREEN )
	{
	Gauge = 0;
	}

}


// ******************************************************************************************

// Take a screenshot for the pause mode. Not optimized for 24bit pictures.

extern void StrClearVRAM(void);
extern StrInfo StrInfoBase;

void Take_Pause_Screenshot(void)
{
short BufferIndex = dec.rectId;

// Only 16bit mode.
if (StrInfoBase.mode == STR_MODE16)
	{
	BufferIndex ^= 1;
	CopyScreen(BufferIndex);

	setRGB0(&FadeLeft, 150, 150, 150);
	setRGB0(&FadeRight, 150, 150, 150);
	}
else
	{
	StrClearVRAM();
	}
}

// ******************************************************************************************

void Show_Pause_Screenshot(void)
{
if (StrInfoBase.mode == STR_MODE16)
	{
	setPolyFT4(&FadeLeft);
	DrawPrim(&FadeLeft);

	setPolyFT4(&FadeRight);
	DrawPrim(&FadeRight);
	}

}

// ******************************************************************************************

// Alternate pause state during game.

void Switch_Pause_Mode(void)
{

if (Game_Config.Vibration == YES && PadGetState(0x00) == 6 )
	{
	Init_DS_Motors();
	}

PlaySound(SFXConfirm);
Player1.Pause ^= 1;
if (Player1.Pause == YES)
	{
	Take_Pause_Screenshot();
//	CdControlB(CdlPause, 0, 0);
	if ( !PauseCD() )
		{
		StopPlayingMovie = YES;
		Prev_Game_Status = Game_Status;
		Game_Status = STATUS_ERRORSCREEN;

		SaveError(READ_ERROR, __FILE__, __FUNCTION__, __LINE__);
		}
	}
else
	{
	if ( !CdRead2(CdlModeStream|CdlModeSpeed|CdlModeRT) )
		{
//		CdControlB(CdlPause, 0, 0); //Pause CD
		PauseCD();
		StopPlayingMovie = YES;
		Prev_Game_Status = Game_Status;
		Game_Status = STATUS_ERRORSCREEN;

		SaveError(READ_ERROR, __FILE__, __FUNCTION__, __LINE__);
		}
	}

}



// ******************************************************************************************

// Debug / cheat menu for quickly testing scenes.

void InGame_Debug_Menu(void)
{

//DrawWindow(50,127,220,90);

FntPrint(fIdA, "\n\n\n\n\n\n\n\n\n\n\n\n\n\n			  debug menu");
FntPrint(fIdA, "\n\n 		Unlimited lives: %s", OnOff_Entries[Debug_Stage.UnlimitedLives]);
FntPrint(fIdA, "\n\n 		Stage: %d", Debug_Stage.Stage+1);
FntPrint(fIdA, "\n\n 		Checkpoint: %d", Debug_Stage.Checkpoint);

if (Debug_Stage.Stage > 0 && Debug_Stage.Stage < MAX_STAGES-1)
	{
	FntPrint(fIdA, "\n\n 		Mirrored: %s", OnOff_Entries[Debug_Stage.Alternate]);
	}
else
	{
	FntPrint(fIdA, "\n\n");
	}

FntPrint(fIdA, "\n\n 		Apply changes");
FntFlush(fIdA);

Puts8p(75, 144 + (Selected_Option*16), ">", ColorWhite);

if (Pad1.Down == TAP_BUTTON)
	{
	PlaySound(SFXCorrect);
	Selected_Option++;
	if (Selected_Option > 4)
		{
		Selected_Option = 0;
		}
	}

if (Pad1.Up == TAP_BUTTON)
	{
	PlaySound(SFXCorrect);
	Selected_Option--;
	if (Selected_Option < 0)
		{
		Selected_Option = 4;
		}
	}

if (Pad1.Right == TAP_BUTTON)
	{
	PlaySound(SFXCorrect);
	switch ( Selected_Option )
		{
		case 0: // Unlimited lives.
		Debug_Stage.UnlimitedLives ^= 1;
		break;

		case 1: // Stage.
		Debug_Stage.Stage++;
		if ( Debug_Stage.Stage > MAX_STAGES-1 )
			{
			Debug_Stage.Stage = 0;
			}
		break;

		case 2: // Checkpoint.
		Debug_Stage.Checkpoint++;
		if ( Debug_Stage.Checkpoint > 1 )
			{
			Debug_Stage.Checkpoint = 0;
			}
		break;

		case 3: // Alternate levels.
		Debug_Stage.Alternate ^= 1;
		break;
		}
	}

if (Pad1.Left == TAP_BUTTON)
	{
	PlaySound(SFXCorrect);
	switch ( Selected_Option )
		{
		case 0: // Unlimited lives.
		Debug_Stage.UnlimitedLives ^= 1;
		break;

		case 1: // Stage.
		Debug_Stage.Stage--;
		if ( Debug_Stage.Stage < 0 )
			{
			Debug_Stage.Stage = MAX_STAGES-1;
			}
		break;

		case 2: // Checkpoint.
		Debug_Stage.Checkpoint--;
		if ( Debug_Stage.Checkpoint < 0 )
			{
			Debug_Stage.Checkpoint = 1;
			}
		break;

		case 3: // Alternate levels.
		Debug_Stage.Alternate ^= 1;
		break;
		}	
	}

if ( Pad1.Fire == TAP_BUTTON && Selected_Option == 4 )
	{
	StopPlayingMovie = YES;
	Game_Status = STATUS_DEBUGGING;
	Switch_Pause_Mode();
	}


if ( Pad1.R_1 == TAP_BUTTON && Player1.Dexter < MAX_DEXTER)
	{
	Player1.Dexter++;
	}

if ( Pad1.L_1 == TAP_BUTTON && Player1.Dexter > 0)
	{
	Player1.Dexter--;
	}

}


// ******************************************************************************************

// Play sound effect depending on player's right or wrong choice.

void Decide_SFX(void)
{

if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Type == MOVIE_ALT_EXIT ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Type == MOVIE_DEXTER ))
	{
	PlaySound(SFXCorrect);
	}
else
	{
	PlaySound(SFXWrong);
	}

}


// ******************************************************************************************

// Print correct move when playing easy difficulty setting.

void Display_Hints(void)
{

if ( Game_Config.Difficulty == EASY_DIFFICULTY )
	{
// Up
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[1] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[1]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[1]->Type == MOVIE_DEXTER) )
		{
		if (Player1.CurrentAction == NO_ACTION)
			{
			CenterText(16, 16, Move_Entries[1], ColorWhite);
			}
		else if (Player1.CurrentAction == ACTION_UP)
			{
			CenterText(16, 16, Move_Entries[1], ColorYellow);
			}
		else
			{
			CenterText(16, 16, Move_Entries[1], ColorRed);
			}
		}

// Down
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[2] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[2]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[2]->Type == MOVIE_DEXTER) )
		{
		if (Player1.CurrentAction == NO_ACTION)
			{
			CenterText(210, 16, Move_Entries[2], ColorWhite);
			}
		else if (Player1.CurrentAction == ACTION_DOWN)
			{
			CenterText(210, 16, Move_Entries[2], ColorYellow);
			}
		else
			{
			CenterText(210, 16, Move_Entries[2], ColorRed);
			}
		}

// Left
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[3] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[3]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[3]->Type == MOVIE_DEXTER) )
		{
		if (Player1.CurrentAction == NO_ACTION)
			{
			Puts16p(16, 112, Move_Entries[3], ColorWhite);
			}
		else if (Player1.CurrentAction == ACTION_LEFT)
			{
			Puts16p(16, 112, Move_Entries[3], ColorYellow);
			}
		else
			{
			Puts16p(16, 112, Move_Entries[3], ColorRed);
			}
		}

// Right.
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[4] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[4]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[4]->Type == MOVIE_DEXTER) )
		{
		if (Player1.CurrentAction == NO_ACTION)
			{
			AlignRight(112, 16, Move_Entries[4], ColorWhite);
			}
		else if (Player1.CurrentAction == ACTION_RIGHT)
			{
			AlignRight(112, 16, Move_Entries[4], ColorYellow);
			}
		else
			{
			AlignRight(112, 16, Move_Entries[4], ColorRed);
			}

		}

// Fire / energize
	if ( ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[5] == KEEP_PLAYING ) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[5]->Type == MOVIE_ALT_EXIT) || ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[5]->Type == MOVIE_DEXTER) )
		{
		if (Player1.CurrentAction == NO_ACTION)
			{
			CenterText(130, 16, Move_Entries[5], ColorWhite);
			}
		else if (Player1.CurrentAction == ACTION_FIRE)
			{
			CenterText(130, 16, Move_Entries[5], ColorYellow);
			}
		else
			{
			CenterText(130, 16, Move_Entries[5], ColorRed);
			}
		}

	}

}


// ******************************************************************************************


// Shake dualshock when reaching certain frames.

void Check_Rumble_Frame(void)
{

/*
if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && (STRCurrentFrame == Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleFrame) && (Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleType != NULL) )
	{
	Rumble_Motor[Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleType-1].motor();
	}

// Additional rumble scenes at the end of movies.


// Big explosion ath the end of stage 8/9.

else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && (Game_Stages[Player1.CurrentStage].Id == 8 || Game_Stages[Player1.CurrentStage].Id == 9) )
	{
// Short path as Dexter.
	if (STRCurrentFrame == 114 && ( Game_Stages[Player1.CurrentStage].Movie == Stage8p1.Movie || Game_Stages[Player1.CurrentStage].Movie == Stage9p1.Movie) )
		{
		Rumble_Motor[BOTH_RUMBLE-1].motor();
		}
// Regular path as Ace.
	else
		{
		if (STRCurrentFrame == 374)
				{
				Rumble_Motor[BOTH_RUMBLE-1].motor();
				}
		}

	}

// Ship bouncing at the end of stage 12/13.

else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && (Game_Stages[Player1.CurrentStage].Id == 12 || Game_Stages[Player1.CurrentStage].Id == 13) && STRCurrentFrame == 325)
	{
	Rumble_Motor[LOW_RUMBLE-1].motor();
	}

// Big head crashing at the end of stages 18/19.

else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && (Game_Stages[Player1.CurrentStage].Id == 18 || Game_Stages[Player1.CurrentStage].Id == 19) && STRCurrentFrame == 351)
	{
	Rumble_Motor[BOTH_RUMBLE-1].motor();
	}

// Ending.

else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && Game_Stages[Player1.CurrentStage].Id == 24 && STRCurrentFrame == 787)
	{
	Rumble_Motor[LOW_RUMBLE-1].motor();
	}
else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && Game_Stages[Player1.CurrentStage].Id == 24 && STRCurrentFrame == 888)
	{
	Rumble_Motor[LOW_RUMBLE-1].motor();
	}
else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && Game_Stages[Player1.CurrentStage].Id == 24 && STRCurrentFrame == 1030)
	{
	Rumble_Motor[LOW_RUMBLE-1].motor();
	}
*/


if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) && (STRCurrentFrame == Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleFrame) && (Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleType != NULL) )
	{
	Rumble_Motor[Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->RumbleType-1].motor();
	}

else if ( (Game_Config.Vibration == YES) && (PadGetState(0x00) == 6) )
	{
	switch(Game_Stages[Player1.CurrentStage].Id)
		{

// Big explosion ath the end of stage 8/9.

		case 8:
		case 9:

// Short path as Dexter.
		if (STRCurrentFrame == 114 && ( Game_Stages[Player1.CurrentStage].Movie == Stage8p1.Movie || Game_Stages[Player1.CurrentStage].Movie == Stage9p1.Movie) )
			{
			Rumble_Motor[BOTH_RUMBLE-1].motor();
			}
// Regular path as Ace.
		else
			{
			if (STRCurrentFrame == 374)
					{
					Rumble_Motor[BOTH_RUMBLE-1].motor();
					}
			}

		break;

// Ship bouncing at the end of stage 12/13.

		case 12:
		case 13:

		if (STRCurrentFrame == 325)
			{
			Rumble_Motor[LOW_RUMBLE-1].motor();
			}

		break;

// Big head crashing at the end of stages 18/19.

		case 18:
		case 19:

		if (STRCurrentFrame == 351)
			{
			Rumble_Motor[BOTH_RUMBLE-1].motor();
			}

		break;

// Ending.

		case 24:
// Long version.
		if (Game_Stages[Player1.CurrentStage].Movie == Stage24.Movie)
			{
			if (STRCurrentFrame == 787 || STRCurrentFrame == 888 || STRCurrentFrame == 1030)
				{
				Rumble_Motor[LOW_RUMBLE-1].motor();
				}
			}
// Short version.
		else
			{
			if (STRCurrentFrame == 360 || STRCurrentFrame == 461 || STRCurrentFrame == 604)
				{
				Rumble_Motor[LOW_RUMBLE-1].motor();
				}
			}

		break;

		}
	}

}


// ******************************************************************************************


// Handle pad input during intro movie.

void Interactions_Intro(void) {

if (Pad1.Start == TAP_BUTTON || Pad1.Fire == TAP_BUTTON)
	{
	PlaySound(SFXConfirm);
	StopPlayingMovie = YES;
	}
}


// ******************************************************************************************


// Pad input during death, borf and exit movies.

void Interactions_Additional_Movie(void) {

if (Game_Status == STATUS_BORF)
	{
	Print_Lives();
	}

else if (Game_Config.Vibration == YES && Player1.Pause == NO && STRCurrentFrame == 2 && Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Type == MOVIE_DEATH && Big_Motor.Duration == 0 && PadGetState(0x00) == 6)
	{
	DS_Medium_Rumble();
	}

// Quit game and return to title screen.
if ( Pressed(START_KEY) && Pressed(SELECT_KEY) )
	{
	PlaySound(SFXWrong);
	StopPlayingMovie = YES;
	Init_Status(STATUS_TITLE);
	}


// Pause mode prompt.
if ( Player1.Pause == YES)
	{
	Show_Pause_Screenshot();
	Blinking_Text( TXT_Pause[SelectedLanguage] );
	LoopCount++;
	}

// Toggle pause mode.
if ( Pad1.Start == TAP_BUTTON && ( STRCurrentFrame > 1 ) && ( STRCurrentFrame < Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Frames-1 )) // To prevent the game from crashing when pausing during last frame.
	{
	Switch_Pause_Mode();
	}

}


// ******************************************************************************************


// Pad input for actual gameplay.

void Interactions_Gameplay(void) {

// Quit game and return to title screen.
if ( Pressed(START_KEY) && Pressed(SELECT_KEY) )
	{
	PlaySound(SFXWrong);
	StopPlayingMovie = YES;
	Init_Status(STATUS_TITLE);
	return;
	}

// Pause mode prompt.
if ( Player1.Pause )
	{
	Show_Pause_Screenshot();
	Blinking_Text( TXT_Pause[SelectedLanguage] );
	LoopCount++;
// Display debug menu when enabled.
	if (Debug_Config.Debug_Mode == YES)
		{
		InGame_Debug_Menu();
		}
	}
// Actual gameplay.
else
	{
// Update checkpoint value.
	if ( ( STRCurrentFrame > Game_Stages[Player1.CurrentStage].Checkpoint ) && ( Game_Stages[Player1.CurrentStage].Checkpoint > 0) && ( Player1.CurrentCheckpoint < 1 ) && ( Game_Config.Difficulty != HARD_DIFFICULTY ) )
		{
		Player1.CurrentCheckpoint++;
		Player1.Dexter += Player1.TMP_Dexter;
		Player1.TMP_Dexter = 0;
		}

// Update scene index when correct move is performed or play death/exit animation.
//	if ( ( STRCurrentFrame > ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Frame + INTERACTION_FRAMES + COURTESY_FRAMES) ) && Player1.CurrentScene <= Game_Stages[Player1.CurrentStage].TotalScenes )
	if ( ( STRCurrentFrame > ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Frame + INTERACTION_FRAMES + COURTESY_FRAMES) || (STRCurrentFrame >= Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene + 1]->Frame) && (Player1.CurrentScene+1 < Game_Stages[Player1.CurrentStage].TotalScenes) ) && Player1.CurrentScene <= Game_Stages[Player1.CurrentStage].TotalScenes )
		{
// Correct move.
		if ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction] == KEEP_PLAYING )
			{
			Player1.CurrentScene++;
			Player1.CurrentAction = NO_ACTION; // Update status to no button pressed.
			}
		else
// Wrong move or alternate path.
			{
			StopPlayingMovie = YES;
			if ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Type == MOVIE_DEATH )
				{
				Game_Status = STATUS_DEATH;
				}
			else if ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Type == MOVIE_DEXTER )
				{
				Init_Player(INIT_PLAYER_DEXTER);
				}
			else if ( Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Movie[Player1.CurrentAction]->Type == MOVIE_ALT_EXIT )
				{
				Game_Status = STATUS_ALT_EXIT;
				}
			}
		}

	else if ( ( STRCurrentFrame >= Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Frame ) && ( STRCurrentFrame < Game_Stages[Player1.CurrentStage].Scene[Player1.CurrentScene]->Frame + INTERACTION_FRAMES + COURTESY_FRAMES) )
		{
// Display hints on easy mode.
		Display_Hints();

// Check and update action performed.
		if (Pad1.Up == TAP_BUTTON)
			{
			Player1.CurrentAction = ACTION_UP;
			Decide_SFX();
			}

		else if (Pad1.Down == TAP_BUTTON)
			{
			Player1.CurrentAction = ACTION_DOWN;
			Decide_SFX();
			}

		else if (Pad1.Left == TAP_BUTTON)
			{
			Player1.CurrentAction = ACTION_LEFT;
			Decide_SFX();
			}

		else if (Pad1.Right == TAP_BUTTON)
			{
			Player1.CurrentAction = ACTION_RIGHT;
			Decide_SFX();
			}

		else if (Pad1.Fire == TAP_BUTTON)
			{
			Player1.CurrentAction = ACTION_FIRE;
			Decide_SFX();
			}
		}

	Check_Rumble_Frame();
	} // end else if Player1.Pause

// Display debug info.
if (Debug_Config.Debug_Mode == YES)
	{
	if (Debug_Config.Debug_Info == YES)
		{
		Print_Debug_Info();
		}
	if (Pad1.Select == TAP_BUTTON)
		{
		Debug_Config.Debug_Info ^= 1;
		}
	}

// Toggle pause mode.
if (Pad1.Start == TAP_BUTTON)
	{
	Switch_Pause_Mode();
	}

}


// ******************************************************************************************


// Handle pad input while testing movies in debug menu.

void Interactions_DebugMenu(void) {


// Blinking text while in pause mode.
if ( Player1.Pause == YES)
	{
	Show_Pause_Screenshot();
	Blinking_Text( TXT_Pause[SelectedLanguage] );
	LoopCount++;
	}

// Print frame number.
if (Debug_Config.Debug_Mode == YES)
	{
	FntPrint(fIdA, "\n\n  FRAME: %d", STRCurrentFrame);

	FntFlush(fIdA);
	}

// Pause.
if (Pad1.Start == TAP_BUTTON)
	{
	Switch_Pause_Mode();
	}

// Quit movie.
if (Pad1.Fire == TAP_BUTTON)
	{
	PlaySound(SFXConfirm);
	StopPlayingMovie = YES;
	}
}



// ******************************************************************************************


// Handle pad input while watching movies in hidden option.

void Interactions_WatchMovies(void) {


// Blinking text while in pause mode.
if ( Player1.Pause )
	{
	Show_Pause_Screenshot();
	Blinking_Text( TXT_Pause[SelectedLanguage] );
	LoopCount++;
	}

// Pause.
if (Pad1.Start == TAP_BUTTON)
	{
	Switch_Pause_Mode();
	}

// Next movie.
if (Pad1.Fire == TAP_BUTTON && !(Player1.Pause) )
	{
	StopPlayingMovie = YES;
	}

// Quit movie player.
if ( Pressed(START_KEY) && Pressed(SELECT_KEY) )
	{
	StopPlayingMovie = YES;
	MovieIndex = MAX_STAGES;
	}
}

// ******************************************************************************************

// Hidden option for watching stage movies in sequence.

void Watch_Movies(void)
{
short Result;

Shuffle_Stages();

// Randomize alternate levels.
// Stage 3. Init with Stage 4 or 5 by default. Later player choice may require them to be replaced by Stage 6 or 7.
Result = rand() % 2;
//printf("\nStage 3 = %d", Result);
if ( Result == 1 )
	{
	Result = rand() % 2;
	if ( Result == 1 )
		{
		Game_Stages[2] = Stage6;
		}
	else
		{
		Game_Stages[2] = Stage7;
		}
	}

// Stage 4. Init with Stage 8 or 9 by default. Later player choice may require them to be replaced by Stage 10 or 11.
Result = rand() % 2;
//printf("\nStage 4 = %d", Result);
if ( Result == 1 )
	{
	Result = rand() % 2;
	if ( Result == 1 )
		{
		Game_Stages[3] = Stage10;
		}
	else
		{
		Game_Stages[3] = Stage11;
		}
	}


for (MovieIndex=0; MovieIndex<MAX_STAGES; MovieIndex++)
	{
	PlayStream(Game_Stages[MovieIndex].Movie, 0);
	}

Init_Status(STATUS_TITLE);

}


// ******************************************************************************************


// We should never see this screen.

void Error_Screen(void)
{
FntPrint(fIdA, "\n\n~c990%s", ErrorType[Error_Report.ErrorID]);
FntPrint(fIdA, "\n\n~c990File: %s", Error_Report.File);
FntPrint(fIdA, "\n\n~c990Function: %s", Error_Report.Function);
FntPrint(fIdA, "\n\n~c990Line: %d", Error_Report.Line);
FntPrint(fIdA, "\n\n~c990Error code: %d", _get_errno());
FntPrint(fIdA, "\n\n~c990Last STR Frame: %d", STRCurrentFrame);
FntPrint(fIdA, "\n\n\n\n\n~c990	Press start to retry.\n	Press select for disc test.");

FntFlush(fIdA);

if (Pad1.Start == TAP_BUTTON)
	{
	Game_Status = Prev_Game_Status;
	Init_Status(Prev_Game_Status);

// Init report values in case of unexpected error.
	Error_Report.ErrorID = NULL;
	strcpy(Error_Report.File, NULL);
	strcpy(Error_Report.Function, NULL);
	Error_Report.Line = NULL;
	}

if (Pad1.Select == TAP_BUTTON)
	{
	Game_Status = STATUS_VERIFY;
	Init_Status(Game_Status);

// Init report values in case of unexpected error.
	Error_Report.ErrorID = NULL;
	strcpy(Error_Report.File, NULL);
	strcpy(Error_Report.Function, NULL);
	Error_Report.Line = NULL;
	}

}


