#include <iostream>
using namespace std;
class First{
    public:
        void greet(void){
            cout<<"Greet First"<<endl;
        }
};
class Second{
    public:
     void greet(void){
        cout<<"Second Greet"<<endl;
     };
};
class Hybrid:public First,public Second{
    public:
        void greet(void){
            Second::greet();
        }
};
int main(){
    Hybrid H;
    H.greet();
    return 0;
}
//If class is inhertied with a function same as the child class ,child class function is called  