#include<stdio.h>
#include<stdbool.h>

int main ()
{
    //Logical Operator =!  (Not) reverses the statement of a condition
    bool sunny = true;
    if (!sunny )
    {
        printf("\n It's sunny outside ...");
    }
    else
    {
        printf("\n It's cloudy outside ...");
    }

    return 0;
}