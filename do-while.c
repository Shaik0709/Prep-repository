#include<stdio.h>
int main ()
{
    // while loop - checks a condition, Then executes a block of code if coniditon is true
    // Do while loop - always execute a block of code once, then checks a condition
int number =0;
int sum =0;
do
{
  printf("\n Enter a above 0 : ");
  scanf("%d",&number);
  if(number > 0)
  {
    sum +=number;
  }

} 
while (number > 0);
printf("sum : %d \n",sum );
    return 0;
}