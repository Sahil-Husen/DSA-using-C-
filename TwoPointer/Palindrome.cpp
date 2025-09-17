#include <iostream>
#include <cstring>
using namespace std;

using namespace std;

int main()
{
    char ch[] = "madam";
    int size = strlen(ch);

    int start = 0, end = size - 1;
    while (start < end)
    {
        if (ch[start] == ch[end])
        {

            start++;
            end--;
            break;
        }
        else
        {
            cout << "\n not a palindrome";
            return 0;
        }
    }

    cout << "palindrome";
}