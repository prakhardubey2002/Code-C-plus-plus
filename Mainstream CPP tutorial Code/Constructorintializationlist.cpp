#include <iostream>
using namespace std;
/*
Syntax for initilization list in constructor:
constructor (argument=list) : initilization-section
{
    assigment+ other code;
}
*/
class Test{
    int a;
    int b;
    public :
        // Test(int i,int j): a(i),b(j)
        // Test(int i,int j,int r): a(i),b(j+r)
        // Test(int i,int j,int t,int r): a(i+t),b(j+r)
        Test(int i,int j):a(i),b(a+2)//works beacause a is declared first if try to the same ith b there will garbage value in output
        {
            cout<<"value of a : "<<a<<" value of b is : "<<b<<endl;
        }
};
int main(){
     Test  t(8,8);
    //  Test  t(8,8,8);
    //  Test  t(8,8,8,8);
    //  Test  t(8,8);
     return 0;
}
// output
/*
1value of a : 8 value of b is : 8
2value of a : 8 value of b is : 16
3value of a : 16 value of b is : 16
4value of a : 8 value of b is : 10
*/