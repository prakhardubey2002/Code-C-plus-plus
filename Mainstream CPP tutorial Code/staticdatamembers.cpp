#include <iostream>
using namespace std;
class Employee{
        int Id;
        static int count;
    public:
        void setData(void){
            cout<<"Enter the ID"<<endl;
            cin>>Id;
            count++;
        };
        void DisplayData(void){
            cout<<"The if of th employee is : "<<Id << "  And employee count is : "<< count <<endl;
        };
};
int Employee :: count;//by default set to zero
int main(){
    Employee a,b,c;

    a.setData();
    a.DisplayData();

    b.setData();
    b.DisplayData();
    
    c.setData();
    c.DisplayData();
    return 0;
}