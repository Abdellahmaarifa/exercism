#include "isogram.h"
#include <stdio.h>


static int to_lower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32);
    return (c);
}
bool is_isogram(const char phrase[])
{
    int i;
    int j;

    if (!phrase)
        return (0);
    i = -1;
    while (phrase[++i])
    {
        if (phrase[i] == 32 || phrase[i] == 45)
            continue;
        j = i;
        while (phrase[j++])
            if(to_lower(phrase[j]) == to_lower(phrase[i]))
                return (0);
    }
    return (1);
}