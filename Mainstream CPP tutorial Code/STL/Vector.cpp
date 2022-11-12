#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;//defination
    v.push_back(1);//pushes element in vector
    v.emplace_back(2);//pushes elemnt at back ,dynamically increasing size of vector,is faster that push back
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);//will treat 1,2 as pair elemnt on its own so dont need to add bracket like push back
    vector<int> vx(5,100);//will make vector of size 5 with 100 filled in it 100 times
    vector <int> vr(5);//will make array of size 5 with random garbage value in it
    vector <int> v1(5,20);
    vector <int> v2(v1);
}