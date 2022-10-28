#include <iostream>
using namespace std;
template <class T>
void Func(T *a,T *b){
    T temp= *a;
    *a=*b;
    *b=temp;
    cout<<*(a)<<endl;
    cout<<(a)<<endl;
    cout<<*(b)<<endl;
    cout<<(b)<<endl;
};

int main(){
    int a=4,b=8;
    Func(&a,&b);
    return 0;
}