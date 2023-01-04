#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int arr[]={1,2222,3,4,95,6};
    sort(arr,arr+6);//sort in ascending order
    sort(arr,arr+5,greater<int>());//sort in desending order,here greater<int> () is functor or function object
    for (int i =0 ; i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}