#include <iostream>
using namespace std;
int main(){
    // array here is dynamically intialised
    int a[10];
    int n;
    cout<<"Enter value of array "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // a[i]=i;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}