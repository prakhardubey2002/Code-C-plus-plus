#include <iostream>
using namespace std;
class Base1
{
public:
    int var_base;
    virtual void display(void)//as virtual is added other diplay will run as this function is made virtual
    //primarily virtual is used overide natural behavior
    {
        cout << " Value of base1 is " << var_base << endl;
    }
};
class Base2 : public Base1
{
public:
    int var_derived;
    void display(void)
    {
        cout << " Value of base1 is " << var_base << endl;
        cout << "Value of base2 is " << var_derived << endl;
    }
};
int main()
{
    Base1 *base_class_pointer;
    Base1 obj_base;
    Base2 obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 2;
    base_class_pointer->display();//derived class display will invoke beacause of not being virtual
    return 0;
}