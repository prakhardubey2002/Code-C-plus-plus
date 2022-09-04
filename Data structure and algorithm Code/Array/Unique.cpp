#include <iostream>
using namespace std;
int Unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[]={1,2,1,2,5};
    int Uni=Unique(arr,sizeof(arr)/sizeof(int));
    cout <<"Unique element of array is :"<<   Uni<<endl;
    return 0;
}