#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }cout <<endl;
}
void swapAlternate(int arr[],int size){
    int temp;//for applying swap without using swap function
    for(int i =0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
            // temp=arr[i];
            // arr[i]=arr[i+1];
            // arr[i+1]=temp;
        }
    }
}
int main(){
    int even[]={1,2,3,4};
    int odd[]={1,2,3,4,5};
    swapAlternate(even,sizeof(even)/sizeof(int));
    print(even,sizeof(even)/sizeof(int));
    return 0;
}