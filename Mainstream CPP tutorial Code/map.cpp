#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    map<string,int> marksMAp;
    marksMAp.insert({{"DharamRaj",10000},{"prem",122}});//insert data in map
    marksMAp["Prakhar"]=8000;
    marksMAp["Jack"]=5;
    marksMAp["Rohan"]=4; 
    map<string,int> ::iterator iter;//return iterator of respective type
    for(iter=marksMAp.begin();iter!=marksMAp.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;//* is for derefrencing data first give us first value of map pair and secong give us second value of map pair
    }
    cout<<"Size : "<<marksMAp.size();//return size
    return 0;
}