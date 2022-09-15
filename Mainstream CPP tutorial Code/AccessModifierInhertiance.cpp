#include <iostream>
using namespace std;
class Base
{
public:
    int c;

protected:
    int a;

private:
    int b;
};
/*
                        Public Derivation       Private Derivation      Protected Derivation
Private members         Not inherited             Not inherited            Not inherited
Protected members        Protected                Private                   Protected
Public members            Public                  Private                    Protected
*/


int main()
{
    return 0;
}