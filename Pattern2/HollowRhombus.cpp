#include <iostream>
using namespace std;

int main()
{
    int row = 4;
    for (int i = 1; i <=row; i++)
    {
        for (int space = 1; space <= row - i; space++)
        {
            cout << " ";
        }
        int num = 4;
        for (int j = 1; j <= num; j++)
        {
            if ( j==1|| i == num)
            {
                cout << "*";
            }
              
            
        }
        cout << endl;
    }
}