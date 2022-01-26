#include "armstrong_numbers.h"

// assuming that the base and the power is grater than 0
static int power(int base, int power)
{
    int res;    
    if (power == 0)
        return (1);
    res = base;
    while (power-- > 1)
        res *= base;
    return res;
}

// calculate the lenght of positive numbers
static int numlen(int num)
{
    int len;
    len = 1;
    while ((num = num / 10) > 0)
        len++;
    return len;
}

// get the absollute value of a number
static int absolute(int num)
{
    if (num < 0)
        return (-num);
    return (num);
}
bool is_armstrong_number(int candidate)
{
    int numlength;
    int sum;
    int n;

    candidate = absolute(candidate);
    numlength = numlen(candidate);
    sum = 0;
    n = candidate;
    // calculate each digit to the power of the number length
    while (n > 0)
    {
        sum += power(n % 10, numlength);
        n = n / 10;
    }
    // check if the number is armstrong
    if (sum == candidate)
        return (1);
    return (0);
}
