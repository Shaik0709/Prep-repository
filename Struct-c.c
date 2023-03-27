#include <stdio.h>
#include <string.h>
struct player
{
    char name[12];
    int score;
};
// STRUCT - collcection of releated members ("variables")
// They can be of different data types
// listed under one name in a block of memory
// very similar classes in other languages ( But no methods)
int main()
{

    struct player p1;
    struct player p2;
    strcpy(p1.name, "Akber"); // . operator is member accessed Operator
    p1.score = 5;
    strcpy(p2.name, "Nijas");
    p2.score = 7;
    printf("\nName : %s \nScore : %d\n", p1.name, p1.score);
    printf("\nName : %s \nScore : %d", p2.name, p2.score);

    return 0;
}