#include <stdio.h>
enum Day
{
    sun = 1,
    mon = 2,
    tue = 3,
    wed = 4,
    thu = 5,
    fri = 6,
    sat = 7
};
int main()
{
    // enum - A user defined type of name integer identifiers
    //  helps to make a program more readable...

    enum Day Today = sat;

    // Enums are not strings , but they can be treated as integers
    // printf("%d",Today);

    if (Today == sun || Today == sat)
    {
        printf("\n It's a Weekend !");
    }
    else
    {
        printf("\n sorry , I have work to do :(");
    }

    return 0;
}