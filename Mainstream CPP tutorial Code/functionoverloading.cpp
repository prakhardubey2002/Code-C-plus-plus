#include <iostream>
using namespace std;
int volume(int a){
    return a*a*a;
}
int volume(int l,int b,int h){
    return l*b*h;
}
int main(){
    cout<<"Cuboid : "<<volume(3,7,6)<<endl;
    cout<<"Cube : "<<volume(3)<<endl;

}