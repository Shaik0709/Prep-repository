#include<iostream>
using namespace std;
class cpy
{
    private:
    int x,y;
    public :
    cpy(int a , int b)
    {
        a = x;
        b = y;
        cout <<" Parameterized constructor called "   << endl;
    }
};
int main ()
{
    cpy c1(10,20);
    cpy c2(c1);
    return 0;
}
