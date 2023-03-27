#include <stdio.h>
int main()
{
    // Array - a data structure that can store many values of the same data type.
    double Prices[] = {12.3, 14.5, 17.9, 20.3, 24.5};
    for (int  i = 0; i < 5; i++)
    {
        printf("$%.2lf\n",Prices[i]);
    }
    
    //printf("$%.2lf", Prices[4]);
    return 0;
}