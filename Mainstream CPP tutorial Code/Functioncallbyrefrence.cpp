#include <iostream>
using namespace std;
// if this is done without pouinter (call by value instead of refrence) the copied value would only swap resultion no change in main function but here refrence is passed that's why values are swapped
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    cout<<"Enter first value"<<endl;
    cin>>a;
    cout<<"Enter Second value"<<endl;
    cin>>b;
    cout<<"value of a is "<< a <<" address is "<< &a <<" and value of b is "<<b<<" address is "<< &b <<endl;
    swap(&a,&b);
    cout<<"After Swap";
    cout<<"value of a is "<< a <<" address is "<< &a <<" and value of b is "<<b<<" address is "<< &b <<endl;
}
