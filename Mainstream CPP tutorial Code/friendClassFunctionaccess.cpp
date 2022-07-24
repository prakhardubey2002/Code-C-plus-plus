#include <iostream>
using namespace std;
class Complex;//forward declaration so that frienbd function doesn't end with undeclared class
class Calculater{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(Complex,Complex);//o1 and o2 are not passed because they'll create problem in compilation
};
class Complex{
    int a,b;
    friend int Calculater::sumRealComplex(Complex,Complex);
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"Your Number is : "<<a<<"+"<<b<<"i"<<endl;
        }
};
int Calculater :: sumRealComplex(Complex o1,Complex o2){
    return (o1.a+o2.a);
}
int main(){
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculater calc;
    int res=calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 : "<<res<<endl;
    return 0;
}