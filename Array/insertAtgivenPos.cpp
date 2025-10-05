#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 3;
    int elem = 100;
    for (int i = pos; i <= n; i++)
    {
        arr[pos + 1] = arr[pos];
    }
    arr[pos] = 100;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}