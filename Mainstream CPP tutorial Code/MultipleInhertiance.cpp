#include <iostream>
using namespace std;
class Base1{
    protected:
        int a;
    public:
        void seta(int x){
            a=x;
        };
};
class Base2{
    protected:
        int b;
    public:
        void setb(int x){
            b=x;
        };
};
class Combine :public Base1,public Base2{
    public:
        void Display(void){
            cout<<"Combine value of a and b is : "<<a+b<<endl;
        }
};
int main(){
    Combine Prakhar;
    Prakhar.seta(2);
    Prakhar.setb(2);
    Prakhar.Display();
    return 0;
}