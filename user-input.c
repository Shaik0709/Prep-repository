#include <stdio.h>
#include<string.h>
int main()
{
    char name[25];
    int age;
    printf("\nWhat is you Name ? :");
    scanf("%s",name);
    fgets(name, 25, stdin);
    printf("\nHow old are you ? :");
    scanf("%d",&age);
    name[strlen(name)-1]='\0'; // To avoid printing output in new line

    printf("\nHello %s How are you...", name);
    printf("\nyour are  %d years old ...", age);
    return 0;
}