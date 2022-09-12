#include <iostream>
using namespace std;
//Destructor never take an argument nor does it take any value
int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "Constructor called for Num " << count << endl;
    }
    ~Num()
    {
        cout << "Destructor called for Num " << count << endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1 "<<endl;
    Num n1;
    {
        cout<<"Entering this block";
        cout<<"Creating two more objects"<<endl;
        Num n2,n3;
        cout<<"Exiting this block "<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}
//output
// We are inside our main function 
// Creating first object n1 
// Constructor called for Num 1
// Entering this blockCreating two more objects
// Constructor called for Num 2
// Constructor called for Num 3
// Exiting this block 
// Destructor called for Num 3
// Destructor called for Num 2
// Back to main
// Destructor called for Num 1