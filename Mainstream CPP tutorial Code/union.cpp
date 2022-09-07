#include <iostream>
using namespace std;
//union has best memory managment it will chech all datatype and allocate memory to highest one so any one of the datatype can be utilised
//only one of the part or entity of the uniun can be utilised or executed 
union money{
    int rice;
    char car;
    float pond; 
};
int main(){
    union money m1 ;
    m1.rice=34;//onlye rice can be utilised here
    cout<<m1.rice<<endl;
    return 0;
}