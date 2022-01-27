#include "resistor_color.h"


int color_code(int color)
{
    resistor_band_t resistor_band;
    resistor_band = color;
    return resistor_band;
}
int *colors()
{
    resistor_band_t resistor_band;
    resistor_band = BLACK; 
    int *colors_value;
    colors_value = (int *)malloc(sizeof(int) * 10);
    int i = 0;
    while (resistor_band <= WHITE)
        colors_value[i++] = resistor_band++;
    return colors_value;
}