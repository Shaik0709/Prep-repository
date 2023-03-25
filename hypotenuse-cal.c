#include <stdio.h>
#include <math.h>
int main()
{
    double A;
    double B;
    double C;
    printf("\n Enter side A :");
    scanf("%lf", &A);
    printf("\n Enter side B :");
    scanf("%lf", &B);
    C = sqrt(A * A + B * B);
    printf("\n  side C : %lf", C);
    return 0;
}