#include <iostream>
using namespace std;
void swap(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print(int arr[],int n ){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
int main(){
    int size,arr[10];
      cout << "Enter size of the array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element "<< i <<" of the array " <<endl;
       cin>>arr[i];
    } 
    print(arr,size);
    swap(arr,size);
    print(arr,size);
    return 0;
}