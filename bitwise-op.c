#include <stdio.h>
int main()
{
    // & - AND
    // | - OR
    // ^ - XOR
    // << - SHIFT LEFT
    // >> - SHIFT RIGHT
    int x, y, z;
    x = 6;  // 000000110
    y = 12; // 000001100
    z = 0;
    z = x & y;
    printf("\n AND         : %d", z);

    z = x | y;
    printf("\n OR          : %d", z);

    z = x ^ y;
    printf("\n XOR         : %d", z);

    z = x << 1;
    printf("\n SHIFT LEFT  : %d", z);

    z = x >> 1;
    printf("\n SHIFT RIGHT : %d", z);

    return 0;
}