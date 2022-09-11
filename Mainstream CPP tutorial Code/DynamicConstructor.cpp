#include <iostream>
using namespace std;
class BankDeposit
{
    int prinicipal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}//we have to provide a deafault constructor value bea cause at the time an object is created compiler need to choose a constructor to invoke below two are chosen during runtime depending on condition that's why they are called dynamicConstructor
    BankDeposit(int p, int y, float r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be a value like 14
    void show();
};
BankDeposit::BankDeposit(int p, int y, float r)
{
    prinicipal = p;
    years = y;
    interestRate = r;
    returnValue = prinicipal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    prinicipal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = prinicipal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
};
void BankDeposit::show()
{
    cout << endl
         << "Principal amount was : " << prinicipal << endl<<
          " after year : " << years << " return value : " << returnValue << endl;
}
int main()
{
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value p y r"<<endl;
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();
    cout<<"Enter the value p y r"<<endl;
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}