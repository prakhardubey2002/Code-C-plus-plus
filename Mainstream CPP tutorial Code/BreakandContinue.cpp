// program to go out on alternate even day 

#include <iostream>
using namespace std;
int main(){
    int pocketmoney = 3000;
    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue; //allow loop to continue
        }
        if(date%2!=0){
            cout<<"Date is odd Dont go out! date is"<<date<<endl;
        }
        if(pocketmoney==0){
            cout<<"Pocket money is 0"<<endl;
            break; //will break loop and program will terminate loop
        }
        cout <<"Go out to day"<<endl;
        pocketmoney=pocketmoney-300;
        cout<<"Currentlt pocket money is "<< pocketmoney<<" and date is "<<date <<endl;
    }
    return 0;
}
