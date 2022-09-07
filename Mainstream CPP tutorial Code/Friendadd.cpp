#include <iostream>
using namespace std;
class Y;
class X{
    int data;
    public:
        void setdata(int value){
            data=value;
        }
    friend void add(X,Y);
};
class Y{
    int val;
    public:
        void setdata(int value){
            val=value;
        }
    friend void add(X,Y);
};
void add(X o1,Y o2){
    cout <<"The value is "<<o1.data+o2.val<<endl;
}
int main(){
    X o1;
    Y o2;
    o1.setdata(4);
    o2.setdata(4);
    add(o1,o2);
    return 0;
}