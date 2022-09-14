#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
        Employee(int inpid){
            id=inpid;
            salary=44.0;
        }
        Employee(){}//derived class will try to call default constructor that's why it is added here

};

//class {derived-class} : {visibility-mode} {base-class}
//default visibilty mode is private
//Public mode make public member of base class public member of derived class
//Private mode make public member of base class Private member of derived class
//Private members can not be inherited

class Programmer: Employee{
    public:
    Programmer(int inpId){
        id=inpId;
    }
    void getData(){
        cout<<id<<endl;
    }
    int languageCode=9;
};

int main(){
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer skillF(1); 
    cout<<skillF.languageCode<<endl;//we can't print id because when it is inherited here it become private class of programmer class but if mode is changed to public then it can be printed
    skillF.getData();
    return 0;
}