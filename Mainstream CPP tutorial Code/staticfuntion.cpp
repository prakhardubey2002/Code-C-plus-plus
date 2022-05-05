#include <iostream>
using namespace std;
class Employee{
    int Id;
    static int count;
    public:
        void setData(void){
            cout<<"Enter the Id "<<endl;
            cin>>Id;
            count++;
        }
        static void getCount(void){//static function can only use static variables
            cout<<"The value of count : "<<count<<endl;
        }
};
int Employee::count;
int main(){
    Employee a,b,c;
    a.setData();
    Employee::getCount();
    b.setData();
    Employee::getCount();
    c.setData();
    Employee::getCount();
    return 0;
}