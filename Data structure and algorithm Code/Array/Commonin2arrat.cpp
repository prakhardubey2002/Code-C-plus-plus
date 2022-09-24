#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 7, 2};
    int size = sizeof(arr2) / sizeof(arr2[0]) + sizeof(arr1) / sizeof(arr1[0]);
    int un[size];
    int in = 0;
    int count=0;
  for(int i=0;i< sizeof(arr1)/sizeof(arr1[0]);i++){
    //   cout<<arr1[i]<<endl;
        for(int j=0;j< sizeof(arr2)/sizeof(arr2[0]);j++){
            if(arr1[i]==arr2[j]){
                un[in]=arr1[i];
                count++;
                in++;
            }
        }
  }

  cout<<"Common Element : "<<endl;
    for (int z = 0; z < in; z++)
    {
        cout << un[z] << endl;
    }
      cout<<"Common Element  Count "<<count<<endl;
    return 0;
}