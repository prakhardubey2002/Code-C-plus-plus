#include <iostream>
using namespace std;
//all compulsory parameter are on left in function declaration and all default parameter are on right
float moneyRecieved(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}
int main(){
    int money =1000000;
    cout <<"If you have "<<moneyRecieved(money)<<"after 1 year";
    cout <<"If you are special "<<moneyRecieved(money,1.1)<<"after 1 year";
    return 0;
}