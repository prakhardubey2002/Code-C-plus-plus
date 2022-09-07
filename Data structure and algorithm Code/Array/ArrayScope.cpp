#include <iostream>
using namespace std;
void update(int arr[],int n){
    cout <<"Start function"<<endl;

    arr[0]=20;//will update main array because arr is address so this function is working through call by refrence instaed of call by value
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout <<"End function"<<endl;
}
int main(){
    int arr[3]={1,2,3};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    update(arr,3);//arr is pointer to the firstlocation  of its own
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
}