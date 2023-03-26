#include<stdio.h>
// Function Prototype
/*
    what is it ?
    Function Declaration , without a body , before main ()
    ensures that calls to a function are made with correct arguments
*/
// void Hello(char name[] , int age );
int main ()
{
    char name[]="Akber Ali";
    int age = 5;

 Hello (name,age);
    return 0;
}
/*
    Many c compilers do not check for parameter matching
    Missing arguments will result in unexpected behavior
    A function prototype causes the compiler to flag an error if arguments are missing
*/
void Hello(char name[] , int age)
{
    printf("\n Hello  %s  , Happy birthday to you ",name);
    printf("\n Your are %d years old now ... ",age);
    
} 
 /*
     Easy to Navigate a process  with main () at the top
     Helps with Debugging
     Commonly used in their heading files 
 */