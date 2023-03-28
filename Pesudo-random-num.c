#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Pesudo Random Numbers - A set of values or elements that are
//  satistically random
// (Don't use these for any sort of cryptographic security)
int main()
{
    srand(time(0));               // s - seed , Rand - current time
    int num1 = (rand() % 20) + 1; // % to limit the max num
    int num2 = (rand() % 20) + 1;
    int num3 = (rand() % 20) + 1;
    printf("\n%d", num1);
    printf("\n%d", num2);
    printf("\n%d", num3);

    // rand() gives the between 0 to -32,767

    return 0;
}