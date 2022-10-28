#include <iostream>
using namespace std;
template <class T1=int,class T2=float>
class Myclass{
    public:
        T1 a;
        T2 b;
        Myclass(T1 a,T2 b){
            this->a=a;
            this->b=b;
        }
        void Display(void){
            cout<<this->a<<endl<<this->b;
        }
};
int main(){
    Myclass<int,float> obj(4,4.4);
    obj.Display();
    return 0;
}