#include <bits/stdc++.h>
using namespace std;
int main(){
    pair <int,int>p ={1,3};
    cout<<p.first<<endl<<p.second<<endl;
    //Nested pair



    
    pair <int ,pair <int,int> >X={1,{1,2}};
    cout<<X.first<<endl<<X.second.first<<endl<<X.second.second<<endl;
    //pair array
    pair<int,int>arr[]={{1,4},{1,4}};
    cout<<arr[0].second<<endl;

}