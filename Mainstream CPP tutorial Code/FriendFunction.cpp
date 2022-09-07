#include <iostream>
using namespace std;
class Complex{
    int a;
    int b;
    friend Complex sumComplex(Complex o1,Complex o2);
    public:
        void setdata(int n1,int n2){
            a=n1;
            b=n2;
        }
        void showdata( ){
            cout<<"Your complex Number"<<a<<"+"<<b<<"i"<<endl;
        }

};
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o1.b));
    return o3;
};
int main(){
    Complex a,b,sum;
    a.setdata(1,2);
    a.showdata();
    b.setdata(1,8);
    b.showdata();
    sum=sumComplex(a,b);
    sum.showdata();
}