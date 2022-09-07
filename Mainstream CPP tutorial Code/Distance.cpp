#include <iostream>
#include<cmath>
using namespace std;
class Point {
    int a;
    int b;
    friend void pix(Point,Point);
    public:
     void setdata(int x,int y){
        a=x;
        b=y;
     }
     void Printdata(){
        cout <<"You Number Coordinate : ("<<a<<","<<b<<")"<<endl;
     }
};
void pix(Point o1,Point o2){
    Point o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    o3.Printdata();
    cout << sqrt(pow(o1.a+o2.a,2) + pow(o1.b+o2.b,2));

};
int main(){
    Point a1,a2,a3;
    a1.setdata(1,1);
    a2.setdata(1,1);
    pix(a1,a2);
    return 0;
}
