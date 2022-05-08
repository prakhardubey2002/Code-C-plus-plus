#include <iostream>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initcounter(void){
            counter=0;
        }
        void setPrice(void);
        void display(void);
};
void shop::setPrice(void){
    cout<<"Enter ID for counter number"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price for counter number"<<counter+1<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::display(void){
    for(int i=0;i<counter;i++){
        cout<<"The counter of item Id"<<itemId[i]<<" is "<< itemPrice[i]<<endl;
    }
}


int main(){
    shop Shop;
    Shop.initcounter();
    Shop.setPrice();
    Shop.setPrice();
    Shop.display();
    return 0;
}
