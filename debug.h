
typedef struct{
short Debug_Trigger;
short Debug_Mode;
short Debug_STR;
short Debug_BS;
short Debug_StartFrame;
short Debug_Info;
}DEBUG_OPTIONS;

typedef struct{
short Stage;
short Checkpoint;
short UnlimitedLives;
short Alternate;
}DEBUG_STAGE;

#ifdef OPTIONS_C

#include "sectors.h"

DEBUG_OPTIONS Debug_Config = {0,0,0,0,0, 1};

// For verifying integrity of files in disc.

short Verify_Complete = 0;
CdlFILE VerifyCDFile;

// Here, size is stored in bytes, not sectors.
ASSETS_FILE File_SYSTEM_CNF = {SECTOR_SYSTEM_CNF, 66};
ASSETS_FILE File_SPACE_ACE = {SECTOR_SPACE_ACE, 274432};
ASSETS_FILE File_SPACE_PAL = {SECTOR_SPACE_PAL, 274432};
ASSETS_FILE File_ASSETS_DAT = {SECTOR_ASSETS_DAT, 392492};
ASSETS_FILE File_MOVIES_BIN = {SECTOR_SPADEMO_STR, 461946880};


ASSETS_FILE File_DLDEMO_STR = {SECTOR_DLDEMO_STR, 13428736};

ASSETS_FILE File_DUMMY_DAT = {SECTOR_DUMMY_DAT, 33554432};

ASSETS_FILE *Expected_Files[7] = {
&File_SYSTEM_CNF,
&File_SPACE_ACE,
&File_SPACE_PAL,
&File_ASSETS_DAT,
&File_MOVIES_BIN,
&File_DLDEMO_STR,
&File_DUMMY_DAT,
};

ASSETS_FILE Read_Files[7];

#define TOTAL_STR_MOVIES 238


extern MOVIE_FILE STR_Intro;

extern MOVIE_FILE STR_Stage1;
extern MOVIE_FILE STR_Stage1b;
extern MOVIE_FILE STR_Stage1d1;
extern MOVIE_FILE STR_Stage1d2;
extern MOVIE_FILE STR_Stage1d3;
extern MOVIE_FILE STR_Stage1d4;
extern MOVIE_FILE STR_Stage1d5;
extern MOVIE_FILE STR_Stage1d6;
extern MOVIE_FILE STR_Stage1p1;

extern MOVIE_FILE STR_Stage2;
extern MOVIE_FILE STR_Stage2b;
extern MOVIE_FILE STR_Stage2d1;
extern MOVIE_FILE STR_Stage2d2;
extern MOVIE_FILE STR_Stage2d3;
extern MOVIE_FILE STR_Stage2d4;
extern MOVIE_FILE STR_Stage2d5;
extern MOVIE_FILE STR_Stage2p1;

extern MOVIE_FILE STR_Stage3;
extern MOVIE_FILE STR_Stage3b;
extern MOVIE_FILE STR_Stage3d1;
extern MOVIE_FILE STR_Stage3d2;
extern MOVIE_FILE STR_Stage3d3;
extern MOVIE_FILE STR_Stage3d4;
extern MOVIE_FILE STR_Stage3d5;
extern MOVIE_FILE STR_Stage3p1;

extern MOVIE_FILE STR_Stage4;
extern MOVIE_FILE STR_Stage4b;
extern MOVIE_FILE STR_Stage4d1;
extern MOVIE_FILE STR_Stage4d2;
extern MOVIE_FILE STR_Stage4d3;
extern MOVIE_FILE STR_Stage4p1;
extern MOVIE_FILE STR_Stage4p2;

extern MOVIE_FILE STR_Stage5;
extern MOVIE_FILE STR_Stage5b;
extern MOVIE_FILE STR_Stage5d1;
extern MOVIE_FILE STR_Stage5d2;
extern MOVIE_FILE STR_Stage5d3;
extern MOVIE_FILE STR_Stage5p1;
extern MOVIE_FILE STR_Stage5p2;

extern MOVIE_FILE STR_Stage6;
extern MOVIE_FILE STR_Stage6b;
extern MOVIE_FILE STR_Stage6d1;
extern MOVIE_FILE STR_Stage6d2;
extern MOVIE_FILE STR_Stage6d3;
extern MOVIE_FILE STR_Stage6d4;
extern MOVIE_FILE STR_Stage6d5;
extern MOVIE_FILE STR_Stage6d6;
extern MOVIE_FILE STR_Stage6p1;
extern MOVIE_FILE STR_Stage6p2;

extern MOVIE_FILE STR_Stage7;
extern MOVIE_FILE STR_Stage7b;
extern MOVIE_FILE STR_Stage7d1;
extern MOVIE_FILE STR_Stage7d2;
extern MOVIE_FILE STR_Stage7d3;
extern MOVIE_FILE STR_Stage7d4;
extern MOVIE_FILE STR_Stage7d5;
extern MOVIE_FILE STR_Stage7d6;
extern MOVIE_FILE STR_Stage7p1;
extern MOVIE_FILE STR_Stage7p2;

extern MOVIE_FILE STR_Stage8;
extern MOVIE_FILE STR_Stage8b;
extern MOVIE_FILE STR_Stage8d1;
extern MOVIE_FILE STR_Stage8d2;
extern MOVIE_FILE STR_Stage8d3;
extern MOVIE_FILE STR_Stage8d4;
extern MOVIE_FILE STR_Stage8p1;

extern MOVIE_FILE STR_Stage9;
extern MOVIE_FILE STR_Stage9b;
extern MOVIE_FILE STR_Stage9d1;
extern MOVIE_FILE STR_Stage9d2;
extern MOVIE_FILE STR_Stage9d3;
extern MOVIE_FILE STR_Stage9d4;
extern MOVIE_FILE STR_Stage9p1;

extern MOVIE_FILE STR_Stage10;
extern MOVIE_FILE STR_Stage10b;
extern MOVIE_FILE STR_Stage10d1;
extern MOVIE_FILE STR_Stage10d2;
extern MOVIE_FILE STR_Stage10d3;
extern MOVIE_FILE STR_Stage10d4;
extern MOVIE_FILE STR_Stage10d5;
extern MOVIE_FILE STR_Stage10d6;
extern MOVIE_FILE STR_Stage10d7;
extern MOVIE_FILE STR_Stage10d8;
extern MOVIE_FILE STR_Stage10p1;

extern MOVIE_FILE STR_Stage11;
extern MOVIE_FILE STR_Stage11b;
extern MOVIE_FILE STR_Stage11d1;
extern MOVIE_FILE STR_Stage11d2;
extern MOVIE_FILE STR_Stage11d3;
extern MOVIE_FILE STR_Stage11d4;
extern MOVIE_FILE STR_Stage11d5;
extern MOVIE_FILE STR_Stage11d6;
extern MOVIE_FILE STR_Stage11d7;
extern MOVIE_FILE STR_Stage11d8;
extern MOVIE_FILE STR_Stage11p1;

extern MOVIE_FILE STR_Stage12;
extern MOVIE_FILE STR_Stage12b;
extern MOVIE_FILE STR_Stage12d1;
extern MOVIE_FILE STR_Stage12d2;
extern MOVIE_FILE STR_Stage12d3;
extern MOVIE_FILE STR_Stage12d4;
extern MOVIE_FILE STR_Stage12d5;
extern MOVIE_FILE STR_Stage12d6;
extern MOVIE_FILE STR_Stage12d7;

extern MOVIE_FILE STR_Stage13;
extern MOVIE_FILE STR_Stage13b;
extern MOVIE_FILE STR_Stage13d1;
extern MOVIE_FILE STR_Stage13d2;
extern MOVIE_FILE STR_Stage13d3;
extern MOVIE_FILE STR_Stage13d4;
extern MOVIE_FILE STR_Stage13d5;
extern MOVIE_FILE STR_Stage13d6;
extern MOVIE_FILE STR_Stage13d7;

extern MOVIE_FILE STR_Stage14;
extern MOVIE_FILE STR_Stage14b;
extern MOVIE_FILE STR_Stage14d1;
extern MOVIE_FILE STR_Stage14d2;
extern MOVIE_FILE STR_Stage14d3;
extern MOVIE_FILE STR_Stage14d4;
extern MOVIE_FILE STR_Stage14p1;

extern MOVIE_FILE STR_Stage15;
extern MOVIE_FILE STR_Stage15b;
extern MOVIE_FILE STR_Stage15d1;
extern MOVIE_FILE STR_Stage15d2;
extern MOVIE_FILE STR_Stage15d3;
extern MOVIE_FILE STR_Stage15d4;
extern MOVIE_FILE STR_Stage15p1;

extern MOVIE_FILE STR_Stage16;
extern MOVIE_FILE STR_Stage16b;
extern MOVIE_FILE STR_Stage16d1;
extern MOVIE_FILE STR_Stage16d2;
extern MOVIE_FILE STR_Stage16d3;
extern MOVIE_FILE STR_Stage16d4;
extern MOVIE_FILE STR_Stage16d5;
extern MOVIE_FILE STR_Stage16d6;
extern MOVIE_FILE STR_Stage16p1;

extern MOVIE_FILE STR_Stage17;
extern MOVIE_FILE STR_Stage17b;
extern MOVIE_FILE STR_Stage17d1;
extern MOVIE_FILE STR_Stage17d2;
extern MOVIE_FILE STR_Stage17d3;
extern MOVIE_FILE STR_Stage17d4;
extern MOVIE_FILE STR_Stage17d5;
extern MOVIE_FILE STR_Stage17d6;
extern MOVIE_FILE STR_Stage17p1;

extern MOVIE_FILE STR_Stage18;
extern MOVIE_FILE STR_Stage18b;
extern MOVIE_FILE STR_Stage18d1;
extern MOVIE_FILE STR_Stage18d2;
extern MOVIE_FILE STR_Stage18d3;
extern MOVIE_FILE STR_Stage18d4;
extern MOVIE_FILE STR_Stage18d5;
extern MOVIE_FILE STR_Stage18d6;
extern MOVIE_FILE STR_Stage18d7;
extern MOVIE_FILE STR_Stage18d8;
extern MOVIE_FILE STR_Stage18d9;
extern MOVIE_FILE STR_Stage18p1;

extern MOVIE_FILE STR_Stage19;
extern MOVIE_FILE STR_Stage19b;
extern MOVIE_FILE STR_Stage19d1;
extern MOVIE_FILE STR_Stage19d2;
extern MOVIE_FILE STR_Stage19d3;
extern MOVIE_FILE STR_Stage19d4;
extern MOVIE_FILE STR_Stage19d5;
extern MOVIE_FILE STR_Stage19d6;
extern MOVIE_FILE STR_Stage19d7;
extern MOVIE_FILE STR_Stage19d8;
extern MOVIE_FILE STR_Stage19d9;
extern MOVIE_FILE STR_Stage19p1;

extern MOVIE_FILE STR_Stage20;
extern MOVIE_FILE STR_Stage20b;
extern MOVIE_FILE STR_Stage20d1;
extern MOVIE_FILE STR_Stage20d2;
extern MOVIE_FILE STR_Stage20d3;
extern MOVIE_FILE STR_Stage20d4;
extern MOVIE_FILE STR_Stage20d5;
extern MOVIE_FILE STR_Stage20d6;
extern MOVIE_FILE STR_Stage20d7;
extern MOVIE_FILE STR_Stage20d8;
extern MOVIE_FILE STR_Stage20d9;
extern MOVIE_FILE STR_Stage20p1;

extern MOVIE_FILE STR_Stage21;
extern MOVIE_FILE STR_Stage21b;
extern MOVIE_FILE STR_Stage21d1;
extern MOVIE_FILE STR_Stage21d2;
extern MOVIE_FILE STR_Stage21d3;
extern MOVIE_FILE STR_Stage21d4;
extern MOVIE_FILE STR_Stage21d5;
extern MOVIE_FILE STR_Stage21d6;
extern MOVIE_FILE STR_Stage21d7;
extern MOVIE_FILE STR_Stage21d8;
extern MOVIE_FILE STR_Stage21d9;
extern MOVIE_FILE STR_Stage21p1;

extern MOVIE_FILE STR_Stage22;
extern MOVIE_FILE STR_Stage22b;
extern MOVIE_FILE STR_Stage22d1;
extern MOVIE_FILE STR_Stage22d2;
extern MOVIE_FILE STR_Stage22d3;
extern MOVIE_FILE STR_Stage22d4;
extern MOVIE_FILE STR_Stage22d5;
extern MOVIE_FILE STR_Stage22d6;
extern MOVIE_FILE STR_Stage22d7;
extern MOVIE_FILE STR_Stage22d8;
extern MOVIE_FILE STR_Stage22d9;
extern MOVIE_FILE STR_Stage22d10;
extern MOVIE_FILE STR_Stage22d11;
extern MOVIE_FILE STR_Stage22p1;

extern MOVIE_FILE STR_Stage23;
extern MOVIE_FILE STR_Stage23b;
extern MOVIE_FILE STR_Stage23d1;
extern MOVIE_FILE STR_Stage23d2;
extern MOVIE_FILE STR_Stage23d3;
extern MOVIE_FILE STR_Stage23d4;
extern MOVIE_FILE STR_Stage23d5;
extern MOVIE_FILE STR_Stage23d6;
extern MOVIE_FILE STR_Stage23d7;
extern MOVIE_FILE STR_Stage23d8;
extern MOVIE_FILE STR_Stage23d9;
extern MOVIE_FILE STR_Stage23d10;
extern MOVIE_FILE STR_Stage23d11;
extern MOVIE_FILE STR_Stage23p1;

extern MOVIE_FILE STR_Stage24;
extern MOVIE_FILE STR_Stage24b;
extern MOVIE_FILE STR_Stage24d1;
extern MOVIE_FILE STR_Stage24d2;
extern MOVIE_FILE STR_Stage24d3;
extern MOVIE_FILE STR_Stage24d4;
extern MOVIE_FILE STR_Stage24d5;
extern MOVIE_FILE STR_Stage24d6;
extern MOVIE_FILE STR_Stage24d7;
extern MOVIE_FILE STR_Stage24d8;
extern MOVIE_FILE STR_Stage24d9;
extern MOVIE_FILE STR_Stage24d10;
extern MOVIE_FILE STR_Stage24d11;
extern MOVIE_FILE STR_Stage24d12;
extern MOVIE_FILE STR_Stage24p2;

extern MOVIE_FILE STR_DLDemo;

MOVIE_FILE *All_STR_Movies[TOTAL_STR_MOVIES] = {
// Intro.
&STR_Intro,
//Stage 1.
&STR_Stage1,
&STR_Stage1b,
&STR_Stage1d1,
&STR_Stage1d2,
&STR_Stage1d3,
&STR_Stage1d4,
&STR_Stage1d5,
&STR_Stage1d6,
&STR_Stage1p1,

&STR_Stage2,
&STR_Stage2b,
&STR_Stage2d1,
&STR_Stage2d2,
&STR_Stage2d3,
&STR_Stage2d4,
&STR_Stage2d5,
&STR_Stage2p1,

&STR_Stage3,
&STR_Stage3b,
&STR_Stage3d1,
&STR_Stage3d2,
&STR_Stage3d3,
&STR_Stage3d4,
&STR_Stage3d5,
&STR_Stage3p1,

&STR_Stage4,
&STR_Stage4b,
&STR_Stage4d1,
&STR_Stage4d2,
&STR_Stage4d3,
&STR_Stage4p1,
&STR_Stage4p2,

&STR_Stage5,
&STR_Stage5b,
&STR_Stage5d1,
&STR_Stage5d2,
&STR_Stage5d3,
&STR_Stage5p1,
&STR_Stage5p2,

&STR_Stage6,
&STR_Stage6b,
&STR_Stage6d1,
&STR_Stage6d2,
&STR_Stage6d3,
&STR_Stage6d4,
&STR_Stage6d5,
&STR_Stage6d6,
&STR_Stage6p1,
&STR_Stage6p2,

&STR_Stage7,
&STR_Stage7b,
&STR_Stage7d1,
&STR_Stage7d2,
&STR_Stage7d3,
&STR_Stage7d4,
&STR_Stage7d5,
&STR_Stage7d6,
&STR_Stage7p1,
&STR_Stage7p2,

&STR_Stage8,
&STR_Stage8b,
&STR_Stage8d1,
&STR_Stage8d2,
&STR_Stage8d3,
&STR_Stage8d4,
&STR_Stage8p1,

&STR_Stage9,
&STR_Stage9b,
&STR_Stage9d1,
&STR_Stage9d2,
&STR_Stage9d3,
&STR_Stage9d4,
&STR_Stage9p1,

&STR_Stage10,
&STR_Stage10b,
&STR_Stage10d1,
&STR_Stage10d2,
&STR_Stage10d3,
&STR_Stage10d4,
&STR_Stage10d5,
&STR_Stage10d6,
&STR_Stage10d7,
&STR_Stage10d8,
&STR_Stage10p1,

&STR_Stage11,
&STR_Stage11b,
&STR_Stage11d1,
&STR_Stage11d2,
&STR_Stage11d3,
&STR_Stage11d4,
&STR_Stage11d5,
&STR_Stage11d6,
&STR_Stage11d7,
&STR_Stage11d8,
&STR_Stage11p1,

&STR_Stage12,
&STR_Stage12b,
&STR_Stage12d1,
&STR_Stage12d2,
&STR_Stage12d3,
&STR_Stage12d4,
&STR_Stage12d5,
&STR_Stage12d6,
&STR_Stage12d7,

&STR_Stage13,
&STR_Stage13b,
&STR_Stage13d1,
&STR_Stage13d2,
&STR_Stage13d3,
&STR_Stage13d4,
&STR_Stage13d5,
&STR_Stage13d6,
&STR_Stage13d7,

&STR_Stage14,
&STR_Stage14b,
&STR_Stage14d1,
&STR_Stage14d2,
&STR_Stage14d3,
&STR_Stage14d4,
&STR_Stage14p1,

&STR_Stage15,
&STR_Stage15b,
&STR_Stage15d1,
&STR_Stage15d2,
&STR_Stage15d3,
&STR_Stage15d4,
&STR_Stage15p1,

&STR_Stage16,
&STR_Stage16b,
&STR_Stage16d1,
&STR_Stage16d2,
&STR_Stage16d3,
&STR_Stage16d4,
&STR_Stage16d5,
&STR_Stage16d6,
&STR_Stage16p1,

&STR_Stage17,
&STR_Stage17b,
&STR_Stage17d1,
&STR_Stage17d2,
&STR_Stage17d3,
&STR_Stage17d4,
&STR_Stage17d5,
&STR_Stage17d6,
&STR_Stage17p1,

&STR_Stage18,
&STR_Stage18b,
&STR_Stage18d1,
&STR_Stage18d2,
&STR_Stage18d3,
&STR_Stage18d4,
&STR_Stage18d5,
&STR_Stage18d6,
&STR_Stage18d7,
&STR_Stage18d8,
&STR_Stage18d9,
&STR_Stage18p1,

&STR_Stage19,
&STR_Stage19b,
&STR_Stage19d1,
&STR_Stage19d2,
&STR_Stage19d3,
&STR_Stage19d4,
&STR_Stage19d5,
&STR_Stage19d6,
&STR_Stage19d7,
&STR_Stage19d8,
&STR_Stage19d9,
&STR_Stage19p1,

&STR_Stage20,
&STR_Stage20b,
&STR_Stage20d1,
&STR_Stage20d2,
&STR_Stage20d3,
&STR_Stage20d4,
&STR_Stage20d5,
&STR_Stage20d6,
&STR_Stage20d7,
&STR_Stage20d8,
&STR_Stage20d9,
&STR_Stage20p1,

&STR_Stage21,
&STR_Stage21b,
&STR_Stage21d1,
&STR_Stage21d2,
&STR_Stage21d3,
&STR_Stage21d4,
&STR_Stage21d5,
&STR_Stage21d6,
&STR_Stage21d7,
&STR_Stage21d8,
&STR_Stage21d9,
&STR_Stage21p1,

&STR_Stage22,
&STR_Stage22b,
&STR_Stage22d1,
&STR_Stage22d2,
&STR_Stage22d3,
&STR_Stage22d4,
&STR_Stage22d5,
&STR_Stage22d6,
&STR_Stage22d7,
&STR_Stage22d8,
&STR_Stage22d9,
&STR_Stage22d10,
&STR_Stage22d11,
&STR_Stage22p1,

&STR_Stage23,
&STR_Stage23b,
&STR_Stage23d1,
&STR_Stage23d2,
&STR_Stage23d3,
&STR_Stage23d4,
&STR_Stage23d5,
&STR_Stage23d6,
&STR_Stage23d7,
&STR_Stage23d8,
&STR_Stage23d9,
&STR_Stage23d10,
&STR_Stage23d11,
&STR_Stage23p1,

&STR_Stage24,
&STR_Stage24b,
&STR_Stage24d1,
&STR_Stage24d2,
&STR_Stage24d3,
&STR_Stage24d4,
&STR_Stage24d5,
&STR_Stage24d6,
&STR_Stage24d7,
&STR_Stage24d8,
&STR_Stage24d9,
&STR_Stage24d10,
&STR_Stage24d11,
&STR_Stage24d12,
&STR_Stage24p2,

&STR_DLDemo,

};

extern short BSCurrentFrame;

extern StrInfo StrInfoBase;

extern int STRCurrentFrame;

extern DecEnv dec;

#else

extern DEBUG_OPTIONS Debug_Config;

extern short Verify_Complete;
extern short Verify_Index;

DEBUG_STAGE Debug_Stage = {0,0,0,0};

#endif