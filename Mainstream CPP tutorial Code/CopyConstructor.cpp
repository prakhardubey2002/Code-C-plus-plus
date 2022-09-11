#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    void display();
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // copy constructor
    Number(Number &obj)
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }
};
void Number::display()
{
    cout << "The number for this is : " << a << endl;
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    // copy constructor copy other object
    // when there is no copy constructor compiler supplies its own copy constructor
    Number z1(z); // copy constructor called
    z1.display();

    Number z3 = z; // copy constructor called
    return 0;
}