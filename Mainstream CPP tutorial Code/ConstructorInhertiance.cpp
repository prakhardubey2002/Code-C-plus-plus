#include <iostream>
using namespace std;
/*
we can use constructor in derived class in c++
if base class constructor does not have any arguments,ther is no need of any constructor in derived class.
BUt if ther are one or more argument in the base class constructor,derived class need to pass argument to the base class constructor 
if both base and derived class have constructor ,base class constructor is executed first.
The cosntstuctor of virtual base class is given preference over non virtusl class
if multiple virtual class are declared then they will execute in  order of declarstion
*/
class Base1{
    int data1;
    public :
        Base1(int i){
            data1=i;
            cout<<"The Base1 constructor called "<<endl;
        }
        void printData1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public :
        Base2(int i){
            data2=i;
            cout<<"The Base1 constructor called "<<endl;
        }
        void printData2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derived:public Base1,public Base2 {
    int derived1,derived2;
    public:
    Derived(int a,int b,int c ,int d):Base1(a),Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derive class condstrutor called"<<endl;
    }
    void printdata(void){
      cout<<"The value of derived1 is "<<derived1<<endl;
      cout<<"The value of derived2 is "<<derived2<<endl;
    }
};
int main(){
    Derived Prakhar(1,2,3,4);
    Prakhar.printData1();
    Prakhar.printData2();
    return 0;
}