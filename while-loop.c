#include <stdio.h>
#include <string.h>
// while loop - repeats a section of code possibly unlimited times
// WHILE some conditions true
// a while loop might not execute at all
int main()
{
    char name[25];
    printf("\n What is your name ? :");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\n you did not entered your name ...");
        printf("\n What is your name ? :");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("\n Hello %s ", name);
    return 0;
}