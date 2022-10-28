#include <iostream>
using namespace std;
void func(int a){
    cout<<"Non Template a : "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<" Template a : "<<a<<endl;
}
int main(){
    int a=8;
    func(a);//exact match will get priority
    return 0;
}
//Non Template a : 8