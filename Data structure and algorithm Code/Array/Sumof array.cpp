#include <iostream>
using namespace std;
void Sum(int arr[],int n){
     int y=0;
    for(int i=0;i<n;i++){
        y+=arr[i];
    }
    cout<< "Sum of your given array is : "<< y<<endl;
}
int main(){
    int size,arr[100];
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the "<< i <<" element of the array"<<endl;
        cin>>arr[i];
    }
    Sum(arr,size);
    return 0;
}