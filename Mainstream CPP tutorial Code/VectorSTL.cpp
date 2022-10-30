#include <iostream>
#include <vector>//vector libarary ti use resizable vector
using namespace std;
void Display(vector<int> &vec){
    cout<<"Listed Element : "<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
};
int main(){
    vector<int> vec1;
    int element,size;
    cout<<"Enter size of element"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter element "<< i+1<<endl;
        cin>>element;
        vec1.push_back(element);//Push back insert element in array 
    }
    vec1.pop_back();//remove last element from vector
    Display(vec1);
    return 0;
}