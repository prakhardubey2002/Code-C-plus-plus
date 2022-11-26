#include <iostream>
using namespace  std;

int main(){
    int r;
    cout<<"Enter row"<<endl;
    cin>>r;
    for(int i =0;i<=r;++i){
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
// Enter row
// 4

// *
// **
// ***
// ****