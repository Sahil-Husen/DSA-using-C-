#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 3, 0, 12};

    int size = 5;
    int l = 0, r = 1;
    while (l < r)
    {
        if (arr[l] != 0)
        {
            r++, l++;
            if (arr[l] == 0 && arr[r] > 0)
            {
                int temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
            }
            r++;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}