#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<"enter the size of butter fly in context of row you want to print : \n";
    cin>>row;
  
    cout<<"the Butterfly with size : "<<row<<"\n";
      cout<<endl;

    // 2 upper triangles with space in the middle
    for (int i = 1; i <= row; i++)
    {
        // Left wing
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces in the middle
        for (int s = 1; s <= 2*(row-i); s++)
        {
            cout << " ";
        }

        // Right wing (same as left)
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // 2 lower triangles with space in the middle
    for (int i = row-1; i >= 1; i--)
    {
        // Left wing
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Spaces in the middle
        for (int s = 1; s <= 2*(row - i); s++)
        {
            cout << " ";
        }

        // Right wing (same as left)
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
