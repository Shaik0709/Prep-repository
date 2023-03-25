#include <stdio.h>
int main()
{
    char grade;
    printf("\n Enter the letter grade : ");
    scanf("%c", &grade);
    // switch - A more efficient alternative to using many "else if" statements
    // allows a  value to be tested for equality against many cases
    switch (grade)
    {
    case 'A':
        printf("\n Your grade is Perfect !");
        break;
    case 'B':
        printf("\n Your did good job!");
        break;
    case 'C':
        printf("\n Your did okay  !");
        break;
    case 'D':
        printf("\n Need improvement atleast it's not an F !");
        break;
    case 'F':
        printf("\n You Failed  !");
        break;
    default:
        printf("\n Enter only valid letter Grades ");
        break;
    }

    return 0;
}