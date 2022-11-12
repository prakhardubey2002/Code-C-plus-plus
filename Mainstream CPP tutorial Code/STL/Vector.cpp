#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;//defination
    v.push_back(1);//pushes element in vector
    v.emplace_back(2);//pushes elemnt at back ,dynamically increasing size of vector,is faster that push back
    vector<pair<int,int>>vec;
}