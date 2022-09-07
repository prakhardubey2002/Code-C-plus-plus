#include <iostream>
#include <string>
using namespace std;
class binary{
    string s;
    public:
    //Member Functions
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
};
void binary::read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary::chk_bin(void){
    for(int i=0;i<s.length();i++){
        {
            if(s.at(i)!='0' && s.at(i)!='1'){// at offer capability to access string data by index
                cout<<"Incorrect binary format"<<endl;
                exit(0);//will end complete program
            }
        }
    }
}
void binary:: ones_compliment(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}
void binary::display(void){
    cout<<"Display binary number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    cout<<"In ones compliment form"<<endl;
    b.ones_compliment();
    b.display();
    return 0;
}
