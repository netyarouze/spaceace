

//		  Frame No.   No action        Up           Down           Left.         Right.        Fire     RumbleFrame   RumbleStrength


// Stage 1: Kimberly is kidnapped.


SCENE Stage1Scene1 = {69, &STR_Stage1d3, &STR_Stage1d3, &STR_Stage1d3, &STR_Stage1d3, KEEP_PLAYING, &STR_Stage1d1, 23, LOW_RUMBLE};
SCENE Stage1Scene2 = {88, &STR_Stage1d1, &STR_Stage1d1, &STR_Stage1d1, &STR_Stage1d1, KEEP_PLAYING, &STR_Stage1d1, 98, MEDIUM_RUMBLE};
SCENE Stage1Scene3 = {138, &STR_Stage1d1, &STR_Stage1d1, &STR_Stage1d3, KEEP_PLAYING, &STR_Stage1d1, &STR_Stage1d1, 142, LOW_RUMBLE};
SCENE Stage1Scene4 = {159, &STR_Stage1d1, &STR_Stage1d1, &STR_Stage1d3, KEEP_PLAYING, &STR_Stage1d1, &STR_Stage1d1, 161, LOW_RUMBLE};
SCENE Stage1Scene5 = {182, &STR_Stage1d2, &STR_Stage1d2, &STR_Stage1p1, &STR_Stage1d2, &STR_Stage1d2, KEEP_PLAYING, 183, LOW_RUMBLE};
SCENE Stage1Scene6 = {226, &STR_Stage1d2, &STR_Stage1d2, &STR_Stage1d2, &STR_Stage1d2, &STR_Stage1d2, KEEP_PLAYING, 226, SMALL_RUMBLE};
SCENE Stage1Scene7 = {254, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, KEEP_PLAYING, &STR_Stage1d6, 262, LOW_RUMBLE};
SCENE Stage1Scene8 = {271, &STR_Stage1d5, &STR_Stage1d6, &STR_Stage1d6, KEEP_PLAYING, &STR_Stage1d6, &STR_Stage1d5, 281, LOW_RUMBLE};
SCENE Stage1Scene9 = {286, &STR_Stage1d5, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, KEEP_PLAYING, &STR_Stage1d6, NULL, NULL};
SCENE Stage1Scene10 = {298, &STR_Stage1d5, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, KEEP_PLAYING, NULL, NULL};
SCENE Stage1Scene11 = {335, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, KEEP_PLAYING, &STR_Stage1d6, &STR_Stage1d6, 310, MEDIUM_RUMBLE};
SCENE Stage1Scene12 = {363, &STR_Stage1d6, &STR_Stage1d6, &STR_Stage1d6, KEEP_PLAYING, &STR_Stage1d6, &STR_Stage1d6, 349, LOW_RUMBLE};
SCENE Stage1Scene13 = {410, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 406, LOW_RUMBLE};
SCENE Stage1Scene14 = {437, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 447, LOW_RUMBLE};
SCENE Stage1Scene15 = {464, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 459, LOW_RUMBLE};
SCENE Stage1Scene16 = {494, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 494, LOW_RUMBLE};
SCENE Stage1Scene17 = {508, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 513, LOW_RUMBLE};


STAGE Stage1 = {
&STR_Stage1, // First level movie.
&STR_Stage1b, // Borf movie.
1, // Stage ID.
389, // Checkpoint 1.
16, // Scenes.
&Stage1Scene1, &Stage1Scene2, &Stage1Scene3, &Stage1Scene4, &Stage1Scene5, &Stage1Scene6, &Stage1Scene7, &Stage1Scene8, &Stage1Scene9, &Stage1Scene10, &Stage1Scene11, &Stage1Scene12, &Stage1Scene13, &Stage1Scene14, &Stage1Scene15, &Stage1Scene16, &Stage1Scene17
};


// Stage 1 alternate path as Dexter.

SCENE Stage1p1Scene1 = {36, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 31, LOW_RUMBLE};
SCENE Stage1p1Scene2 = {63, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 66, LOW_RUMBLE};
SCENE Stage1p1Scene3 = {90, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 85, LOW_RUMBLE};
SCENE Stage1p1Scene4 = {120, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 122, LOW_RUMBLE};
SCENE Stage1p1Scene5 = {134, &STR_Stage1d3, &STR_Stage1d4, &STR_Stage1d4, KEEP_PLAYING, &STR_Stage1d4, &STR_Stage1d4, 138, LOW_RUMBLE};

STAGE Stage1p1 = {
&STR_Stage1p1, // First level Dexter movie.
&STR_Stage1b, // Borf movie.
1, // Stage ID.
0, // Checkpoint 1.
4, // Scenes.
&Stage1p1Scene1, &Stage1p1Scene2, &Stage1p1Scene3, &Stage1p1Scene4, &Stage1p1Scene5
};


// -------------------------------------------------------------------------------------------

// Stage 2: Flight to the space base.

SCENE Stage2Scene1 = {166, &STR_Stage2d1, KEEP_PLAYING, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, 120, LOW_RUMBLE};
SCENE Stage2Scene2 = {190, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, KEEP_PLAYING, &STR_Stage2d1, NULL, NULL};
SCENE Stage2Scene3 = {221, &STR_Stage2d1, KEEP_PLAYING, &STR_Stage2p1, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, NULL, NULL};
SCENE Stage2Scene4 = {248, &STR_Stage2d4, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d4, &STR_Stage2d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage2Scene5 = {284, &STR_Stage2d1, &STR_Stage2d3, &STR_Stage2d3, &STR_Stage2d2, KEEP_PLAYING, &STR_Stage2d1, 264, MEDIUM_RUMBLE};
SCENE Stage2Scene6 = {300, &STR_Stage2d4, &STR_Stage2d1, &STR_Stage2d4, &STR_Stage2d4, &STR_Stage2d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage2Scene7 = {334, &STR_Stage2d1, &STR_Stage2d1, KEEP_PLAYING, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, 314, MEDIUM_RUMBLE};
SCENE Stage2Scene8 = {363, &STR_Stage2d4, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d4, &STR_Stage2d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage2Scene9 = {394, &STR_Stage2d5, &STR_Stage2d5, &STR_Stage2d5, &STR_Stage2d5, KEEP_PLAYING, &STR_Stage2d5, 377, MEDIUM_RUMBLE};

STAGE Stage2 = {
&STR_Stage2, // Second level movie.
&STR_Stage2b, // Borf movie.
2, // Stage ID.
157, // Checkpoint 1.
8, // Scenes.
&Stage2Scene1, &Stage2Scene2, &Stage2Scene3, &Stage2Scene4, &Stage2Scene5, &Stage2Scene6, &Stage2Scene7, &Stage2Scene8, &Stage2Scene9
};

// Stage 2 alternate path.

SCENE Stage2p1Scene1 = {10, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, KEEP_PLAYING, &STR_Stage2d1, NULL, NULL};
SCENE Stage2p1Scene2 = {40, &STR_Stage2d1, KEEP_PLAYING, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, &STR_Stage2d1, NULL, NULL};
SCENE Stage2p1Scene3 = {64, &STR_Stage2d5, &STR_Stage2d5, &STR_Stage2d5, &STR_Stage2d5, KEEP_PLAYING, &STR_Stage2d5, NULL, NULL};

STAGE Stage2p1 = {
&STR_Stage2p1, // Second level alternate  movie.
&STR_Stage2b, // Borf movie.
2, // Stage ID.
0, // Checkpoint 1.
2, // Scenes.
&Stage2p1Scene1, &Stage2p1Scene2, &Stage2p1Scene3
};

// -------------------------------------------------------------------------------------------

//Stage 3: Flight to the space base (mirrored).

SCENE Stage3Scene1 = {166, &STR_Stage3d1, KEEP_PLAYING, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, 120, LOW_RUMBLE};
SCENE Stage3Scene2 = {190, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, KEEP_PLAYING, &STR_Stage3d1, &STR_Stage3d1, NULL, NULL};
SCENE Stage3Scene3 = {221, &STR_Stage3d1, KEEP_PLAYING, &STR_Stage3p1, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, NULL, NULL};
SCENE Stage3Scene4 = {248, &STR_Stage3d4, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d4, &STR_Stage3d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage3Scene5 = {284, &STR_Stage3d1, &STR_Stage3d3, &STR_Stage3d3, KEEP_PLAYING, &STR_Stage3d2, &STR_Stage3d1, 264, MEDIUM_RUMBLE};
SCENE Stage3Scene6 = {300, &STR_Stage3d4, &STR_Stage3d1, &STR_Stage3d4, &STR_Stage3d4, &STR_Stage3d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage3Scene7 = {334, &STR_Stage3d1, &STR_Stage3d1, KEEP_PLAYING, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, 314, MEDIUM_RUMBLE};
SCENE Stage3Scene8 = {363, &STR_Stage3d4, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d4, &STR_Stage3d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage3Scene9 = {394, &STR_Stage3d5, &STR_Stage3d5, &STR_Stage3d5, KEEP_PLAYING, &STR_Stage3d5, &STR_Stage3d5, 377, MEDIUM_RUMBLE};

STAGE Stage3 = {
&STR_Stage3, // Second level movie (mirrored).
&STR_Stage3b, // Borf movie.
3, // Stage ID.
157, // Checkpoint 1.
8, // Scenes.
&Stage3Scene1, &Stage3Scene2, &Stage3Scene3, &Stage3Scene4, &Stage3Scene5, &Stage3Scene6, &Stage3Scene7, &Stage3Scene8, &Stage3Scene9
};

// Stage 3 alternate path.

SCENE Stage3p1Scene1 = {10, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, KEEP_PLAYING, &STR_Stage3d1, &STR_Stage3d1, NULL, NULL};
SCENE Stage3p1Scene2 = {40, &STR_Stage3d1, KEEP_PLAYING, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, &STR_Stage3d1, NULL, NULL};
SCENE Stage3p1Scene3 = {64, &STR_Stage2d5, &STR_Stage2d5, &STR_Stage2d5, KEEP_PLAYING, &STR_Stage2d5, &STR_Stage2d5, NULL, NULL};

STAGE Stage3p1 = {
&STR_Stage3p1, // Second level alternate  movie (mirrored).
&STR_Stage3b, // Borf movie.
3, // Stage ID.
0, // Checkpoint 1.
2, // Scenes.
&Stage3p1Scene1, &Stage3p1Scene2, &Stage3p1Scene3
};

// -------------------------------------------------------------------------------------------

// Stage 4: Space base, force fields and robot guards.

SCENE Stage4Scene1 = {38, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, 27, LOW_RUMBLE};
SCENE Stage4Scene2 = {57, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4Scene3 = {84, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4Scene4 = {111, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4Scene5 = {148, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4p2, &STR_Stage4d1, KEEP_PLAYING, 133, LOW_RUMBLE};
SCENE Stage4Scene6 = {200, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4d1, KEEP_PLAYING, &STR_Stage4d1, &STR_Stage4d1, NULL, NULL};
SCENE Stage4Scene7 = {230, &STR_Stage4d2, &STR_Stage4d2, &STR_Stage4d2, &STR_Stage4d2, &STR_Stage4d2, KEEP_PLAYING, 232, SMALL_RUMBLE};
SCENE Stage4Scene8 = {258, &STR_Stage4d1, KEEP_PLAYING, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4d1, NULL, NULL};
SCENE Stage4Scene9 = {290, &STR_Stage4d1, KEEP_PLAYING, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4d1, &STR_Stage4d1, NULL, NULL};
SCENE Stage4Scene10 = {315, &STR_Stage4d2, &STR_Stage4d2, &STR_Stage4d2, &STR_Stage4d2, &STR_Stage4d2, KEEP_PLAYING, 316, SMALL_RUMBLE};
SCENE Stage4Scene11 = {371, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, 355, LOW_RUMBLE};
SCENE Stage4Scene12 = {427, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4p1, &STR_Stage4d3, 414, LOW_RUMBLE};

STAGE Stage4 = {
&STR_Stage4, // Third level movie.
&STR_Stage4b, // Borf movie.
4, // Stage ID.
353, // Checkpoint 1.
11, // Scenes.
&Stage4Scene1, &Stage4Scene2, &Stage4Scene3, &Stage4Scene4, &Stage4Scene5, &Stage4Scene6, &Stage4Scene7, &Stage4Scene8, &Stage4Scene9, &Stage4Scene10, &Stage4Scene11, &Stage4Scene12
};

// Stage 4 alternate path as Dexter.

SCENE Stage4p2Scene1 = {13, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4p2Scene2 = {50, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4p2Scene3 = {76, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4p2Scene4 = {100, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, NULL, NULL};
SCENE Stage4p2Scene5 = {152, &STR_Stage4d3, &STR_Stage4d3, &STR_Stage4d3, KEEP_PLAYING, &STR_Stage4p1, &STR_Stage4d3, 137, LOW_RUMBLE};

STAGE Stage4p2 = {
&STR_Stage4p2, // Third level movie alternate path as Dexter.
&STR_Stage4b, // Borf movie.
4, // Stage ID.
0, // Checkpoint 1.
4, // Scenes.
&Stage4p2Scene1, &Stage4p2Scene2, &Stage4p2Scene3, &Stage4p2Scene4, &Stage4p2Scene5
};

// -------------------------------------------------------------------------------------------

// Stage 5: Space base, force fields and robot guards (mirrored).

SCENE Stage5Scene1 = {30, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, 28, LOW_RUMBLE};
SCENE Stage5Scene2 = {57, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, NULL, NULL};
SCENE Stage5Scene3 = {82, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, NULL, NULL};
SCENE Stage5Scene4 = {112, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, NULL, NULL};
SCENE Stage5Scene5 = {147, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5p2, KEEP_PLAYING, 134, LOW_RUMBLE};
SCENE Stage5Scene6 = {200, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, KEEP_PLAYING, &STR_Stage5d1, NULL, NULL};
SCENE Stage5Scene7 = {229, &STR_Stage5d2, &STR_Stage5d2, &STR_Stage5d2, &STR_Stage5d2, &STR_Stage5d2, KEEP_PLAYING, 231, SMALL_RUMBLE};
SCENE Stage5Scene8 = {257, &STR_Stage5d1, KEEP_PLAYING, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, NULL, NULL};
SCENE Stage5Scene9 = {289, &STR_Stage5d1, KEEP_PLAYING, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, &STR_Stage5d1, NULL, NULL};
SCENE Stage5Scene10 = {315, &STR_Stage5d2, &STR_Stage5d2, &STR_Stage5d2, &STR_Stage5d2, &STR_Stage5d2, KEEP_PLAYING, 315, SMALL_RUMBLE};
SCENE Stage5Scene11 = {370, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, 354, LOW_RUMBLE};
SCENE Stage5Scene12 = {425, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5p1, KEEP_PLAYING, &STR_Stage5d3, 413, LOW_RUMBLE};

STAGE Stage5 = {
&STR_Stage5, // Third level movie (mirrored).
&STR_Stage5b, // Borf movie.
5, // Stage ID.
352, // Checkpoint 1.
11, // Scenes.
&Stage5Scene1, &Stage5Scene2, &Stage5Scene3, &Stage5Scene4, &Stage5Scene5, &Stage5Scene6, &Stage5Scene7, &Stage5Scene8, &Stage5Scene9, &Stage5Scene10, &Stage5Scene11, &Stage5Scene12
};

// Stage 5 alternate path as Dexter.

SCENE Stage5p2Scene1 = {17, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, NULL, NULL};
SCENE Stage5p2Scene2 = {49, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, NULL, NULL};
SCENE Stage5p2Scene3 = {76, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, NULL, NULL};
SCENE Stage5p2Scene4 = {97, &STR_Stage5d3, KEEP_PLAYING, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, NULL, NULL};
SCENE Stage5p2Scene5 = {150, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5d3, &STR_Stage5p1, KEEP_PLAYING, &STR_Stage5d3, 137, LOW_RUMBLE};

STAGE Stage5p2 = {
&STR_Stage5p2, // Third level movie alternate path as Dexter.
&STR_Stage5b, // Borf movie.
5, // Stage ID.
0, // Checkpoint 1.
4, // Scenes.
&Stage5p2Scene1, &Stage5p2Scene2, &Stage5p2Scene3, &Stage5p2Scene4, &Stage5p2Scene5
};

// -------------------------------------------------------------------------------------------


// Stage 6: Space base, platforms and sentry drones.

SCENE Stage6Scene1 = {43, &STR_Stage6d6, &STR_Stage6d6, &STR_Stage6d6, &STR_Stage6d6, KEEP_PLAYING, &STR_Stage6d4, 37, LOW_RUMBLE};
SCENE Stage6Scene2 = {79, &STR_Stage6d6, KEEP_PLAYING, &STR_Stage6d6, &STR_Stage6d6, &STR_Stage6d6, &STR_Stage6d4, 57, SMALL_RUMBLE};
SCENE Stage6Scene3 = {124, &STR_Stage6d6, &STR_Stage6d5, &STR_Stage6d6, &STR_Stage6p2, &STR_Stage6d5, KEEP_PLAYING, 122, MEDIUM_RUMBLE};
SCENE Stage6Scene4 = {173, &STR_Stage6d3, &STR_Stage6d3, &STR_Stage6d3, &STR_Stage6d3, &STR_Stage6d3, KEEP_PLAYING, 179, LOW_RUMBLE};
SCENE Stage6Scene5 = {210, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, KEEP_PLAYING, &STR_Stage6d1, 207, LOW_RUMBLE};
SCENE Stage6Scene6 = {229, &STR_Stage6d2, KEEP_PLAYING, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, NULL, NULL};
SCENE Stage6Scene7 = {239, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, KEEP_PLAYING, 240, LOW_RUMBLE};
SCENE Stage6Scene8 = {271, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, KEEP_PLAYING, 275, LOW_RUMBLE};
SCENE Stage6Scene9 = {290, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, KEEP_PLAYING, &STR_Stage6d2, 285, MEDIUM_RUMBLE};
SCENE Stage6Scene10 = {335, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, KEEP_PLAYING, NULL, NULL};
SCENE Stage6Scene11 = {369, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, &STR_Stage6d2, KEEP_PLAYING, 352, MEDIUM_RUMBLE};
SCENE Stage6Scene12 = {417, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6p1, KEEP_PLAYING, &STR_Stage6d5, 388, MEDIUM_RUMBLE};

STAGE Stage6 = {
&STR_Stage6, // Alternate third level movie.
&STR_Stage6b, // Borf movie.
6, // Stage ID.
407, // Checkpoint 1.
11, // Scenes.
&Stage6Scene1, &Stage6Scene2, &Stage6Scene3, &Stage6Scene4, &Stage6Scene5, &Stage6Scene6, &Stage6Scene7, &Stage6Scene8, &Stage6Scene9, &Stage6Scene10, &Stage6Scene11, &Stage6Scene12
};


// Stage 6 alternate path as Dexter.

SCENE Stage6p2Scene1 = {22, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, KEEP_PLAYING, &STR_Stage6d5, 27, LOW_RUMBLE};
SCENE Stage6p2Scene2 = {46, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, KEEP_PLAYING, &STR_Stage6d5, &STR_Stage6d5, 50, LOW_RUMBLE};
SCENE Stage6p2Scene3 = {63, &STR_Stage6d5, KEEP_PLAYING, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, 69, LOW_RUMBLE};
SCENE Stage6p2Scene4 = {82, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, KEEP_PLAYING, &STR_Stage6d5, &STR_Stage6d5, 86, LOW_RUMBLE};
SCENE Stage6p2Scene5 = {103, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6d5, &STR_Stage6p1, KEEP_PLAYING, &STR_Stage6d5, NULL, NULL};

STAGE Stage6p2 = {
&STR_Stage6p2, // Alternate third level movie alternate path as Dexter.
&STR_Stage6b, // Borf movie.
6, // Stage ID.
0, // Checkpoint 1.
4, // Scenes.
&Stage6p2Scene1, &Stage6p2Scene2, &Stage6p2Scene3, &Stage6p2Scene4, &Stage6p2Scene5
};

// -------------------------------------------------------------------------------------------


// Stage 7: Space base, platforms and sentry drones (mirrored).

SCENE Stage7Scene1 = {43, &STR_Stage7d6, &STR_Stage7d6, &STR_Stage7d6, KEEP_PLAYING, &STR_Stage7d6, &STR_Stage7d4, 37, LOW_RUMBLE};
SCENE Stage7Scene2 = {79, &STR_Stage7d6, KEEP_PLAYING, &STR_Stage7d6, &STR_Stage7d6, &STR_Stage7d6, &STR_Stage7d4, 57, SMALL_RUMBLE};
SCENE Stage7Scene3 = {124, &STR_Stage7d6, &STR_Stage7d5, &STR_Stage7d6, &STR_Stage7d5, &STR_Stage7p2, KEEP_PLAYING, 122, MEDIUM_RUMBLE};
SCENE Stage7Scene4 = {173, &STR_Stage7d3, &STR_Stage7d3, &STR_Stage7d3, &STR_Stage7d3, &STR_Stage7d3, KEEP_PLAYING, 179, LOW_RUMBLE};
SCENE Stage7Scene5 = {210, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, KEEP_PLAYING, &STR_Stage7d2, &STR_Stage7d1, 207, LOW_RUMBLE};
SCENE Stage7Scene6 = {229, &STR_Stage7d2, KEEP_PLAYING, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, NULL, NULL};
SCENE Stage7Scene7 = {239, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, KEEP_PLAYING, 240, LOW_RUMBLE};
SCENE Stage7Scene8 = {271, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, KEEP_PLAYING, 275, LOW_RUMBLE};
SCENE Stage7Scene9 = {290, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, KEEP_PLAYING, &STR_Stage7d2, &STR_Stage7d2, 285, MEDIUM_RUMBLE};
SCENE Stage7Scene10 = {335, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, KEEP_PLAYING, NULL, NULL};
SCENE Stage7Scene11 = {369, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, &STR_Stage7d2, KEEP_PLAYING, 352, MEDIUM_RUMBLE};
SCENE Stage7Scene12 = {417, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, KEEP_PLAYING, &STR_Stage7p1, &STR_Stage7d5, 388, MEDIUM_RUMBLE};

STAGE Stage7 = {
&STR_Stage7, // Alternate third level movie (mirrored).
&STR_Stage7b, // Borf movie.
7, // Stage ID.
407, // Checkpoint 1.
11, // Scenes.
&Stage7Scene1, &Stage7Scene2, &Stage7Scene3, &Stage7Scene4, &Stage7Scene5, &Stage7Scene6, &Stage7Scene7, &Stage7Scene8, &Stage7Scene9, &Stage7Scene10, &Stage7Scene11, &Stage7Scene12
};

// Stage 7 alternate path as Dexter (mirrored).

SCENE Stage7p2Scene1 = {22, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, KEEP_PLAYING, &STR_Stage7d5, &STR_Stage7d5, 27, LOW_RUMBLE};
SCENE Stage7p2Scene2 = {46, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, KEEP_PLAYING, &STR_Stage7d5, 50, LOW_RUMBLE};
SCENE Stage7p2Scene3 = {63, &STR_Stage7d5, KEEP_PLAYING, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, 69, LOW_RUMBLE};
SCENE Stage7p2Scene4 = {82, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, KEEP_PLAYING, &STR_Stage7d5, 86, LOW_RUMBLE};
SCENE Stage7p2Scene5 = {103, &STR_Stage7d5, &STR_Stage7d5, &STR_Stage7d5, KEEP_PLAYING, &STR_Stage7p1, &STR_Stage7d5, NULL, NULL};

STAGE Stage7p2 = {
&STR_Stage7p2, // Alternate third level movie alternate path as Dexter (mirrored).
&STR_Stage7b, // Borf movie.
7, // Stage ID.
0, // Checkpoint 1.
4, // Scenes.
&Stage7p2Scene1, &Stage7p2Scene2, &Stage7p2Scene3, &Stage7p2Scene4, &Stage7p2Scene5
};

// -------------------------------------------------------------------------------------------


// Stage 8: Green dogs.

SCENE Stage8Scene1 = {15, &STR_Stage8d3, KEEP_PLAYING, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, NULL, NULL};
SCENE Stage8Scene2 = {42, &STR_Stage8d4, &STR_Stage8d4, &STR_Stage8d4, KEEP_PLAYING, &STR_Stage8d4, &STR_Stage8d4, NULL, NULL};
SCENE Stage8Scene3 = {67, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, KEEP_PLAYING, &STR_Stage8d3, NULL, NULL};
SCENE Stage8Scene4 = {97, &STR_Stage8d3, &STR_Stage8p1, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, KEEP_PLAYING, 88, LOW_RUMBLE};
SCENE Stage8Scene5 = {162, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, KEEP_PLAYING, &STR_Stage8d1, 149, SMALL_RUMBLE};
SCENE Stage8Scene6 = {183, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, KEEP_PLAYING, &STR_Stage8d2, &STR_Stage8d1, NULL, NULL};
SCENE Stage8Scene7 = {209, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage8Scene8 = {239, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, KEEP_PLAYING, &STR_Stage8d2, &STR_Stage8d1, NULL, NULL};
SCENE Stage8Scene9 = {264, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, KEEP_PLAYING, NULL, NULL};
SCENE Stage8Scene10 = {294, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, KEEP_PLAYING, &STR_Stage8d2, &STR_Stage8d1, 282, BIG_RUMBLE};
SCENE Stage8Scene11 = {310, &STR_Stage8d2, &STR_Stage8d2, &STR_Stage8d2, KEEP_PLAYING, &STR_Stage8d2, &STR_Stage8d1, NULL, NULL};
SCENE Stage8Scene12 = {342, &STR_Stage8d3, KEEP_PLAYING, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, 334, LOW_RUMBLE};

STAGE Stage8 = {
&STR_Stage8, // Fourth level movie.
&STR_Stage8b, // Borf movie.
8, // Stage ID.
340, // Checkpoint 1.
11, // Scenes.
&Stage8Scene1, &Stage8Scene2, &Stage8Scene3, &Stage8Scene4, &Stage8Scene5, &Stage8Scene6, &Stage8Scene7, &Stage8Scene8, &Stage8Scene9, &Stage8Scene10, &Stage8Scene11, &Stage8Scene12
};


// Stage 8 alternate path as Dexter.

SCENE Stage8p1Scene1 = {12, &STR_Stage8d4, &STR_Stage8d4, &STR_Stage8d4, &STR_Stage8d4, KEEP_PLAYING, &STR_Stage8d4, NULL, NULL};
SCENE Stage8p1Scene2 = {36, &STR_Stage8d4, &STR_Stage8d4, &STR_Stage8d4, KEEP_PLAYING, &STR_Stage8d4, &STR_Stage8d4, NULL, NULL};
SCENE Stage8p1Scene3 = {59, &STR_Stage8d3, KEEP_PLAYING, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, NULL, NULL};
SCENE Stage8p1Scene4 = {79, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, &STR_Stage8d3, KEEP_PLAYING, &STR_Stage8d3, NULL, NULL};


STAGE Stage8p1 = {
&STR_Stage8p1, // Fourth level movie alternate path as Dexter.
&STR_Stage8b, // Borf movie.
8, // Stage ID.
0, // Checkpoint 1.
3, // Scenes.
&Stage8p1Scene1, &Stage8p1Scene2, &Stage8p1Scene3, &Stage8p1Scene4
};

// -------------------------------------------------------------------------------------------


// Stage 9: Green dogs (mirrored).

SCENE Stage9Scene1 = {15, &STR_Stage9d3, KEEP_PLAYING, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, NULL, NULL};
SCENE Stage9Scene2 = {42, &STR_Stage9d4, &STR_Stage9d4, &STR_Stage9d4, &STR_Stage9d4, KEEP_PLAYING, &STR_Stage9d4, NULL, NULL};
SCENE Stage9Scene3 = {67, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, KEEP_PLAYING, &STR_Stage9d3, &STR_Stage9d3, NULL, NULL};
SCENE Stage9Scene4 = {97, &STR_Stage9d3, &STR_Stage9p1, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, KEEP_PLAYING, 88, LOW_RUMBLE};
SCENE Stage9Scene5 = {162, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, KEEP_PLAYING, &STR_Stage9d2, &STR_Stage9d1, 149, SMALL_RUMBLE};
SCENE Stage9Scene6 = {183, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, KEEP_PLAYING, &STR_Stage9d1, NULL, NULL};
SCENE Stage9Scene7 = {209, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage9Scene8 = {239, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, KEEP_PLAYING, &STR_Stage9d1, NULL, NULL};
SCENE Stage9Scene9 = {264, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, KEEP_PLAYING, NULL, NULL};
SCENE Stage9Scene10 = {294, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, KEEP_PLAYING, &STR_Stage9d1, 282, BIG_RUMBLE};
SCENE Stage9Scene11 = {310, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, &STR_Stage9d2, KEEP_PLAYING, &STR_Stage9d1, NULL, NULL};
SCENE Stage9Scene12 = {342, &STR_Stage9d3, KEEP_PLAYING, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, 334, LOW_RUMBLE};

STAGE Stage9 = {
&STR_Stage9, // Fourth level movie.
&STR_Stage9b, // Borf movie.
9, // Stage ID.
340, // Checkpoint 1.
11, // Scenes.
&Stage9Scene1, &Stage9Scene2, &Stage9Scene3, &Stage9Scene4, &Stage9Scene5, &Stage9Scene6, &Stage9Scene7, &Stage9Scene8, &Stage9Scene9, &Stage9Scene10, &Stage9Scene11, &Stage9Scene12
};

// Stage 9 alternate path as Dexter (mirrored).

SCENE Stage9p1Scene1 = {12, &STR_Stage9d4, &STR_Stage9d4, &STR_Stage9d4, KEEP_PLAYING, &STR_Stage9d4, &STR_Stage9d4, NULL, NULL};
SCENE Stage9p1Scene2 = {36, &STR_Stage9d4, &STR_Stage9d4, &STR_Stage9d4, &STR_Stage9d4, KEEP_PLAYING, &STR_Stage9d4, NULL, NULL};
SCENE Stage9p1Scene3 = {59, &STR_Stage9d3, KEEP_PLAYING, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, NULL, NULL};
SCENE Stage9p1Scene4 = {79, &STR_Stage9d3, &STR_Stage9d3, &STR_Stage9d3, KEEP_PLAYING, &STR_Stage9d3, &STR_Stage9d3, NULL, NULL};

STAGE Stage9p1 = {
&STR_Stage9p1, // Fourth level movie alternate path as Dexter.
&STR_Stage9b, // Borf movie.
9, // Stage ID.
0, // Checkpoint 1.
3, // Scenes.
&Stage9p1Scene1, &Stage9p1Scene2, &Stage9p1Scene3, &Stage9p1Scene4
};

// -------------------------------------------------------------------------------------------


// Stage 10: The junkyard.

SCENE Stage10Scene1 = {18, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, KEEP_PLAYING, 23, LOW_RUMBLE};
SCENE Stage10Scene2 = {42, &STR_Stage10d2, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d2, KEEP_PLAYING, &STR_Stage10d2, 46, MEDIUM_RUMBLE};
SCENE Stage10Scene3 = {64, &STR_Stage10d3, KEEP_PLAYING, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d3, 54, BIG_RUMBLE};
SCENE Stage10Scene4 = {93, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10p1, KEEP_PLAYING, 90, LOW_RUMBLE};
SCENE Stage10Scene5 = {122, &STR_Stage10d4, &STR_Stage10d5, &STR_Stage10d5, &STR_Stage10d7, &STR_Stage10d5, KEEP_PLAYING, 121, MEDIUM_RUMBLE};
SCENE Stage10Scene6 = {145, &STR_Stage10d7, &STR_Stage10d8, &STR_Stage10d8, &STR_Stage10d7, KEEP_PLAYING, &STR_Stage10d6, 134, MEDIUM_RUMBLE};
SCENE Stage10Scene7 = {168, &STR_Stage10d4, &STR_Stage10d5, &STR_Stage10d7, &STR_Stage10d5, &STR_Stage10d7, KEEP_PLAYING, 156, BIG_RUMBLE};
SCENE Stage10Scene8 = {185, &STR_Stage10d7, &STR_Stage10d8, &STR_Stage10d8, KEEP_PLAYING, &STR_Stage10d7, &STR_Stage10d6, 181, BIG_RUMBLE};
SCENE Stage10Scene9 = {204, &STR_Stage10d4, &STR_Stage10d5, &STR_Stage10d7, &STR_Stage10d8, &STR_Stage10d8, KEEP_PLAYING, 197, BIG_RUMBLE};
SCENE Stage10Scene10 = {229, &STR_Stage10d2, KEEP_PLAYING, &STR_Stage10d2, &STR_Stage10d3, &STR_Stage10d2, &STR_Stage10d2, 226, BOTH_RUMBLE};

STAGE Stage10 = {
&STR_Stage10, // Alternate fourth level movie.
&STR_Stage10b, // Borf movie.
10, // Stage ID.
221, // Checkpoint 1.
9, // Scenes.
&Stage10Scene1, &Stage10Scene2, &Stage10Scene3, &Stage10Scene4, &Stage10Scene5, &Stage10Scene6, &Stage10Scene7, &Stage10Scene8, &Stage10Scene9, &Stage10Scene10
};

// Stage 10 alternate path as Dexter.

SCENE Stage10p1Scene1 = {12, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, &STR_Stage10d1, KEEP_PLAYING, 14, LOW_RUMBLE};
SCENE Stage10p1Scene2 = {36, &STR_Stage10d2, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d2, KEEP_PLAYING, &STR_Stage10d2, 40, BIG_RUMBLE};
SCENE Stage10p1Scene3 = {59, &STR_Stage10d2, &STR_Stage10d2, &STR_Stage10d3, KEEP_PLAYING, &STR_Stage10d3, &STR_Stage10d2, 65, MEDIUM_RUMBLE};
SCENE Stage10p1Scene4 = {70, &STR_Stage10d2, &STR_Stage10d2, &STR_Stage10d3, KEEP_PLAYING, &STR_Stage10d3, &STR_Stage10d2, 72, BIG_RUMBLE};
SCENE Stage10p1Scene5 = {79, &STR_Stage10d2, KEEP_PLAYING, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d2, 79, BIG_RUMBLE};
SCENE Stage10p1Scene6 = {85, &STR_Stage10d2, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d3, KEEP_PLAYING, &STR_Stage10d2, 86, BIG_RUMBLE};
SCENE Stage10p1Scene7 = {101, &STR_Stage10d3, KEEP_PLAYING, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d3, &STR_Stage10d3, 103, LOW_RUMBLE};

STAGE Stage10p1 = {
&STR_Stage10p1, // Fourth level movie alternate path as Dexter.
&STR_Stage10b, // Borf movie.
10, // Stage ID.
0, // Checkpoint 1.
6, // Scenes.
&Stage10p1Scene1, &Stage10p1Scene2, &Stage10p1Scene3, &Stage10p1Scene4, &Stage10p1Scene5, &Stage10p1Scene6, &Stage10p1Scene7
};

// -------------------------------------------------------------------------------------------


// Stage 11: The junkyard (mirrored).

SCENE Stage11Scene1 = {18, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, KEEP_PLAYING, 23, LOW_RUMBLE};
SCENE Stage11Scene2 = {42, &STR_Stage11d2, &STR_Stage11d3, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d2, &STR_Stage11d2, 46, MEDIUM_RUMBLE};
SCENE Stage11Scene3 = {64, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d3, &STR_Stage11d3, &STR_Stage11d3, &STR_Stage11d3, 54, BIG_RUMBLE};
SCENE Stage11Scene4 = {93, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11p1, &STR_Stage11d1, KEEP_PLAYING, 90, LOW_RUMBLE};
SCENE Stage11Scene5 = {122, &STR_Stage11d4, &STR_Stage11d5, &STR_Stage11d5, &STR_Stage11d5, &STR_Stage11d7, KEEP_PLAYING, 121, MEDIUM_RUMBLE};
SCENE Stage11Scene6 = {145, &STR_Stage11d7, &STR_Stage11d8, &STR_Stage11d8, KEEP_PLAYING, &STR_Stage11d7, &STR_Stage11d6, 134, MEDIUM_RUMBLE};
SCENE Stage11Scene7 = {168, &STR_Stage11d4, &STR_Stage11d5, &STR_Stage11d7, &STR_Stage11d7, &STR_Stage11d5, KEEP_PLAYING, 156, BIG_RUMBLE};
SCENE Stage11Scene8 = {185, &STR_Stage11d7, &STR_Stage11d8, &STR_Stage11d8, &STR_Stage11d7, KEEP_PLAYING, &STR_Stage11d6, 181, BIG_RUMBLE};
SCENE Stage11Scene9 = {204, &STR_Stage11d4, &STR_Stage11d5, &STR_Stage11d7, &STR_Stage11d8, &STR_Stage11d8, KEEP_PLAYING, 197, BIG_RUMBLE};
SCENE Stage11Scene10 = {229, &STR_Stage11d2, KEEP_PLAYING, &STR_Stage11d2, &STR_Stage11d2, &STR_Stage11d3, &STR_Stage11d2, 226, BOTH_RUMBLE};

STAGE Stage11 = {
&STR_Stage11, // Alternate fourth level movie (mirrored).
&STR_Stage11b, // Borf movie.
11, // Stage ID.
221, // Checkpoint 1.
9, // Scenes.
&Stage11Scene1, &Stage11Scene2, &Stage11Scene3, &Stage11Scene4, &Stage11Scene5, &Stage11Scene6, &Stage11Scene7, &Stage11Scene8, &Stage11Scene9, &Stage11Scene10
};

// Stage 11 alternate path as Dexter.

SCENE Stage11p1Scene1 = {12, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, &STR_Stage11d1, KEEP_PLAYING, LOW_RUMBLE};
SCENE Stage11p1Scene2 = {36, &STR_Stage11d2, &STR_Stage11d3, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d2, &STR_Stage11d2, BIG_RUMBLE};
SCENE Stage11p1Scene3 = {59, &STR_Stage11d2, &STR_Stage11d2, &STR_Stage11d3, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d2, MEDIUM_RUMBLE};
SCENE Stage11p1Scene4 = {70, &STR_Stage11d2, &STR_Stage11d2, &STR_Stage11d3, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d2, BIG_RUMBLE};
SCENE Stage11p1Scene5 = {79, &STR_Stage11d2, KEEP_PLAYING, &STR_Stage11d3, &STR_Stage11d3, &STR_Stage11d3, &STR_Stage11d2, BIG_RUMBLE};
SCENE Stage11p1Scene6 = {85, &STR_Stage11d2, &STR_Stage11d3, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d3, &STR_Stage11d2, BIG_RUMBLE};
SCENE Stage11p1Scene7 = {101, &STR_Stage11d3, KEEP_PLAYING, &STR_Stage11d3, &STR_Stage11d3, &STR_Stage11d3, &STR_Stage11d3, LOW_RUMBLE};

STAGE Stage11p1 = {
&STR_Stage11p1, // Fourth level movie alternate path as Dexter.
&STR_Stage11b, // Borf movie.
11, // Stage ID.
0, // Checkpoint 1.
6, // Scenes.
&Stage11p1Scene1, &Stage11p1Scene2, &Stage11p1Scene3, &Stage11p1Scene4, &Stage11p1Scene5, &Stage11p1Scene6, &Stage11p1Scene7
};

// -------------------------------------------------------------------------------------------


// Stage 12: The dogfight


SCENE Stage12Scene1 = {17, &STR_Stage12d7, &STR_Stage12d7, &STR_Stage12d7, &STR_Stage12d7, KEEP_PLAYING, &STR_Stage12d7, 26, LOW_RUMBLE};
SCENE Stage12Scene2 = {76, &STR_Stage12d1, KEEP_PLAYING, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, NULL, NULL};
SCENE Stage12Scene3 = {92, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, KEEP_PLAYING, &STR_Stage12d1, &STR_Stage12d1, 89, MEDIUM_RUMBLE};
SCENE Stage12Scene4 = {108, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, KEEP_PLAYING, &STR_Stage12d1, &STR_Stage12d1, 105, MEDIUM_RUMBLE};
SCENE Stage12Scene5 = {131, &STR_Stage12d2, &STR_Stage12d5, &STR_Stage12d5, &STR_Stage12d6, &STR_Stage12d3, KEEP_PLAYING, 121, MEDIUM_RUMBLE};
SCENE Stage12Scene6 = {147, &STR_Stage12d2, &STR_Stage12d5, &STR_Stage12d5, &STR_Stage12d6, &STR_Stage12d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage12Scene7 = {164, &STR_Stage12d2, KEEP_PLAYING, &STR_Stage12d5, &STR_Stage12d6, &STR_Stage12d3, &STR_Stage12d2, NULL, NULL};
SCENE Stage12Scene8 = {193, &STR_Stage12d4, &STR_Stage12d4, KEEP_PLAYING, &STR_Stage12d6, &STR_Stage12d3, &STR_Stage12d2, NULL, NULL};
SCENE Stage12Scene9 = {208, &STR_Stage12d1, KEEP_PLAYING, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, NULL, NULL};
SCENE Stage12Scene10 = {223, &STR_Stage12d2, &STR_Stage12d5, &STR_Stage12d5, &STR_Stage12d6, &STR_Stage12d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage12Scene11 = {243, &STR_Stage12d5, KEEP_PLAYING, &STR_Stage12d5, &STR_Stage12d5, &STR_Stage12d5, &STR_Stage12d5, 235, MEDIUM_RUMBLE};
SCENE Stage12Scene12 = {260, &STR_Stage12d4, &STR_Stage12d4, &STR_Stage12d4, &STR_Stage12d4, &STR_Stage12d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage12Scene13 = {275, &STR_Stage12d1, KEEP_PLAYING, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, &STR_Stage12d1, NULL, NULL};
SCENE Stage12Scene14 = {304, &STR_Stage12d2, &STR_Stage12d5, &STR_Stage12d5, &STR_Stage12d6, &STR_Stage12d3, KEEP_PLAYING, 288, MEDIUM_RUMBLE};

STAGE Stage12 = {
&STR_Stage12, // Fifth level movie.
&STR_Stage12b, // Borf movie.
12, // Stage ID.
185, // Checkpoint 1.
13, // Scenes.
&Stage12Scene1, &Stage12Scene2, &Stage12Scene3, &Stage12Scene4, &Stage12Scene5, &Stage12Scene6, &Stage12Scene7, &Stage12Scene8, &Stage12Scene9, &Stage12Scene10, &Stage12Scene11, &Stage12Scene12, &Stage12Scene13, &Stage12Scene14
};



// -------------------------------------------------------------------------------------------


// Stage 13: The dogfight (mirrored).

SCENE Stage13Scene1 = {17, &STR_Stage13d7, &STR_Stage13d7, &STR_Stage13d7, KEEP_PLAYING, &STR_Stage13d7, &STR_Stage13d7, 26, LOW_RUMBLE};
SCENE Stage13Scene2 = {76, &STR_Stage13d1, KEEP_PLAYING, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, NULL, NULL};
SCENE Stage13Scene3 = {92, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, KEEP_PLAYING, &STR_Stage13d1, 89, MEDIUM_RUMBLE};
SCENE Stage13Scene4 = {108, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, KEEP_PLAYING, &STR_Stage13d1, 105, MEDIUM_RUMBLE};
SCENE Stage13Scene5 = {131, &STR_Stage13d2, &STR_Stage13d5, &STR_Stage13d5, &STR_Stage13d3, &STR_Stage13d6, KEEP_PLAYING, 121, MEDIUM_RUMBLE};
SCENE Stage13Scene6 = {147, &STR_Stage13d2, &STR_Stage13d5, &STR_Stage13d5, &STR_Stage13d3, &STR_Stage13d6, KEEP_PLAYING, NULL, NULL};
SCENE Stage13Scene7 = {164, &STR_Stage13d2, KEEP_PLAYING, &STR_Stage13d5, &STR_Stage13d3, &STR_Stage13d6, &STR_Stage13d2, NULL, NULL};
SCENE Stage13Scene8 = {193, &STR_Stage13d4, &STR_Stage13d4, KEEP_PLAYING, &STR_Stage13d3, &STR_Stage13d6, &STR_Stage13d2, NULL, NULL};
SCENE Stage13Scene9 = {208, &STR_Stage13d1, KEEP_PLAYING, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, NULL, NULL};
SCENE Stage13Scene10 = {223, &STR_Stage13d2, &STR_Stage13d5, &STR_Stage13d5, &STR_Stage13d3, &STR_Stage13d6, KEEP_PLAYING, NULL, NULL};
SCENE Stage13Scene11 = {243, &STR_Stage13d5, KEEP_PLAYING, &STR_Stage13d5, &STR_Stage13d5, &STR_Stage13d5, &STR_Stage13d5, 235, MEDIUM_RUMBLE};
SCENE Stage13Scene12 = {260, &STR_Stage13d4, &STR_Stage13d4, &STR_Stage13d4, &STR_Stage13d4, &STR_Stage13d4, KEEP_PLAYING, NULL, NULL};
SCENE Stage13Scene13 = {275, &STR_Stage13d1, KEEP_PLAYING, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, &STR_Stage13d1, NULL, NULL};
SCENE Stage13Scene14 = {304, &STR_Stage13d2, &STR_Stage13d5, &STR_Stage13d5, &STR_Stage13d3, &STR_Stage13d6, KEEP_PLAYING, 288, MEDIUM_RUMBLE};

STAGE Stage13 = {
&STR_Stage13, // Fifth level movie (mirrored).
&STR_Stage13b, // Borf movie.
13, // Stage ID.
185, // Checkpoint 1.
13, // Scenes.
&Stage13Scene1, &Stage13Scene2, &Stage13Scene3, &Stage13Scene4, &Stage13Scene5, &Stage13Scene6, &Stage13Scene7, &Stage13Scene8, &Stage13Scene9, &Stage13Scene10, &Stage13Scene11, &Stage13Scene12, &Stage13Scene13, &Stage13Scene14
};


// -------------------------------------------------------------------------------------------


// Stage 14: Red robots in the tunnel.

SCENE Stage14Scene1 = {43, &STR_Stage14d2, KEEP_PLAYING, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d1, NULL, NULL};
SCENE Stage14Scene2 = {63, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, KEEP_PLAYING, &STR_Stage14d2, &STR_Stage14d1, 56, MEDIUM_RUMBLE};
SCENE Stage14Scene3 = {85, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, KEEP_PLAYING, &STR_Stage14d1, NULL, NULL};
SCENE Stage14Scene4 = {114, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14p1, KEEP_PLAYING, 105, LOW_RUMBLE};
SCENE Stage14Scene5 = {131, &STR_Stage14d4, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, KEEP_PLAYING, 124, LOW_RUMBLE};
SCENE Stage14Scene6 = {154, &STR_Stage14d4, &STR_Stage14d4, &STR_Stage14d4, &STR_Stage14d4, KEEP_PLAYING, &STR_Stage14d4, 148, MEDIUM_RUMBLE};
SCENE Stage14Scene7 = {176, &STR_Stage14d4, &STR_Stage14d4, &STR_Stage14d4, KEEP_PLAYING, &STR_Stage14d4, &STR_Stage14d4, NULL, NULL};
SCENE Stage14Scene8 = {200, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage14Scene9 = {221, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, &STR_Stage14d3, KEEP_PLAYING, 217, MEDIUM_RUMBLE};
SCENE Stage14Scene10 = {245, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, KEEP_PLAYING, 234, MEDIUM_RUMBLE};

STAGE Stage14 = {
&STR_Stage14, // Sixth level movie.
&STR_Stage14b, // Borf movie.
14, // Stage ID.
248, // Checkpoint 1.
9, // Scenes.
&Stage14Scene1, &Stage14Scene2, &Stage14Scene3, &Stage14Scene4, &Stage14Scene5, &Stage14Scene6, &Stage14Scene7, &Stage14Scene8, &Stage14Scene9, &Stage14Scene10
};

// Stage 14 alternate path as Dexter.

SCENE Stage14p1Scene1 = {7, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, KEEP_PLAYING, &STR_Stage14d1, NULL, NULL};
SCENE Stage14p1Scene2 = {29, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, KEEP_PLAYING, &STR_Stage14d2, &STR_Stage14d1, NULL, NULL};
SCENE Stage14p1Scene3 = {51, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, &STR_Stage14d2, KEEP_PLAYING, NULL, NULL};

STAGE Stage14p1 = {
&STR_Stage14p1, // Sixth level movie alternate path as Dexter.
&STR_Stage14b, // Borf movie.
14, // Stage ID.
0, // Checkpoint 1.
2, // Scenes.
&Stage14p1Scene1, &Stage14p1Scene2, &Stage14p1Scene3
};

// -------------------------------------------------------------------------------------------


// Stage 15: Red robots in the tunnel (mirrored).


SCENE Stage15Scene1 = {43, &STR_Stage15d2, KEEP_PLAYING, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d1, NULL, NULL};
SCENE Stage15Scene2 = {63, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, KEEP_PLAYING, &STR_Stage15d1, 56, MEDIUM_RUMBLE};
SCENE Stage15Scene3 = {85, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, KEEP_PLAYING, &STR_Stage15d2, &STR_Stage15d1, NULL, NULL};
SCENE Stage15Scene4 = {114, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15p1, &STR_Stage15d2, KEEP_PLAYING, 105, LOW_RUMBLE};
SCENE Stage15Scene5 = {131, &STR_Stage15d4, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, KEEP_PLAYING, 124, LOW_RUMBLE};
SCENE Stage15Scene6 = {154, &STR_Stage15d4, &STR_Stage15d4, &STR_Stage15d4, KEEP_PLAYING, &STR_Stage15d4, &STR_Stage15d4, 148, MEDIUM_RUMBLE};
SCENE Stage15Scene7 = {176, &STR_Stage15d4, &STR_Stage15d4, &STR_Stage15d4, &STR_Stage15d4, KEEP_PLAYING, &STR_Stage15d4, NULL, NULL};
SCENE Stage15Scene8 = {200, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage15Scene9 = {221, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, &STR_Stage15d3, KEEP_PLAYING, 217, MEDIUM_RUMBLE};
SCENE Stage15Scene10 = {245, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, KEEP_PLAYING, 234, MEDIUM_RUMBLE};

STAGE Stage15 = {
&STR_Stage15, // Sixth level movie (mirrored).
&STR_Stage15b, // Borf movie.
15, // Stage ID.
248, // Checkpoint 1.
9, // Scenes.
&Stage15Scene1, &Stage15Scene2, &Stage15Scene3, &Stage15Scene4, &Stage15Scene5, &Stage15Scene6, &Stage15Scene7, &Stage15Scene8, &Stage15Scene9, &Stage15Scene10
};


SCENE Stage15p1Scene1 = {7, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, KEEP_PLAYING, &STR_Stage15d2, &STR_Stage15d1, NULL, NULL};
SCENE Stage15p1Scene2 = {29, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, KEEP_PLAYING, &STR_Stage15d1, NULL, NULL};
SCENE Stage15p1Scene3 = {51, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, &STR_Stage15d2, KEEP_PLAYING, NULL, NULL};

STAGE Stage15p1 = {
&STR_Stage15p1, // Sixth level movie alternate path as Dexter (mirrored).
&STR_Stage15b, // Borf movie.
15, // Stage ID.
0, // Checkpoint 1.
2, // Scenes.
&Stage15p1Scene1, &Stage15p1Scene2, &Stage15p1Scene3
};


// -------------------------------------------------------------------------------------------


// Stage 16: Blue cats.

SCENE Stage16Scene1 = {34, &STR_Stage16d1, &STR_Stage16d1, &STR_Stage16d1, &STR_Stage16d1, &STR_Stage16d1, KEEP_PLAYING, 40, SMALL_RUMBLE};
SCENE Stage16Scene2 = {56, &STR_Stage16d3, KEEP_PLAYING, &STR_Stage16d3, &STR_Stage16d3, &STR_Stage16d3, &STR_Stage16d3, 48, MEDIUM_RUMBLE};
SCENE Stage16Scene3 = {93, &STR_Stage16d2, &STR_Stage16p1, &STR_Stage16d2, &STR_Stage16d2, &STR_Stage16d2, KEEP_PLAYING, 69, BIG_RUMBLE};
SCENE Stage16Scene4 = {119, &STR_Stage16d5, &STR_Stage16d5, &STR_Stage16d5, &STR_Stage16d5, &STR_Stage16d5, KEEP_PLAYING, 107, SMALL_RUMBLE};
SCENE Stage16Scene5 = {161, &STR_Stage16d6, &STR_Stage16d5, &STR_Stage16d6, &STR_Stage16d6, &STR_Stage16d5, KEEP_PLAYING, 152, BIG_RUMBLE};
SCENE Stage16Scene6 = {193, &STR_Stage16d3, &STR_Stage16d4, &STR_Stage16d4, KEEP_PLAYING, &STR_Stage16d3, &STR_Stage16d3, 201, MEDIUM_RUMBLE};

STAGE Stage16 = {
&STR_Stage16, // Seventh level movie.
&STR_Stage16b, // Borf movie.
16, // Stage ID.
189, // Checkpoint 1.
5, // Scenes.
&Stage16Scene1, &Stage16Scene2, &Stage16Scene3, &Stage16Scene4, &Stage16Scene5, &Stage16Scene6
};

// Scene 16 alternate path as Dexter.

SCENE Stage16p1Scene1 = {16, &STR_Stage16d1, KEEP_PLAYING, &STR_Stage16d4, &STR_Stage16d1, &STR_Stage16d1, &STR_Stage16d1, NULL, NULL};
SCENE Stage16p1Scene2 = {35, &STR_Stage16d1, &STR_Stage16d4, &STR_Stage16d4, KEEP_PLAYING, &STR_Stage16d1, &STR_Stage16d1, 29, LOW_RUMBLE};
SCENE Stage16p1Scene3 = {63, &STR_Stage16d1, &STR_Stage16d1, &STR_Stage16d4, KEEP_PLAYING, &STR_Stage16d1, &STR_Stage16d1, 47, MEDIUM_RUMBLE};
SCENE Stage16p1Scene4 = {81, &STR_Stage16d3, &STR_Stage16d3, &STR_Stage16d4, &STR_Stage16d4, KEEP_PLAYING, KEEP_PLAYING, 74, BIG_RUMBLE};
SCENE Stage16p1Scene5 = {99, &STR_Stage16d4, &STR_Stage16d4, &STR_Stage16d4, KEEP_PLAYING, &STR_Stage16d4, &STR_Stage16d4, 92, MEDIUM_RUMBLE};
SCENE Stage16p1Scene6 = {119, &STR_Stage16d3, &STR_Stage16d3, &STR_Stage16d3, &STR_Stage16d3, &STR_Stage16d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage16p1Scene7 = {141, &STR_Stage16d2, KEEP_PLAYING, &STR_Stage16d2, &STR_Stage16d1, &STR_Stage16d1, &STR_Stage16d2, 131, LOW_RUMBLE};

STAGE Stage16p1 = {
&STR_Stage16p1, // Seventh level movie alternate path as Dexter.
&STR_Stage16b, // Borf movie.
16, // Stage ID.
0, // Checkpoint 1.
6, // Scenes.
&Stage16p1Scene1, &Stage16p1Scene2, &Stage16p1Scene3, &Stage16p1Scene4, &Stage16p1Scene5, &Stage16p1Scene6, &Stage16p1Scene7
};

// -------------------------------------------------------------------------------------------


//Stage 17: Blue cats (mirrored).

SCENE Stage17Scene1 = {34, &STR_Stage17d1, &STR_Stage17d1, &STR_Stage17d1, &STR_Stage17d1, &STR_Stage17d1, KEEP_PLAYING, 40, SMALL_RUMBLE};
SCENE Stage17Scene2 = {56, &STR_Stage17d3, KEEP_PLAYING, &STR_Stage17d3, &STR_Stage17d3, &STR_Stage17d3, &STR_Stage17d3, 48, MEDIUM_RUMBLE};
SCENE Stage17Scene3 = {93, &STR_Stage17d2, &STR_Stage17p1, &STR_Stage17d2, &STR_Stage17d2, &STR_Stage17d2, KEEP_PLAYING, 69, BIG_RUMBLE};
SCENE Stage17Scene4 = {119, &STR_Stage17d5, &STR_Stage17d5, &STR_Stage17d5, &STR_Stage17d5, &STR_Stage17d5, KEEP_PLAYING, 107, SMALL_RUMBLE};
SCENE Stage17Scene5 = {161, &STR_Stage17d6, &STR_Stage17d5, &STR_Stage17d6, &STR_Stage17d5, &STR_Stage17d6, KEEP_PLAYING, 152, BIG_RUMBLE};
SCENE Stage17Scene6 = {193, &STR_Stage17d3, &STR_Stage17d4, &STR_Stage17d4, &STR_Stage17d3, KEEP_PLAYING, &STR_Stage17d3, 201, MEDIUM_RUMBLE};

STAGE Stage17 = {
&STR_Stage17, // Seventh level movie (mirrored).
&STR_Stage17b, // Borf movie.
17, // Stage ID.
189, // Checkpoint 1.
5, // Scenes.
&Stage17Scene1, &Stage17Scene2, &Stage17Scene3, &Stage17Scene4, &Stage17Scene5, &Stage17Scene6
};

// Stage 17 alternate path as Dexter (mirrored).

SCENE Stage17p1Scene1 = {16, &STR_Stage17d1, KEEP_PLAYING, &STR_Stage17d4, &STR_Stage17d1, &STR_Stage17d1, &STR_Stage17d1, NULL, NULL};
SCENE Stage17p1Scene2 = {35, &STR_Stage17d1, &STR_Stage17d4, &STR_Stage17d4, &STR_Stage17d1, KEEP_PLAYING, &STR_Stage17d1, 29, LOW_RUMBLE};
SCENE Stage17p1Scene3 = {63, &STR_Stage17d1, &STR_Stage17d1, &STR_Stage17d4, &STR_Stage17d1, KEEP_PLAYING, &STR_Stage17d1, 47, MEDIUM_RUMBLE};
SCENE Stage17p1Scene4 = {81, &STR_Stage17d3, &STR_Stage17d3, &STR_Stage17d4, KEEP_PLAYING, &STR_Stage17d4, KEEP_PLAYING, 74, BIG_RUMBLE};
SCENE Stage17p1Scene5 = {99, &STR_Stage17d4, &STR_Stage17d4, &STR_Stage17d4, &STR_Stage17d4, KEEP_PLAYING, &STR_Stage17d4, 92, MEDIUM_RUMBLE};
SCENE Stage17p1Scene6 = {119, &STR_Stage17d3, &STR_Stage17d3, &STR_Stage17d3, &STR_Stage17d3, &STR_Stage17d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage17p1Scene7 = {141, &STR_Stage17d2, KEEP_PLAYING, &STR_Stage17d2, &STR_Stage17d1, &STR_Stage17d1, &STR_Stage17d2, 131, LOW_RUMBLE};


STAGE Stage17p1 = {
&STR_Stage17p1, // Seventh level movie alternate path as Dexter.
&STR_Stage17b, // Borf movie.
17, // Stage ID.
0, // Checkpoint 1.
6, // Scenes.
&Stage17p1Scene1, &Stage17p1Scene2, &Stage17p1Scene3, &Stage17p1Scene4, &Stage17p1Scene5, &Stage17p1Scene6, &Stage17p1Scene7
};


// -------------------------------------------------------------------------------------------


// Stage 18: Evil Ace.

SCENE Stage18Scene1 = {21, &STR_Stage18d1, &STR_Stage18d1, &STR_Stage18d1, &STR_Stage18d1, KEEP_PLAYING, &STR_Stage18d1, 16, SMALL_RUMBLE};
SCENE Stage18Scene2 = {65, &STR_Stage18d5, &STR_Stage18d5, &STR_Stage18d4, &STR_Stage18d5, &STR_Stage18d5, KEEP_PLAYING, 75, SMALL_RUMBLE};
SCENE Stage18Scene3 = {81, &STR_Stage18d2, &STR_Stage18d2, &STR_Stage18d2, &STR_Stage18d4, KEEP_PLAYING, &STR_Stage18d2, 83, MEDIUM_RUMBLE};
SCENE Stage18Scene4 = {111, &STR_Stage18d3, &STR_Stage18d3, &STR_Stage18p1, &STR_Stage18d3, &STR_Stage18d3, KEEP_PLAYING, 121, LOW_RUMBLE};
SCENE Stage18Scene5 = {138, &STR_Stage18d6, &STR_Stage18d6, &STR_Stage18d6, KEEP_PLAYING, &STR_Stage18d6, &STR_Stage18d6, NULL, NULL};
SCENE Stage18Scene6 = {159, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, KEEP_PLAYING, 169, LOW_RUMBLE};
SCENE Stage18Scene7 = {181, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, KEEP_PLAYING, &STR_Stage18d8, NULL, NULL};
SCENE Stage18Scene8 = {203, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, &STR_Stage18d8, KEEP_PLAYING, 193, MEDIUM_RUMBLE};
SCENE Stage18Scene9 = {228, &STR_Stage18d6, &STR_Stage18d7, KEEP_PLAYING, &STR_Stage18d7, &STR_Stage18d7, &STR_Stage18d7, NULL, NULL};
SCENE Stage18Scene10 = {241, &STR_Stage18d6, &STR_Stage18d7, &STR_Stage18d7, KEEP_PLAYING, &STR_Stage18d7, &STR_Stage18d7, 241, LOW_RUMBLE};
SCENE Stage18Scene11 = {263, &STR_Stage18d6, &STR_Stage18d7, &STR_Stage18d7, KEEP_PLAYING, &STR_Stage18d7, &STR_Stage18d7, 258, LOW_RUMBLE};
SCENE Stage18Scene12 = {283, &STR_Stage18d6, KEEP_PLAYING, &STR_Stage18d7, &STR_Stage18d7, &STR_Stage18d7, &STR_Stage18d7, 276, LOW_RUMBLE};
SCENE Stage18Scene13 = {303, &STR_Stage18d9, &STR_Stage18d9, &STR_Stage18d9, &STR_Stage18d9, KEEP_PLAYING, &STR_Stage18d9, 296, BOTH_RUMBLE};
SCENE Stage18Scene14 = {321, &STR_Stage18d9, KEEP_PLAYING, &STR_Stage18d9, &STR_Stage18d9, &STR_Stage18d9, &STR_Stage18d9, 331, LOW_RUMBLE};

STAGE Stage18 = {
&STR_Stage18, // Eighth level movie.
&STR_Stage18b, // Borf movie.
18, // Stage ID.
0, // Checkpoint 1.
13, // Scenes.
&Stage18Scene1, &Stage18Scene2, &Stage18Scene3, &Stage18Scene4, &Stage18Scene5, &Stage18Scene6, &Stage18Scene7, &Stage18Scene8, &Stage18Scene9, &Stage18Scene10, &Stage18Scene11, &Stage18Scene12, &Stage18Scene13, &Stage18Scene14
};

// Stage 18 alternate path as Dexter.

SCENE Stage18p1Scene1 = {19, &STR_Stage18d2, &STR_Stage18d2, &STR_Stage18d2, &STR_Stage18d2, KEEP_PLAYING, &STR_Stage18d2, 19, LOW_RUMBLE};
SCENE Stage18p1Scene2 = {36, &STR_Stage18d2, &STR_Stage18d2, &STR_Stage18d2, &STR_Stage18d2, KEEP_PLAYING, &STR_Stage18d2, 30, MEDIUM_RUMBLE};

STAGE Stage18p1 = {
&STR_Stage18p1, // Eighth level movie alternate path as Dexter.
&STR_Stage18b, // Borf movie.
18, // Stage ID.
0, // Checkpoint 1.
1, // Scenes.
&Stage18p1Scene1, &Stage18p1Scene2
};


// -------------------------------------------------------------------------------------------


// Stage 19: Evil Ace (mirrored).

SCENE Stage19Scene1 = {21, &STR_Stage19d1, &STR_Stage19d1, &STR_Stage19d1, KEEP_PLAYING, &STR_Stage19d1, &STR_Stage19d1, 16, SMALL_RUMBLE};
SCENE Stage19Scene2 = {65, &STR_Stage19d5, &STR_Stage19d5, &STR_Stage19d4, &STR_Stage19d5, &STR_Stage19d5, KEEP_PLAYING, 75, SMALL_RUMBLE};
SCENE Stage19Scene3 = {81, &STR_Stage19d2, &STR_Stage19d2, &STR_Stage19d2, KEEP_PLAYING, &STR_Stage19d4, &STR_Stage19d2, 83, MEDIUM_RUMBLE};
SCENE Stage19Scene4 = {111, &STR_Stage19d3, &STR_Stage19d3, &STR_Stage19p1, &STR_Stage19d3, &STR_Stage19d3, KEEP_PLAYING, 121, LOW_RUMBLE};
SCENE Stage19Scene5 = {138, &STR_Stage19d6, &STR_Stage19d6, &STR_Stage19d6, &STR_Stage19d6, KEEP_PLAYING, &STR_Stage19d6, NULL, NULL};
SCENE Stage19Scene6 = {159, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, KEEP_PLAYING, 169, LOW_RUMBLE};
SCENE Stage19Scene7 = {181, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, KEEP_PLAYING, &STR_Stage19d8, &STR_Stage19d8, NULL, NULL};
SCENE Stage19Scene8 = {203, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, &STR_Stage19d8, KEEP_PLAYING, 193, MEDIUM_RUMBLE};
SCENE Stage19Scene9 = {228, &STR_Stage19d6, &STR_Stage19d7, KEEP_PLAYING, &STR_Stage19d7, &STR_Stage19d7, &STR_Stage19d7, NULL, NULL};
SCENE Stage19Scene10 = {241, &STR_Stage19d6, &STR_Stage19d7, &STR_Stage19d7, &STR_Stage19d7, KEEP_PLAYING, &STR_Stage19d7, 241, LOW_RUMBLE};
SCENE Stage19Scene11 = {263, &STR_Stage19d6, &STR_Stage19d7, &STR_Stage19d7, &STR_Stage19d7, KEEP_PLAYING, &STR_Stage19d7, 258, LOW_RUMBLE};
SCENE Stage19Scene12 = {283, &STR_Stage19d6, KEEP_PLAYING, &STR_Stage19d7, &STR_Stage19d7, &STR_Stage19d7, &STR_Stage19d7, 276, LOW_RUMBLE};
SCENE Stage19Scene13 = {303, &STR_Stage19d9, &STR_Stage19d9, &STR_Stage19d9, KEEP_PLAYING, &STR_Stage19d9, &STR_Stage19d9, 296, BOTH_RUMBLE};
SCENE Stage19Scene14 = {321, &STR_Stage19d9, KEEP_PLAYING, &STR_Stage19d9, &STR_Stage19d9, &STR_Stage19d9, &STR_Stage19d9, 331, LOW_RUMBLE};

STAGE Stage19 = {
&STR_Stage19, // Eighth level movie (mirrored).
&STR_Stage19b, // Borf movie.
19, // Stage ID.
0, // Checkpoint 1.
13, // Scenes.
&Stage19Scene1, &Stage19Scene2, &Stage19Scene3, &Stage19Scene4, &Stage19Scene5, &Stage19Scene6, &Stage19Scene7, &Stage19Scene8, &Stage19Scene9, &Stage19Scene10, &Stage19Scene11, &Stage19Scene12, &Stage19Scene13, &Stage19Scene14
};

// Stage 19 alternate path as Dexter (mirrored).

SCENE Stage19p1Scene1 = {19, &STR_Stage19d2, &STR_Stage19d2, &STR_Stage19d2, KEEP_PLAYING, &STR_Stage19d2, &STR_Stage19d2, 19, LOW_RUMBLE};
SCENE Stage19p1Scene2 = {36, &STR_Stage19d2, &STR_Stage19d2, &STR_Stage19d2, KEEP_PLAYING, &STR_Stage19d2, &STR_Stage19d2, 30, MEDIUM_RUMBLE};

STAGE Stage19p1 = {
&STR_Stage19p1, // Eighth level movie alternate path as Dexter (mirrored).
&STR_Stage19b, // Borf movie.
19, // Stage ID.
0, // Checkpoint 1.
1, // Scenes.
&Stage19p1Scene1, &Stage19p1Scene2
};


// -------------------------------------------------------------------------------------------


// Stage 20: Bike chase.

SCENE Stage20Scene1 = {67, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, KEEP_PLAYING, &STR_Stage20d3, &STR_Stage20d3, 67, LOW_RUMBLE};
SCENE Stage20Scene2 = {97, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, KEEP_PLAYING, &STR_Stage20d3, 91, LOW_RUMBLE};
SCENE Stage20Scene3 = {117, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage20Scene4 = {152, &STR_Stage20d5, &STR_Stage20d5, &STR_Stage20p1, &STR_Stage20d4, &STR_Stage20d4, KEEP_PLAYING, 154, LOW_RUMBLE};
SCENE Stage20Scene5 = {197, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, KEEP_PLAYING, 189, LOW_RUMBLE};
SCENE Stage20Scene6 = {224, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, KEEP_PLAYING, NULL, NULL};
SCENE Stage20Scene7 = {259, &STR_Stage20d6, &STR_Stage20d6, &STR_Stage20d6, &STR_Stage20d6, KEEP_PLAYING, &STR_Stage20d6, 259, BIG_RUMBLE};
SCENE Stage20Scene8 = {304, &STR_Stage20d6, &STR_Stage20d5, KEEP_PLAYING, &STR_Stage20d6, &STR_Stage20d6, &STR_Stage20d6, 275, LOW_RUMBLE};
SCENE Stage20Scene9 = {320, &STR_Stage20d7, &STR_Stage20d7, &STR_Stage20d7, &STR_Stage20d7, KEEP_PLAYING, &STR_Stage20d7, 315, MEDIUM_RUMBLE};
SCENE Stage20Scene10 = {340, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, KEEP_PLAYING, NULL, NULL};
SCENE Stage20Scene11 = {359, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, KEEP_PLAYING, 352, SMALL_RUMBLE};
SCENE Stage20Scene12 = {383, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, KEEP_PLAYING, 371, SMALL_RUMBLE};
SCENE Stage20Scene13 = {431, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, KEEP_PLAYING, &STR_Stage20d9, 397, SMALL_RUMBLE};
SCENE Stage20Scene14 = {448, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, KEEP_PLAYING, NULL, NULL};
SCENE Stage20Scene15 = {479, &STR_Stage20d9, &STR_Stage20d5, &STR_Stage20d9, KEEP_PLAYING, &STR_Stage20d9, &STR_Stage20d9, 460, SMALL_RUMBLE};
SCENE Stage20Scene16 = {527, &STR_Stage20d9, &STR_Stage20d5, &STR_Stage20d9, &STR_Stage20d9, KEEP_PLAYING, &STR_Stage20d9, NULL, NULL};
SCENE Stage20Scene17 = {548, &STR_Stage20d9, &STR_Stage20d9, KEEP_PLAYING, &STR_Stage20d9, &STR_Stage20d9, &STR_Stage20d9, NULL, NULL};
SCENE Stage20Scene18 = {570, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, &STR_Stage20d8, KEEP_PLAYING, 580, SMALL_RUMBLE};

STAGE Stage20 = {
&STR_Stage20, // Ninth level movie.
&STR_Stage20b, // Borf movie.
20, // Stage ID.
423, // Checkpoint 1.
17, // Scenes.
&Stage20Scene1, &Stage20Scene2, &Stage20Scene3, &Stage20Scene4, &Stage20Scene5, &Stage20Scene6, &Stage20Scene7, &Stage20Scene8, &Stage20Scene9, &Stage20Scene10, &Stage20Scene11, &Stage20Scene12, &Stage20Scene13, &Stage20Scene14, &Stage20Scene15, &Stage20Scene16, &Stage20Scene17, &Stage20Scene18
};

// Stage 20 alternate path as Dexter.

SCENE Stage20p1Scene1 = {36, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d3, &STR_Stage20d1, &STR_Stage20d2, KEEP_PLAYING, 30, LOW_RUMBLE};

STAGE Stage20p1 = {
&STR_Stage20p1, // Ninth level movie alternate path as Dexter.
&STR_Stage20b, // Borf movie.
20, // Stage ID.
0, // Checkpoint 1.
0, // Scenes.
&Stage20p1Scene1
};


// -------------------------------------------------------------------------------------------

// Stage 21: Bike chase (mirrored).

SCENE Stage21Scene1 = {67, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, KEEP_PLAYING, &STR_Stage21d3, 67, LOW_RUMBLE};
SCENE Stage21Scene2 = {97, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, KEEP_PLAYING, &STR_Stage21d3, &STR_Stage21d3, 91, LOW_RUMBLE};
SCENE Stage21Scene3 = {117, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, KEEP_PLAYING, NULL, NULL};
SCENE Stage21Scene4 = {152, &STR_Stage21d5, &STR_Stage21d5, &STR_Stage21p1, &STR_Stage21d4, &STR_Stage21d4, KEEP_PLAYING, 154, LOW_RUMBLE};
SCENE Stage21Scene5 = {197, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, KEEP_PLAYING, 189, LOW_RUMBLE};
SCENE Stage21Scene6 = {224, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, KEEP_PLAYING, NULL, NULL};
SCENE Stage21Scene7 = {259, &STR_Stage21d6, &STR_Stage21d6, &STR_Stage21d6, KEEP_PLAYING, &STR_Stage21d6, &STR_Stage21d6, 259, BIG_RUMBLE};
SCENE Stage21Scene8 = {304, &STR_Stage21d6, &STR_Stage21d5, KEEP_PLAYING, &STR_Stage21d6, &STR_Stage21d6, &STR_Stage21d6, 275, LOW_RUMBLE};
SCENE Stage21Scene9 = {320, &STR_Stage21d7, &STR_Stage21d7, &STR_Stage21d7, KEEP_PLAYING, &STR_Stage21d7, &STR_Stage21d7, 315, MEDIUM_RUMBLE};
SCENE Stage21Scene10 = {340, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, KEEP_PLAYING, NULL, NULL};
SCENE Stage21Scene11 = {359, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, KEEP_PLAYING, 352, SMALL_RUMBLE};
SCENE Stage21Scene12 = {383, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, KEEP_PLAYING, 371, SMALL_RUMBLE};
SCENE Stage21Scene13 = {431, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, KEEP_PLAYING, &STR_Stage21d9, &STR_Stage21d9, 397, SMALL_RUMBLE};
SCENE Stage21Scene14 = {448, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, KEEP_PLAYING, NULL, NULL};
SCENE Stage21Scene15 = {479, &STR_Stage21d9, &STR_Stage21d5, &STR_Stage21d9, &STR_Stage21d9, KEEP_PLAYING, &STR_Stage21d9, 460, SMALL_RUMBLE};
SCENE Stage21Scene16 = {527, &STR_Stage21d9, &STR_Stage21d5, &STR_Stage21d9, KEEP_PLAYING, &STR_Stage21d9, &STR_Stage21d9, NULL, NULL};
SCENE Stage21Scene17 = {548, &STR_Stage21d9, &STR_Stage21d9, KEEP_PLAYING, &STR_Stage21d9, &STR_Stage21d9, &STR_Stage21d9, NULL, NULL};
SCENE Stage21Scene18 = {570, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, &STR_Stage21d8, KEEP_PLAYING, 580, SMALL_RUMBLE};

STAGE Stage21 = {
&STR_Stage21, // Ninth level movie (mirrored).
&STR_Stage21b, // Borf movie.
21, // Stage ID.
423, // Checkpoint 1.
17, // Scenes.
&Stage21Scene1, &Stage21Scene2, &Stage21Scene3, &Stage21Scene4, &Stage21Scene5, &Stage21Scene6, &Stage21Scene7, &Stage21Scene8, &Stage21Scene9, &Stage21Scene10, &Stage21Scene11, &Stage21Scene12, &Stage21Scene13, &Stage21Scene14, &Stage21Scene15, &Stage21Scene16, &Stage21Scene17, &Stage21Scene18
};

// Stage 21 alternate path as Dexter.

SCENE Stage21p1Scene1 = {36, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d3, &STR_Stage21d1, &STR_Stage21d2, KEEP_PLAYING, 30, LOW_RUMBLE};

STAGE Stage21p1 = {
&STR_Stage21p1, // Ninth level movie alternate path as Dexter (mirrored).
&STR_Stage21b, // Borf movie.
21, // Stage ID.
0, // Checkpoint 1.
0, // Scenes.
&Stage21p1Scene1
};


// -------------------------------------------------------------------------------------------

// Stage 22: Roller skates and underwater escape.

SCENE Stage22Scene1 = {46, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, KEEP_PLAYING, &STR_Stage22d1, 47, LOW_RUMBLE};
SCENE Stage22Scene2 = {55, &STR_Stage22d1, KEEP_PLAYING, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, NULL, NULL};
SCENE Stage22Scene3 = {73, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, KEEP_PLAYING, &STR_Stage22d1, &STR_Stage22d1, 72, LOW_RUMBLE};
SCENE Stage22Scene4 = {90, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22d1, &STR_Stage22p1, KEEP_PLAYING, 87, LOW_RUMBLE};
SCENE Stage22Scene5 = {104, &STR_Stage22d4, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, 112, LOW_RUMBLE};
SCENE Stage22Scene6 = {119, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, &STR_Stage22d4, 128, LOW_RUMBLE};
SCENE Stage22Scene7 = {138, &STR_Stage22d5, &STR_Stage22d5, &STR_Stage22d5, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d5, 141, LOW_RUMBLE};
SCENE Stage22Scene8 = {149, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, &STR_Stage22d4, NULL, NULL};
SCENE Stage22Scene9 = {157, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, NULL, NULL};
SCENE Stage22Scene10 = {164, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, NULL, NULL};
SCENE Stage22Scene11 = {173, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, NULL, NULL};
SCENE Stage22Scene12 = {184, &STR_Stage22d4, &STR_Stage22d4, &STR_Stage22d4, KEEP_PLAYING, &STR_Stage22d4, &STR_Stage22d4, NULL, NULL};
SCENE Stage22Scene13 = {263, &STR_Stage22d7, &STR_Stage22d7, &STR_Stage22d7, KEEP_PLAYING, &STR_Stage22d7, &STR_Stage22d7, 256, LOW_RUMBLE};
SCENE Stage22Scene14 = {308, &STR_Stage22d6, &STR_Stage22d6, &STR_Stage22d6, &STR_Stage22d6, &STR_Stage22d6, KEEP_PLAYING, NULL, NULL};
SCENE Stage22Scene15 = {355, &STR_Stage22d7, &STR_Stage22d7, &STR_Stage22d7, &STR_Stage22d7, KEEP_PLAYING, &STR_Stage22d7, 320, MEDIUM_RUMBLE};
SCENE Stage22Scene16 = {392, &STR_Stage22d8, &STR_Stage22d8, KEEP_PLAYING, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, NULL, NULL};
SCENE Stage22Scene17 = {410, &STR_Stage22d9, &STR_Stage22d9, &STR_Stage22d9, &STR_Stage22d9, KEEP_PLAYING, &STR_Stage22d9, 404, MEDIUM_RUMBLE};
SCENE Stage22Scene18 = {439, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, KEEP_PLAYING, &STR_Stage22d8, &STR_Stage22d8, 421, LOW_RUMBLE};
SCENE Stage22Scene19 = {464, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, KEEP_PLAYING, 450, LOW_RUMBLE};
SCENE Stage22Scene20 = {483, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, &STR_Stage22d8, KEEP_PLAYING, 492, MEDIUM_RUMBLE};
SCENE Stage22Scene21 = {497, &STR_Stage22d10, &STR_Stage22d10, &STR_Stage22d10, &STR_Stage22d10, &STR_Stage22d10, KEEP_PLAYING, NULL, NULL};
SCENE Stage22Scene22 = {520, &STR_Stage22d11, &STR_Stage22d11, &STR_Stage22d11, &STR_Stage22d11, KEEP_PLAYING, &STR_Stage22d11, 510, MEDIUM_RUMBLE};
SCENE Stage22Scene23 = {543, &STR_Stage22d11, &STR_Stage22d11, &STR_Stage22d11, &STR_Stage22d11, KEEP_PLAYING, &STR_Stage22d11, 552, LOW_RUMBLE};

STAGE Stage22 = {
&STR_Stage22, // Tenth level movie.
&STR_Stage22b, // Borf movie.
22, // Stage ID.
218, // Checkpoint 1.
22, // Scenes.
&Stage22Scene1, &Stage22Scene2, &Stage22Scene3, &Stage22Scene4, &Stage22Scene5, &Stage22Scene6, &Stage22Scene7, &Stage22Scene8, &Stage22Scene9, &Stage22Scene10, &Stage22Scene11, &Stage22Scene12, &Stage22Scene13, &Stage22Scene14, &Stage22Scene15, &Stage22Scene16, &Stage22Scene17, &Stage22Scene18, &Stage22Scene19, &Stage22Scene20, &Stage22Scene21, &Stage22Scene22, &Stage22Scene23
};


// Stage 22 alternate path as Dexter.

SCENE Stage22p1Scene1 = {65, &STR_Stage22d2, &STR_Stage22d2, &STR_Stage22d2, KEEP_PLAYING, &STR_Stage22d2, &STR_Stage22d2, 57, LOW_RUMBLE};
SCENE Stage22p1Scene2 = {110, &STR_Stage22d3, &STR_Stage22d3, &STR_Stage22d3, &STR_Stage22d3, &STR_Stage22d3, KEEP_PLAYING, 120, MEDIUM_RUMBLE};

STAGE Stage22p1 = {
&STR_Stage22p1, // Tenth level movie alternate path as Dexter.
&STR_Stage22b, // Borf movie.
22, // Stage ID.
0, // Checkpoint 1.
1, // Scenes.
&Stage22p1Scene1, &Stage22p1Scene2
};

// -------------------------------------------------------------------------------------------

// Stage 23: Roller skates and underwater escape (mirrored).

SCENE Stage23Scene1 = {46, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23d1, KEEP_PLAYING, &STR_Stage23d1, &STR_Stage23d1, 47, LOW_RUMBLE};
SCENE Stage23Scene2 = {55, &STR_Stage23d1, KEEP_PLAYING, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23d1, NULL, NULL};
SCENE Stage23Scene3 = {73, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23d1, KEEP_PLAYING, &STR_Stage23d1, 72, LOW_RUMBLE};
SCENE Stage23Scene4 = {90, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23d1, &STR_Stage23p1, &STR_Stage23d1, KEEP_PLAYING, 87, LOW_RUMBLE};
SCENE Stage23Scene5 = {104, &STR_Stage23d4, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, 112, LOW_RUMBLE};
SCENE Stage23Scene6 = {119, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, 128, LOW_RUMBLE};
SCENE Stage23Scene7 = {138, &STR_Stage23d5, &STR_Stage23d5, &STR_Stage23d5, KEEP_PLAYING, &STR_Stage23d4, &STR_Stage23d5, 141, LOW_RUMBLE};
SCENE Stage23Scene8 = {149, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, NULL, NULL};
SCENE Stage23Scene9 = {157, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, NULL, NULL};
SCENE Stage23Scene10 = {164, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, &STR_Stage23d4, NULL, NULL};
SCENE Stage23Scene11 = {173, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, NULL, NULL};
SCENE Stage23Scene12 = {184, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, &STR_Stage23d4, KEEP_PLAYING, &STR_Stage23d4, NULL, NULL};
SCENE Stage23Scene13 = {263, &STR_Stage23d7, &STR_Stage23d7, &STR_Stage23d7, &STR_Stage23d7, KEEP_PLAYING, &STR_Stage23d7, 256, LOW_RUMBLE};
SCENE Stage23Scene14 = {308, &STR_Stage23d6, &STR_Stage23d6, &STR_Stage23d6, &STR_Stage23d6, &STR_Stage23d6, KEEP_PLAYING, NULL, NULL};
SCENE Stage23Scene15 = {355, &STR_Stage23d7, &STR_Stage23d7, &STR_Stage23d7, KEEP_PLAYING, &STR_Stage23d7, &STR_Stage23d7, 320, MEDIUM_RUMBLE};
SCENE Stage23Scene16 = {392, &STR_Stage23d8, &STR_Stage23d8, KEEP_PLAYING, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, NULL, NULL};
SCENE Stage23Scene17 = {410, &STR_Stage23d9, &STR_Stage23d9, &STR_Stage23d9, KEEP_PLAYING, &STR_Stage23d9, &STR_Stage23d9, 404, MEDIUM_RUMBLE};
SCENE Stage23Scene18 = {439, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, KEEP_PLAYING, &STR_Stage23d8, 421, LOW_RUMBLE};
SCENE Stage23Scene19 = {464, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, KEEP_PLAYING, 450, LOW_RUMBLE};
SCENE Stage23Scene20 = {483, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, &STR_Stage23d8, KEEP_PLAYING, 492, MEDIUM_RUMBLE};
SCENE Stage23Scene21 = {497, &STR_Stage23d10, &STR_Stage23d10, &STR_Stage23d10, &STR_Stage23d10, &STR_Stage23d10, KEEP_PLAYING, NULL, NULL};
SCENE Stage23Scene22 = {520, &STR_Stage23d11, &STR_Stage23d11, &STR_Stage23d11, KEEP_PLAYING, &STR_Stage23d11, &STR_Stage23d11, 510, MEDIUM_RUMBLE};
SCENE Stage23Scene23 = {543, &STR_Stage23d11, &STR_Stage23d11, &STR_Stage23d11, KEEP_PLAYING, &STR_Stage23d11, &STR_Stage23d11, 552, LOW_RUMBLE};

STAGE Stage23 = {
&STR_Stage23, // Tenth level movie (mirrored).
&STR_Stage23b, // Borf movie.
23, // Stage ID.
218, // Checkpoint 1.
22, // Scenes.
&Stage23Scene1, &Stage23Scene2, &Stage23Scene3, &Stage23Scene4, &Stage23Scene5, &Stage23Scene6, &Stage23Scene7, &Stage23Scene8, &Stage23Scene9, &Stage23Scene10, &Stage23Scene11, &Stage23Scene12, &Stage23Scene13, &Stage23Scene14, &Stage23Scene15, &Stage23Scene16, &Stage23Scene17, &Stage23Scene18, &Stage23Scene19, &Stage23Scene20, &Stage23Scene21, &Stage23Scene22, &Stage23Scene23
};

// Stage 23 alternate path as Dexter (mirrored).

SCENE Stage23p1Scene1 = {65, &STR_Stage23d2, &STR_Stage23d2, &STR_Stage23d2, &STR_Stage23d2, KEEP_PLAYING, &STR_Stage23d2, 57, LOW_RUMBLE};
SCENE Stage23p1Scene2 = {110, &STR_Stage23d3, &STR_Stage23d3, &STR_Stage23d3, &STR_Stage23d3, &STR_Stage23d3, KEEP_PLAYING, 120, MEDIUM_RUMBLE};

STAGE Stage23p1 = {
&STR_Stage23p1, // Tenth level movie alternate path as Dexter (mirrored).
&STR_Stage23b, // Borf movie.
23, // Stage ID.
0, // Checkpoint 1.
1, // Scenes.
&Stage23p1Scene1, &Stage23p1Scene2
};


// -------------------------------------------------------------------------------------------


// Stage 24: Fight against Borf.

SCENE Stage24Scene1 = {73, &STR_Stage24d10, KEEP_PLAYING, &STR_Stage24d10, KEEP_PLAYING, KEEP_PLAYING, &STR_Stage24d10, 16, LOW_RUMBLE};
SCENE Stage24Scene2 = {107, &STR_Stage24d11, &STR_Stage24d11, &STR_Stage24d11, &STR_Stage24d11, &STR_Stage24d11, KEEP_PLAYING, 88, LOW_RUMBLE};
SCENE Stage24Scene3 = {122, &STR_Stage24d11, &STR_Stage24d11, &STR_Stage24d11, &STR_Stage24d11, &STR_Stage24d11, KEEP_PLAYING, 122, LOW_RUMBLE};
SCENE Stage24Scene4 = {153, &STR_Stage24d9, &STR_Stage24d9, &STR_Stage24d9, &STR_Stage24d9, KEEP_PLAYING, &STR_Stage24d9, 155, BIG_RUMBLE};
SCENE Stage24Scene5 = {197, &STR_Stage24d8, &STR_Stage24d8, &STR_Stage24d8, KEEP_PLAYING, &STR_Stage24d10, &STR_Stage24d8, 206, BIG_RUMBLE};
SCENE Stage24Scene6 = {213, &STR_Stage24d8, &STR_Stage24d8, &STR_Stage24p2, &STR_Stage24d8, &STR_Stage24d8, KEEP_PLAYING, 214, LOW_RUMBLE};
SCENE Stage24Scene7 = {255, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, 265, SMALL_RUMBLE};
SCENE Stage24Scene8 = {272, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, 282, LOW_RUMBLE};
SCENE Stage24Scene9 = {311, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, 321, SMALL_RUMBLE};
SCENE Stage24Scene10 = {333, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, 327, LOW_RUMBLE};
SCENE Stage24Scene11 = {359, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, 344, SMALL_RUMBLE};
SCENE Stage24Scene12 = {374, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, NULL, NULL};
SCENE Stage24Scene13 = {405, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, 415, SMALL_RUMBLE};
SCENE Stage24Scene14 = {431, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, 425, LOW_RUMBLE};
SCENE Stage24Scene15 = {448, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, 442, LOW_RUMBLE};
SCENE Stage24Scene16 = {479, &STR_Stage24d4, &STR_Stage24d4, KEEP_PLAYING, &STR_Stage24d4, &STR_Stage24d4, &STR_Stage24d4, 476, LOW_RUMBLE};
SCENE Stage24Scene17 = {518, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, NULL, NULL};
SCENE Stage24Scene18 = {557, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, KEEP_PLAYING, &STR_Stage24d5, &STR_Stage24d5, 540, LOW_RUMBLE};
SCENE Stage24Scene19 = {590, &STR_Stage24d6, &STR_Stage24d6, &STR_Stage24d6, &STR_Stage24d6, KEEP_PLAYING, &STR_Stage24d6, 589, LOW_RUMBLE};
SCENE Stage24Scene20 = {626, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, KEEP_PLAYING, &STR_Stage24d5, &STR_Stage24d5, NULL, NULL};
SCENE Stage24Scene21 = {637, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, KEEP_PLAYING, 644, SMALL_RUMBLE};
SCENE Stage24Scene22 = {658, &STR_Stage24d1, &STR_Stage24d1, &STR_Stage24d1, KEEP_PLAYING, &STR_Stage24d3, &STR_Stage24d1, 655, BOTH_RUMBLE};
SCENE Stage24Scene23 = {672, &STR_Stage24d1, &STR_Stage24d1, &STR_Stage24d1, &STR_Stage24d3, KEEP_PLAYING, &STR_Stage24d1, 670, BOTH_RUMBLE};
SCENE Stage24Scene24 = {698, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, KEEP_PLAYING, &STR_Stage24d7, 683, LOW_RUMBLE};
SCENE Stage24Scene25 = {726, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, KEEP_PLAYING, &STR_Stage24d7, 710, LOW_RUMBLE};
SCENE Stage24Scene26 = {754, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, KEEP_PLAYING, &STR_Stage24d7, &STR_Stage24d7, 737, BOTH_RUMBLE};

STAGE Stage24 = {
&STR_Stage24, // Eleventh level movie.
&STR_Stage24b, // Borf movie.
24, // Stage ID.
630, // Checkpoint 1.
25, // Scenes.
&Stage24Scene1, &Stage24Scene2, &Stage24Scene3, &Stage24Scene4, &Stage24Scene5, &Stage24Scene6, &Stage24Scene7, &Stage24Scene8, &Stage24Scene9, &Stage24Scene10, &Stage24Scene11, &Stage24Scene12, &Stage24Scene13, &Stage24Scene14, &Stage24Scene15, &Stage24Scene16, &Stage24Scene17, &Stage24Scene18, &Stage24Scene19, &Stage24Scene20, &Stage24Scene21, &Stage24Scene22, &Stage24Scene23, &Stage24Scene24, &Stage24Scene25, &Stage24Scene26
};

// Stage 24 shorter alternate path.

SCENE Stage24p2Scene1 = {24, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, NULL, NULL};
SCENE Stage24p2Scene2 = {53, &STR_Stage24d4, &STR_Stage24d4, KEEP_PLAYING, &STR_Stage24d4, &STR_Stage24d4, &STR_Stage24d4, 50, SMALL_RUMBLE};
SCENE Stage24p2Scene3 = {92, &STR_Stage24d2, KEEP_PLAYING, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, &STR_Stage24d2, NULL, NULL};
SCENE Stage24p2Scene4 = {131, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, KEEP_PLAYING, &STR_Stage24d5, &STR_Stage24d5, 113, LOW_RUMBLE};
SCENE Stage24p2Scene5 = {164, &STR_Stage24d6, &STR_Stage24d6, &STR_Stage24d6, &STR_Stage24d6, KEEP_PLAYING, &STR_Stage24d6, 163, LOW_RUMBLE};
SCENE Stage24p2Scene6 = {200, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, KEEP_PLAYING, &STR_Stage24d5, &STR_Stage24d5, NULL, NULL};
SCENE Stage24p2Scene7 = {211, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, &STR_Stage24d5, KEEP_PLAYING, 214, SMALL_RUMBLE};
SCENE Stage24p2Scene8 = {232, &STR_Stage24d1, &STR_Stage24d1, &STR_Stage24d1, KEEP_PLAYING, &STR_Stage24d3, &STR_Stage24d1, 229, BOTH_RUMBLE};
SCENE Stage24p2Scene9 = {246, &STR_Stage24d1, &STR_Stage24d1, &STR_Stage24d1, &STR_Stage24d3, KEEP_PLAYING, &STR_Stage24d1, 244, BOTH_RUMBLE};
SCENE Stage24p2Scene10 = {272, &STR_Stage24d12, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, KEEP_PLAYING, &STR_Stage24d7, 257, LOW_RUMBLE};
SCENE Stage24p2Scene11 = {300, &STR_Stage24d12, &STR_Stage24d7, &STR_Stage24d7, &STR_Stage24d7, KEEP_PLAYING, &STR_Stage24d7, 283, LOW_RUMBLE};
SCENE Stage24p2Scene12 = {328, &STR_Stage24d12, &STR_Stage24d7, &STR_Stage24d7, KEEP_PLAYING, &STR_Stage24d7, &STR_Stage24d7, 311, LOW_RUMBLE};

STAGE Stage24p2 = {
&STR_Stage24p2, // Eleventh level movie shorter alternate path.
&STR_Stage24b, // Borf movie.
24, // Stage ID.
0, // Checkpoint 1.
11, // Scenes.
&Stage24p2Scene1, &Stage24p2Scene2, &Stage24p2Scene3, &Stage24p2Scene4, &Stage24p2Scene5, &Stage24p2Scene6, &Stage24p2Scene7, &Stage24p2Scene8, &Stage24p2Scene9, &Stage24p2Scene10, &Stage24p2Scene11, &Stage24p2Scene12
};


// -------------------------------------------------------------------------------------------

// Variable for shuffling regular or mirrored levels.

STAGE Game_Stages[MAX_STAGES];

// Variables used for restoring regular stages when playing Dexter variants.
STAGE Current_Stage, Previous_Stage;

