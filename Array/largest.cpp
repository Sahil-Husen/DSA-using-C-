#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 52, 13, 23,-1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int large = arr[0];
    int small = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (large < arr[i])
        {
            large = arr[i];
        }
        else if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    cout << large << endl;
    cout << small << endl;
}