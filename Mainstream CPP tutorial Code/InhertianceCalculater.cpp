#include <iostream>
using namespace std;
class SimpleCalc{
    protected:
        int add;
        int Subs;
    public:
        void Add(int x,int y){
                add=x+y;
        };
        void Substract(int x ,int y){
            Subs=x-y;
        };
        void Print_add(void){
            cout<<"Addying given two give : "<<add<<endl;
        };
        void Print_Substract(void){
            cout<<"Substracting given two give : "<<Subs<<endl;
        };


};
class ScientificCalc{
    protected:
        int cos;
        int sin;
    public:
        void CosAngle(int B,int H){
            cos=B/H;
        };
        void SinAngle(int P,int H){
            sin=P/H;
        };
        void Sin_Print(void){
            cout << "Sin of given angle is : "<<sin<<endl;
        };
        void Cos_Print(void){
            cout << "Cos of given angle is : "<<cos<<endl;
        };
};
class HybridCalc: public SimpleCalc,public ScientificCalc{
    protected:
        int Sum;
    public:
        void Display(void){
            cout<<"Add is : "<< add<<" Substract is : "<<Subs<<" Cos is : "<<cos<<" Sin is : "<<sin <<endl;
        };
        void Angle_Sum(void){
            Sum=sin+cos;
        };
        void DisplayAngleSum(void){
                cout<<"Sum of two angle is : "<<Sum<<endl;
        }
};
int main(){
    HybridCalc H;
    H.Add(2,2);
    H.Substract(4,2);
    H.Print_add();
    H.Print_Substract();
    H.CosAngle(20,10);
    H.SinAngle(40,20);
    H.Sin_Print();
    H.Cos_Print();
    H.Display();
    H.Angle_Sum();
    H.DisplayAngleSum();
    return 0;
}