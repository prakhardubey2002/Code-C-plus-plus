#include <iostream>
using namespace std;
int min(int arr[],int n){
    int min=INT64_MAX;
    for (int i=0;i<n;i++ ){
        if(arr[i]<min){
            min=arr[i];
        }


    }
    return min;
}
using namespace std;
int max(int arr[],int n){
    int max=INT64_MIN;
    for (int i=0;i<n;i++ ){
        if(arr[i]>max){
            max=arr[i];
        }


    }
    return max;
}
int main(){
    int size,num[100];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"min"<<min(num,size)<<endl;
    cout<<"max"<<max(num,size)<<endl;

}















//INT_MIN=(-2^31)
//INT_MAX=(2^31)