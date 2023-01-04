#include <bits/stdc++.h>
#include <map>
using namespace std;
int main(){
    map<string,int> marksMAp;
    marksMAp.insert({{"DharamRaj",10000},{"prem",122}});
    marksMAp["Prakhar"]=8000;
    marksMAp["Jack"]=5;
    marksMAp["Rohan"]=4; 
    map<string,int> ::iterator iter;
    for(iter=marksMAp.begin();iter!=marksMAp.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"Size : "<<marksMAp.size();
}