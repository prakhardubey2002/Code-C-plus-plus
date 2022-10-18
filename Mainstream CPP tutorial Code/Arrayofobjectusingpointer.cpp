#include <iostream>
using namespace std;
class Shop{
    int id;
    float price;
    public:
        void setData(int a,float b){
            id=a;
            price=b;
        }
        void GetData(void){
            cout<<"The code for the id is : "<<id<<endl;
            cout<<"The price of this item is : "<<price<<endl;
        }
};
int main(){

    int size;
    int p,i;
    float q;
    cout<<"Enter Number of item you want "<<endl;
    cin>>size;
    Shop *ptr=new Shop[size];
    Shop *ptrTemp= ptr;
    for(i=0;i<size;i++){
        cout<<"The item Number is : "<<i+1<<endl;
        // cout<<"Enter Values "<<endl;
        cout<<"Enter id of item "<<endl;
        cin>>p;
        cout<<"Enter value of item"<<endl;
        cin>>q;
        ptr->setData(p,q);//(ptr-> is equivalent to *(ptr)/derefrencing operator )
        ptr++;
    }
    for(i=0;i<size;i++){
        ptrTemp->GetData();
        ptrTemp++;
    }
    return 0;
}