#include <iostream>
using namespace std;
class Base1{
    public:
        int var_base;
        void display(void){
            cout<<" Value of base1 is "<<var_base<<endl;
        }
};
class Base2:public Base1{
    public:
        int var_derived;
        void display(void){
              cout<<" Value of base1 is "<<var_base<<endl;
            cout<<"Value of base2 is "<<var_derived<<endl;
        }
};
int main(){
    Base1 *Base_1_object;
    Base2 *Base_2_DerivedObject;
    Base2 Base2_Object;
    Base_1_object=&Base2_Object;
    Base_1_object->var_base=4;
    Base_1_object->display();


    Base1 BasedObject;
    Base_2_DerivedObject=&Base2_Object;
    Base_2_DerivedObject->var_base=6;
    Base_2_DerivedObject->var_derived=8;
    Base_2_DerivedObject->display();
    return 0;
}