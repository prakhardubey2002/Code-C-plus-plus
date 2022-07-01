#include <iostream>

using namespace std;
void printArray(int arr[],int size){
    cout<<"\nPrinting array"<<endl;
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray printed"<<endl;

}
int main(){
    int a[3]={1,2,3};
    cout<<"Value at index 1 is "<<a[0]<<endl;//accessing index
    cout<<"Value at index 2 is "<<a[1]<<endl;//accessing index
    cout<<"Value at index 3 is "<<a[2]<<endl;//accessing index
    //traversal by for loop
    for(int i=0;i<3;i++){
        cout<<a[i]<<endl;
    }
    int n=15;
    int v[n]={2,7};
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    //Printing array
    //2 7 0 0 0 0 0 0 0 0 0 0 0 0 0 


    //intialising all location with zero
    int d=15;
    int h[d]={0};
    printArray(h,sizeof(h)/sizeof(h[0]));
    return 0;
}