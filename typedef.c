#include <stdio.h>
// Typedef - Reserved Keyword that gives an existing a "Nickname"
typedef struct
{
    char name[15];
    char password[15];
    int id;
} user;
int main()
{
    // Using Typedef struct so No need to use struct in main Function
    user u1 = {"Akber", "password390", 54231};
    user u2 = {"nijas", "password200", 69870};
    printf("%s\n%s\n%d\n", u1.name, u1.password, u1.id);
    printf("\n");
    printf("%s\n%s\n%d", u2.name, u2.password, u2.id);

    return 0;
}