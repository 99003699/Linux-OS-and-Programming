#include "bit_setReset.h"
#include <stdio.h>

int set(int n, int k)
{
    return (n | (1 << (k - 1)));
}

// Function to clear the kth bit of n
int clear(int n, int k)
{
    return (n & (~(1 << (k - 1))));
}

// Function to toggle the kth bit of n
int flip(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}

int query(int n, int k)
{
    if ((n >> (k - 1)) & 1)
        return SET;
    else
        return NOTSET;
}
