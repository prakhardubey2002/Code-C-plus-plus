#include <bits/stdc++.h>
#include <list>
using namespace std;
int main(){
    list<int> list1;//list with 0 length
    list<int> list2(7);//list with size 7 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    list<int> :: iterator iter;
    iter=list1.begin();
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
}