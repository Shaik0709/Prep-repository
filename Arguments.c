#include <stdio.h>
// Fuction With Arguments ... 
void birthday(char name[], int age) // Parameters ...
{
    printf("\n Happy Birthday to You %s ", name);
    printf("\n You are %d years Old ... ", age);
};
int main()
{
    char name[] = "Akber Ali";
    int age = 5;
    birthday(name, age); // Arguments ...

    return 0;
}