/*

Files included in ASSETS.DAT, loaded from CD.

*/

#define ASSETS_ADDRESS 0x80090000

// BitStream files (not TIM):

// Title screen animation.
#define TITLE00_BS 0x80090000
#define TITLE01_BS 0x80094218
#define TITLE02_BS 0x800985b4
#define TITLE03_BS 0x8009c938
#define TITLE04_BS 0x800a0cb0

// Language selection background.
#define BG01_BS 0x800a4f4c

// Continue / game over screen.
#define BG02_BS 0x800a8c9c

// Ending background.
#define BG03_BS 0x800ad858

// Sound effects:
#define SFX_VH 0x800b2a0c
#define SFX_VB 0x800b402c

// Font sets. TIM files:
// Japanese font.
#define FONT16J_TIM 0x800dbc2c // 16x16.
#define FONT8J_TIM 0x800e3c6c // 8x8.

// Western font.
#define FONT16W_TIM 0x800e5cac // 16x16.
#define FONT8W_TIM 0x800edcec // 8x8.

#define REUSABLE_ADDRESS 0x800b402c
#define END_OF_DATA 0x800efd2c

/*

Once the sounds and textures have been initialized, space from address SFX_VB 0x800b402c to END_OF_DATA 0x800efd2c can be cleared and reused.

*/