#include<stdio.h>
#include<stdbool.h>
int main ()
{
    float temp;
    // Logical Operator == && (And) check if two conditions are true
    printf("\n Enter the temp ( 0 to 50) : ");
    scanf("%f",&temp);
    bool sunny =true;
    if (temp >=0 && temp <=30 && sunny)
    {
        printf ("\n Weather is good !");
    }
    else 
    {
        printf("\n Weather is bad ! ");
    }
    return 0;
}