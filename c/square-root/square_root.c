#include "square_root.h"
 

 int square_root(int x)
 {
     int i;

    i = 1;
    if (x == 4)
        return (2);
    if (x == 1)
        return (1);
    while (i <= x && (i * i) < x && (i = i + x / 8));
    while (i > 1 && (i * i != x) && i--);
    return i;
 }