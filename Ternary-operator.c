#include <stdio.h>
int findmax(int x, int y)
{
    // Ternary Operator - shortcut to if/else when assignment / returning a value
    // (condition) ? Value if true : value of false 
    return (x > y) ? x : y;
};
int main()
{
    int max = findmax(5, 4);
    printf("%d", max);
    return 0;
}