#include <iostream>
using namespace std;
bool Search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int Key, size, arr[100];
    cout << "Enter size of the array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element of the array" << endl;
        cin >> arr[i];
    }
    cout << "Enter the element you want to find" << endl;
    cin >> Key;
    bool val = Search(arr, size, Key);
    if (val)
    {
        cout << "Value : " << Key << " Exist in the array";
    }
    else
    {
        cout << "Value : " << Key << " does'nt Exist in the array";
    }
}