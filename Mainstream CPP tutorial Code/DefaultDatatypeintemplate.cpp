#include <iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=char>//Default datatype set up already
class Myclass{
    public:
        T1 a;
        T2 b;
        T3 c;
        Myclass(T1 a,T2 b,T3 c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        void Display(void){
            cout<<a<<endl<<b<<endl<<c<<endl;
        }
};
int main(){
   Myclass<> obj(2,2.2,'a');
   obj.Display();
   Myclass<char,char,char> obj2('c','c','c');//overiding default parameter
   obj2.Display();
   return 0;
}