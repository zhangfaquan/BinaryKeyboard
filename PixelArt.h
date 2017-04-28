/*
Pixel art by https://twitter.com/omrii_ https://github.com/OmriN7
*/

#include <avr/pgmspace.h> // PROGMEM stuff

// delay between each frame of animation
#define FRAME_DELAY_MS 50

// bitmap & text coordinate positioning
#define TEXT_Y_0 8
#define TEXT_Y_1 10
#define TEXT_Y_2 10
#define TEXT_Y_3 10
#define TEXT_Y_4 10

#define TEXT_X_1 27
#define TEXT_X_2 91

#define KEY_X_0 0
#define KEY_X_1 64
#define KEY_Y_0 0
#define KEY_Y_1 0

#define ART_WIDTH 64
#define ART_HEIGHT 32

/*
values generated with : http://javl.github.io/image2cpp/
*/

// '0' - IDLE frame
const unsigned char FRAME_0[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00,
0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

// '1'
const unsigned char FRAME_1[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x00,
0x00, 0x30, 0x3f, 0xff, 0xff, 0xfc, 0x0c, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
// '2'
const unsigned char FRAME_2[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00,
0x0f, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xf0, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xf0,
0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
// '3'
const unsigned char FRAME_3[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
// '4'
const unsigned char FRAME_4[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00,
0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00,
0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};