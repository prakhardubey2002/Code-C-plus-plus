#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a,int b=8,int c=8){
        data1=a;
        data2=b;
        data3=c;
    }
    void printdata(){
        cout<<"The value of a : "<<data1<<" b : "<<data2<<" c : "<<data3<<endl;
    }
};
int main()
{
    Simple a1(2,2);
    a1.printdata();
    Simple a2(4);
    a2.printdata();
    return 0;
}