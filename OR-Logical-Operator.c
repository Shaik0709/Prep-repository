#include<stdio.h>
#include<stdbool.h>
int main ()
{
    //Logical OR - || (OR) checks if at least one condition is true
    float temp;
    printf("\n Enter the temp  : ");
    scanf("%f",&temp);
    if(temp <= 0 || temp <=42)
    {
        printf("\n Weather is good !");
    }
    else
    {
        printf("\n Wather is Bad !");
    }

    return 0;

}