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
    cout <<"The roll number is : "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};

void Exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam :: get_marks(){
     cout <<"Maths Marks : "<<maths<<endl;
     cout <<"Physics Marks : "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            get_marks();
            cout<<"Your percentage : "<<(physics+maths)/2<<endl;
        }
};

int main()
{
    Result Prakhar;
    Prakhar.set_roll_number(42);
    Prakhar.set_marks(98.0,94.0);
    Prakhar.display();
    return 0;
}