#include<stdio.h>
#include<string.h>
 struct student
{
    char name[15];
    float gpa;
} ;

int main ()
{
    struct student s1 = {"Akber Ali" , 4.6};
    struct student s2 = {"Nijas" , 5.6};
    struct student s3 = {"Zainab" , 8.7};
    struct student s4 = {"Mafaz" , 7.7};
    struct student s5 = {"Pingu" , 6.3};
    struct student students[]={s1,s2,s3,s4,s5};
for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
{
    printf("%-15s\t%.2f\n",students[i].name,students[i].gpa);
}

    return 0 ;
}