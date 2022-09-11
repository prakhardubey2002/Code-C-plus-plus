#include <iostream>
using namespace std;
class Complex
{
    int a, b,c;

public:
    // Overloading with multiple constructor
    Complex(int x, int y) // will invoke when both value are given
    {
        a = x;
        b = y;
    }
    Complex(int x)
    { // will invoke when only one value is given
        a = x;
        b = 0;
    }
    Complex(int x, int y, int z)
    {
        a=x;
        b=y;
        c=z;
        cout << "Your number is " << a << "+" << b << "i" <<"and z :"<< c<< endl;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();
    Complex c2(4);
    c2.printNumber();
    Complex c3(1,2,3);
    return 0;
}

//output
// Your number is 4+6i
// Your number is 4+0i
// Your number is 1+2iand z :3