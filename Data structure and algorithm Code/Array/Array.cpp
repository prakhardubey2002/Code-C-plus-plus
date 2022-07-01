#include <iostream>
using namespace std;
int main(){
    int a[3]={1,2,3};
    cout<<"Value at index 1 is "<<a[0]<<endl;
    cout<<"Value at index 2 is "<<a[1]<<endl;
    cout<<"Value at index 3 is "<<a[2]<<endl;
    //traversal by for loop
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}