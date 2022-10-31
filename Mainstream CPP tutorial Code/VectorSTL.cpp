#include <iostream>
#include <vector> //vector libarary ti use resizable vector
using namespace std;
template <class T>
void Display(vector<T> &vec)
{
    cout << "Listed Element : " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        // cout<<vec[i]<<endl;
        cout << vec.at(i) << endl; // at will show data that position
    }
};
int main()
{
    // vector<char> vec2(4);//4-element character vector
    // vec2.push_back('5');
    // Display(vec2);
    // vector<char> vec3(vec2);//4-element character vector from vec2
    // Display(vec3);
    vector<int> vec4(6, 3); // 6-element vector of 3s
    Display(vec4);

    vector<int> vec1;//zero length vector
    int element,size;
    cout<<"Enter size of element"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter element "<< i+1<<endl;
        cin>>element;
        vec1.push_back(element);//Push back insert element in array
    }
    vec1.pop_back();//remove last element from vector
    vector<int>::iterator iter=vec1.begin();//iterator will point at begining
    vec1.insert(iter,50);//iter point at begining so elemnt will be inserted at start
    vec1.insert(iter+1,2,150);//iter point at begining plus 1 so elemnt will be added at second position and 2 is passed as copy count so 2 times 150 will be added from 2nd position
    Display(vec1);
    return 0;
}