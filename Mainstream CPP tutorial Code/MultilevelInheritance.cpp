#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student :: set_roll_number(int r){
    roll_number=r;
}
void Student::get_roll_number(){
    cout <<"The roll number"<<roll_number<<endl;
}
int main()
{

    return 0;
}