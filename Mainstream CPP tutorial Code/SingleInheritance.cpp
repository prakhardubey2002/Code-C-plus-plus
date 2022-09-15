#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base:: setData(void){
    data1=10;
    data2=20;
};
int Base::getData1(){
    return data1;
};
int Base::getData2(){
    return data2;
};
class Derived : public Base//class is being derived publically
{
    int data3;
    public:
    void process();
    void display();
};
void Derived :: process(void){
    data3=data2*getData1();
};
void Derived :: display(void){
    cout<<"Data 1 value: "<<getData1()<<endl;
    cout<<"Data 2 value: "<<data2<<endl;
    cout<<"Data 3 value: "<<data3<<endl;
};

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}