// #include<iostream>
// using namespace std;
// class Exm
// {
//     int x = 1 , y = 2;
//     public :
//     void print ()
//     {
//         cout <<"    x = "<< x << " y = " << y << endl;
//     }
//     // Increment Operator
//     void operator ++()
//     {
//         x+=100;
//         y++;
//     }
// };
// int  main ()
// {
//     Exm obj ;
//     cout << "Values initially were \n";
//     obj.print();
//     ++obj;
//     cout << "After Increment values are  \n";
//     obj.print();
//     return 0;
// }
// #include <iostream>
// using namespace std;
// // complex
// class Complex
// {
//     int real, imag;

// public:
//     void print()
//     {
//         if (imag < 0)
//             cout << real << " " << imag << "j" << endl;
//         else
//             cout << real << " + " << imag << "j" << endl;
//     }
//     void getData()
//     {
//         cout << " Enter two values for real and imag : " << endl;
//         cin >> real >> imag;
//     }
//     void operator++()
//     {
//         real = ++real;
//         imag = ++imag;
//     }
// };
// int main()
// {
//     Complex obj;
//     obj.getData();
//     cout << "Before :" << endl;
//     obj.print();
//     ++obj;
//     cout << "After  :" << endl;
//     obj.print();
//     return 0;
// }
#include<iostream>
#include<string.h>
// using two string concatenate with one object 
using namespace std;
class Addstring 
{
    public :
   char  string[20] , string2[30];
   void operator +()
   {
    cout << " After concatenate :" << strcat(string,string2) <<endl;
   }
};
int main ()
{
    Addstring obj ;
    cout << " Before concatenate " << endl;
    strcpy(obj.string," shaik ");
    strcpy(obj.string2," Faridhudeen ");
    +obj;
    return  0;
}
