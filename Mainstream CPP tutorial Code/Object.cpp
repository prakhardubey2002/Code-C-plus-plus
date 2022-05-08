#include <iostream>
using namespace std;
class Employee{
    int id;
    public:
        void setId(void)
        {
            cout<<"Enter the Id of Employee"<<endl;
            cin>>id;
        }
        void getId(void)
        {
            cout<<"The Id of this employee is "<<id<<endl;
        }
};
int main(){
    Employee fb[4];
    for(int i =0;i<4;i++)
    {
        fb[i].setId();
    }
    for(int i =0;i<4;i++)
    {
        fb[i].getId();
    }
    return 0;
}
