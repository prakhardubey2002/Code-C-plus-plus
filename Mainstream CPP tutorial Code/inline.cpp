#include <iostream>
//inline function directly place function ,it save time when function is being called multiple times
//static is not used with inline as it retain values
using namespace std;
inline int product(int a,int b){
    return a*b;
}
int main(){
    int a=2,b=8;
    cout<<"The product is : "<<product(a,b)<<endl;
    return 0;
}