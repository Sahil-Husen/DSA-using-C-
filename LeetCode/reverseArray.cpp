#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // 5,2,4,1
    int n = sizeof(arr) / sizeof(arr[0]);

    // for(int i = n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    int l = 0;
    int len = n;
    int r = n - 1;

    while (l < r)
    {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++, r--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}