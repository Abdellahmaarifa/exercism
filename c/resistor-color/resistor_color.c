#include "resistor_color.h"


resistor_band_t color_code(resistor_band_t color)
{
    resistor_band_t resistor_band;
    resistor_band = color;
    return resistor_band;
}
resistor_band_t *colors()
{
    resistor_band_t resistor_band;
    resistor_band = BLACK; 
    resistor_band_t *colors_value;
    colors_value = (resistor_band_t *)malloc(sizeof(resistor_band_t) * 10);
    int i = 0;
    while (resistor_band <= WHITE)
        colors_value[i++] = resistor_band++;
    return colors_value;
}