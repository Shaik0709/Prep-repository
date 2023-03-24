#include<stdio.h>
int main ()
{
/*
    // Variable = All;ocated space in memory to store a value.
    We refer to a variable's name to access the stored value.
    That  variable now behaves as if it was the value it contains.
    But we need to Declare what type of data we are storing.
*/
    int x ; // Declaration
    x = 123;// Initialization
    int y = 321 ; // Declaration & Initilaization
    int age = 23 ; // Integar  %d 
    float gpa = 2.43; // Floating point Number %f 
    char grade = 'A'; // single Character %c 
    char name[] = " Shaik " ; // Array of character %s 
    printf("\n Hello %s",name);
    printf("\n Your are %d years old ...",age);
    printf("\n Your average grade is %c",grade );
    printf("\n Your gpa is %f\n",gpa);
    return 0;
}
