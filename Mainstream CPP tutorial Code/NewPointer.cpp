#include <iostream>
using namespace std;
int main(){
    // int a=60;
    // int* p=&a;
    // cout<<p<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    
    // New Operator
    // int*b= new int(a);
    // cout<<b<<endl;

    //Dynamic Allocation
    int *arr = new int[3];
    arr[0]=1;
    // arr[1]=2;
    *(arr+1)=2;
    arr[2]=4;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // Delete Operator
    // delete[] arr;//to remove dynamically allocated array 
    // delete arr;//to remove singular allocated block of memory
    return 0;
}