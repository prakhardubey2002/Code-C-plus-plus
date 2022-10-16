#include <iostream>
using namespace std;
int main(){
    int a=60;
    int* p=&a;
    cout<<p<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<*p<<endl;

    int*b= new int(a);
    cout<<b<<endl;
}