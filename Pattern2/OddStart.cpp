#include <iostream>
using namespace std;

void oddStar(int row) //only for 4
{
    int nsp = row - 1;
    int nst = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int space = 1; space <= nsp; space++)
        {
            cout << " ";
        }
        nsp--;

        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        nst += 2;
        cout << endl;
    }
}

void oddStar2(int row) // for any number of row;
{
    int nsp = row - 1, nst = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int space = 1; space <= nsp; space++)
        {
            cout << " ";
        }
        nsp--;

        for (int j = 1; j <= nst; j++)
        {
            cout << "*";
        }
        nst += 2;
        cout << endl;
    }
}

int main()
{
    int row = 4;

    for (int i = 1; i <= row; i++)
    {
        for (int space = 1; space <= row - i; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2*i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout<<"\n";

    oddStar(row);
    cout << "\n";
    oddStar2(5);
}