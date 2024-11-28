/*

These are the bitstream backgrounds and animations previously loaded from CD.

*/

/* $PSLibId: Run-time Library Release 4.3$ */
#include <sys/types.h>

#define BSLOOP 1
#define BSNOLOOP 0

#define TOTAL_BS_MOVIES 4

#ifdef BSPLAY_C


u_long	*BSBackground[] = {
(u_long *)BG01_BS, 0,
};

u_long	*BSEnding[] = {
(u_long *)BG03_BS, 0,
};

u_long	*BSGameOver[] = {
(u_long *)BG02_BS, 0,
};


u_long	*BSTitle[] = {
(u_long *)TITLE00_BS, (u_long *)TITLE01_BS, (u_long *)TITLE02_BS, (u_long *)TITLE03_BS, (u_long *)TITLE04_BS, (u_long *)TITLE03_BS, (u_long *)TITLE02_BS, (u_long *)TITLE01_BS, 0,
};


#else

extern u_long	*BSBackground[];
extern u_long	*BSEnding[];
extern u_long	*BSGameOver[];
extern u_long	*BSTitle[];

#endif
