#include <iostream>
using namespace std;
class Complex;
// forward declaration
class Calculator
{public:
    Complex sumRealComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    //indivisual class fuction friend declaration
    friend Complex Calculator::sumRealComplex(Complex, Complex);
    //class friend 
    //friend Calculater;
public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};
Complex Calculator::sumRealComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o1.b));
    return o3;
};
int main()
{
    Complex o1, o2, res;
    o1.setNumber(1, 4);
    o2.setNumber(1, 4);
    Calculator calc;
    res = calc.sumRealComplex(o1, o2);
    res.printNumber();
    return 0;
}