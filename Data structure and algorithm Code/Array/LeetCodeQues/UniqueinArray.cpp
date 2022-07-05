#include <iostream>
using namespace std;
int Unique(int arr[], int n)
{
    int uniq;
    for (int i = 0; i < n; i++)
    {
       
       uniq=uniq^arr[i];
    }
    return uniq;
}
int main()
{
    int arr[3] = {1, 1,  5};
    int x = Unique(arr, 3);
    cout << x << endl;
}