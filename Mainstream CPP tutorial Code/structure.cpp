#include <iostream>
using namespace std;//structi=ure is user defined data type with amalgation of multiple or single dats type 
struct employee{
    int id;
    char author;
    float salary;
};
int main(){
    struct employee Saanjh;
    Saanjh.id=1;
    Saanjh.author='p';
    Saanjh.salary=800000;
    cout<<Saanjh.id<<endl;
    cout<<Saanjh.author<<endl;
    cout<<Saanjh.salary<<endl;
    return 0;
}