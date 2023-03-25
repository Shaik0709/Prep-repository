#include<stdio.h>
#include<ctype.h>
//° F = ( °C × 9 5 ) + 32.  fARENHEIT TO CELCIUS
// °C = [(°F-32)×5]/9   CELCIUS TO FARENHEIT
int main ()
{
    char unit ;
    float temp;
  
    printf("\n ENter the temp in C or F ? : ");
    scanf("%c",&unit );
    unit = toupper(unit);
    if(unit == 'C')
    {
        printf("\n Enter the temp in C :");
        scanf("%f",&temp);
        temp = ( temp * 9 / 5 ) + 32;
        printf("\n Temprature in C to Farenheit %.1f F",temp);
    }
    if (unit == 'F')
    {
        printf("\n Enter the temp in F :");
         scanf("%f",&temp);
        temp = ((temp-32)*5)/9;
        printf("\n Temprature in Farenheit  to C %.1f C",temp);  
    }
    else 
    {
        printf("\n Enter only valid Temprature C or F ");
    }
    return 0;
}