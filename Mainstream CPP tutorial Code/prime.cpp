#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
        if(n==i){
            cout <<"Prime"<<endl;
        }
        return 0;
    }
}