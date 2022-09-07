#include <iostream>
using namespace std;

class Print
{
    int a;
    int b;

public:
    Print(int, int); // Parametrized constructor as it take  parameter
    void printdata()
    {
        cout << " A : " << a << " B : " << b << endl;
    }
};
Print ::Print(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Print a(4, 4);
    // Explict call
    Print b = Print(2, 2);
    a.printdata();
    b.printdata();

    return 0;
}