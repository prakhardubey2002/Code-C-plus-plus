#include <bits/stdc++.h>
#include <list>
using namespace std;
void display(list<int> &lst){
    list<int> ::iterator it;
    for ( it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
};
int main(){
    list<int> list1;//list with 0 length
    // list<int> list2(7);//list with size 7 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    // display(list1);
    // list1.pop_back();//remove from end
    // list1.pop_front();//remove from front 
    // list1.remove(7);//remove value if it exist in array
    // list1.sort();//sort array in asendong order
    // list1.reverse();//reverse list
    display(list1);

    list<int> list2(3);
    list<int>:: iterator iter;
    // for(iter= list2.begin();iter!=list2.end();iter++){
    //     int a;
    //     cout<<"Enter value "; 
    //         cin>>a;
    //         list2.push_back(a);
    // }
    iter= list2.begin();
    *iter=45;
    iter++;
    *iter=8;
    iter++;
    *iter=8;
    display(list2);
    list1.merge(list2);//merging two list
    display(list1);
    return 0;
}