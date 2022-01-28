#include "grains.h"


uint64_t square(uint8_t index)
{
    if (index == 0)
        return 0;
    uint64_t i = 1;
    uint64_t n = 1;
    while (i++ < index && index != 1)
        n *= 2;
    return n;
}
uint64_t total(void)
{
    uint64_t i = 1;
    uint64_t n = 0;
    while (i <= 64)
        n += square(i++);
    return n;
}