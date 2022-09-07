#include <iostream>
using namespace std;
int product(int a,int b){
    static int c = 0 ;//static will retain value from last calculation
    c=c+1;
    return  a*b+c;
}
int main(){
    cout<<product(2,4)<<endl;//9
    cout<<product(2,4)<<endl;//10
    cout<<product(2,4)<<endl;//11
    cout<<product(2,4)<<endl;//12
    return 0;
}