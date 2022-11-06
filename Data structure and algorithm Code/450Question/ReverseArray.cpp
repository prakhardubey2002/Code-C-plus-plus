#include <bits/stdc++.h>
using namespace std;
void Reverse(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        swap(arr[i],arr[n-i]);
    }
   
}
void Printx(int arr[],int n){
 for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    Reverse(arr, n-1);
    Printx(arr,n);
}
