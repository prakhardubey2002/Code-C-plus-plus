#include <iostream>
using namespace std;
class Complex{
    int a;
    int b;
    

    friend Complex sumComplex(Complex o1,Complex o2) ;
    public:
        void setData(int n1,int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"Your complex  number is "<<a<<"+"<<b<< "i"<<endl;
        }
};
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setData((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1 ,c2,sum;
    c1.setData(1,2);
    c1.printNumber();
    c2.setData(1,8);
    c2.printNumber();
    sum = sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}