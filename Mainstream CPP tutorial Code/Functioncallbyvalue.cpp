#include <iostream>
using namespace std;
int sum(int a,int b){
    int n= a+b;
    return n;
}
int main(){
    int num1,num2;
    cout<<"Enter first value"<<endl;
    cin>>num1;
    cout<<"Enter Second value"<<endl;
    cin>>num2;
    cout <<"Addup of given value is : " <<sum(num1,num2)<<endl;
    return 0;
}