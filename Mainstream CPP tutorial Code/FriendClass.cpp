#include <iostream>
using namespace std;
class Complex;
//forward declaration
class Calculator{
    public:
        int add(int a,int b){
            return (a + b);
        }
        int sumRealComplex(Complex,Complex);
};