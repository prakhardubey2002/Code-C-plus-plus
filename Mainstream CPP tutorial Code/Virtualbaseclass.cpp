#include <iostream>
using namespace std;
/*
student-->test
student-->sports
test-->result
sport-->result
*/
// virtual base class solve problem of ambigiuity when two class have same parent ,does'nt pass down same data into child class 
class student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no=a;
        }
        void print_number(void){
            cout<<"Your Roll numner is : "<<roll_no<<endl;
        }
};
class Test: virtual public student{
    protected:
        float maths,physics;
        public:
            void set_marks(float m1,float m2){
                maths=m1;
                physics=m2;
            }
            void print_marks(void){
                cout<<"Your result is here : "<<endl
                <<"Maths : "<<maths<<endl
                <<"Physics : "<<physics<<endl;
            }
};
class Sports:virtual public student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score=sc;
        }
        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};
class Result:public Test,public Sports{
    private:
        float total;
    public:
        void display(void){
             total=maths+physics+score;
             print_number();
             print_marks();
             print_score();
        }
};
int main(){
    Result Prakhar;
    Prakhar.set_number(8200);
    Prakhar.set_marks(86.88,88.86);
    Prakhar.set_score(9);
    Prakhar.display();
    return 0;
}