#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){//i+=2 is used beacause we want to swap alternate elements and execute to next step by excluding first 2
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};
     printArray(even,8);
    swapAlternate(even,8);
    printArray(even,8);
    printArray(odd,5);
    swapAlternate(odd,5);
    printArray(odd,5);
    return 0;
}