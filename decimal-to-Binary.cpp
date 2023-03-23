#include <iostream>
using namespace std;
class Decimal_Number
{

public:

    Decimal_Number(int n)
    {
        int i = 1, j = n, Binary_Number = 0;
        cout << "\n Decimal value  of N  is "<< n << endl;

        // n = 10;
        for (j = n; j > 0; j = j / 2)
        {
            Binary_Number = Binary_Number + (n % 2) * i;
            i = i * 10;
            n = n / 2;
        }
        cout << "\n  Binary no of N is " << Binary_Number << endl;
    }
};
int main()
{

    Decimal_Number obj = 100;
    return 0;
}
