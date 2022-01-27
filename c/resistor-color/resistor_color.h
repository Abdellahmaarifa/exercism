#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H
#include <stdio.h>
#include <stdlib.h>
typedef enum {
    BLACK,BROWN,RED,ORANGE,YELLOW,GREEN,BLUE,VIOLET,GREY,WHITE
} resistor_band_t;
int color_code(int color);
int *colors();

#endif
