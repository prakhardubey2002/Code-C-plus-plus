#include <iostream>
using namespace std;
int main(){
    int marks[]={1,2,3,4,5,6,7,8};
    int*p=marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    cout<<*(p+5)<<endl;
    cout<<*(p+6)<<endl;
    cout<<*(p+7)<<endl;
    return 0;
}