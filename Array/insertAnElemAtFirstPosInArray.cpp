#include <iostream>
using namespace std;

void elementAtFirstPos(int *arr, int elem,int size)
{
    
    for (int i = size - 1; i >= 0; i--)
    {
        // arr[i + 1] = arr[i];
        *(arr+i+1) = *(arr+i); 
    }
    arr[0] = elem;
}
void display(int *arr,int size)
{
    // int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    cout << "enter the element you want to enter :";
    cin >> element;
    // cout << element;

    // for(int i = n-1;i>=0;i--){
    //     arr[i+1] = arr[i];
    // }
    // arr[0]  = element;

    // cout<<"The array after the insertion of Element at Position 1st :";
    // for(int i=0;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }

    elementAtFirstPos(arr, element,n);
    display(arr,n);
}