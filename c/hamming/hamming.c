#include "hamming.h"
#include <stdio.h>

int compute(const char *lhs, const char *rhs)
{
    int count;

    count = 0;
    while(*lhs && *rhs && (*lhs++ == *rhs++ || ++count));
    if(*lhs || *rhs)
        return -1;
    return count;
}
