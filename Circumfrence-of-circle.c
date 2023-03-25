#include<stdio.h>
int main ()
{
    double radius;
    double circumfrence;
    double area ;
    const double PI = 3.14159;
    printf("\n enter the radius of circle : ");
    scanf("%lf",&radius);
    circumfrence = 2 * PI * radius ; // c = 2*pi*r
    area = PI *radius *radius ; // area = pi*r*r
    printf("\n circumfrence : %lf",circumfrence);
    printf("\n Area         : %lf",area);


  return 0;
}