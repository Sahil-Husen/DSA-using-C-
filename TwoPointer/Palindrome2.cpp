#include <iostream>
#include <cstring>
using namespace std;

using namespace std;

int main()
{

    /*
    Two-Pointer Approach for Palindrome Check:

    - Use two pointers: 'start' initialized at the beginning of the string,
      and 'end' initialized at the last character of the string.
    - Compare characters at 'start' and 'end':
        * If they are equal, move 'start' forward (start++) and 'end' backward (end--).
        * If they are not equal, the string is not a palindrome.
    - Continue this process until 'start' is no longer less than 'end'.
    - If all corresponding characters match, the string is a palindrome.

    This approach efficiently checks for palindrome in O(n/2) time,
    by only traversing half of the string.
*/

    char ch[] = "sahil";
    int size = strlen(ch);

    int start = 0, end = size - 1;
    while (start < end)
    {
        if (ch[start] != ch[end])
        {
            cout << "Not a palindrome";
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }

    cout << "Palindrome";
}