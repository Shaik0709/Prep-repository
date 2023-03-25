#include <stdio.h>
#include <ctype.h>
int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    printf("\n Enter the Operator (+ - * /  ) :");
    scanf("%c", &operator);
    printf("\n Enter the Number 1 :");
    scanf("%lf", &num1);
    printf("\n Enter the Number 2 :");
    scanf("%lf", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n Result of + is : %lf ", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\n Result of - is : %lf ", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\n Result of * is : %lf ", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\n Result of / is : %lf ", result);
        break;
    default:
        printf("\n%lf is not valid Operator (+ - * / )", operator);
    }

    return 0;
}