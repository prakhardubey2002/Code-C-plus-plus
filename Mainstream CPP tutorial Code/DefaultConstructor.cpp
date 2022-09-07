#include <iostream>
using namespace std;
/*
Characterstic:
1.It should be declared in public section of class
2.They automatically get invoked whenever object is created
3.They cannot return value and do not have return type
4. It can have default argument(deafault constructor)
5. We cannot refer to their address
*/
class Print
{
    int a;
    int b;

public:
    Print(void); // default constructor as it take no parameter
    void printdata(){
        cout <<" A : "<<a<<" B : "<<b<<endl;
    }
};
Print ::Print(void){
    a=2;
    b=8;
}
int main()
{
    Print o1;
    o1.printdata();

    return 0;
}