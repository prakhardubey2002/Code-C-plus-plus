#include <iostream>
using namespace std;
class This{
    int a;
    public:
        // This setData(int a){
        void setData(int a){
            this->a=a;//in c++ priority is given to local variable
            // return *this;
        }//this can also be used to return object from  member function
        void getData(void){
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main(){
    //This is a keyword which is a pointer which point to the object which invokes the memberfunction
    This P;
    P.setData(4);
    P.getData();
    // P.setData(4).getData();
    return 0;
}