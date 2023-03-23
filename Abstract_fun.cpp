// #include<iostream>
// // Abstract class function
// using namespace std;
// class Shape
// {
//     public :
//     // virtual class = do nothing
//     virtual void draw() = 0; // Abstract class void display()=0

// };
// class Rectangle : public Shape
// {
//     public:
//     void draw()
//     {
//         cout << " Drawing Rectangle ..." << endl;
//     }

// };
// class Circle : public Shape
// {
//     public :
//     void draw()
//     {
//         cout << " Drawing Circle ..." << endl;
//     }

// };
// int main ()
// {
//     Rectangle rec;
//     Circle cir;
//     rec.draw();
//     cir.draw();
//     return 0;
// }
#include <iostream>
using namespace std;
// Abstract class is exist but does not ahve any imple. at all
class Pokemon
{
    int height, weight;
    char type[20];
};
class Pikachu : public Pokemon
{
public:
    void attack()
    {
        cout << " Thunderbolt ..." << endl;
    }
};

int main()
{
    //Pokemon po;
    Pikachu pik;
    pik.attack();
    return 0;
}