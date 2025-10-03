#include <iostream>
using namespace std;

void checkPalindrome(string str)
{
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    bool isPalindrome = true;
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = false;

            break;
        }
        start++;
        end--;
    }
    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}

int main()
{

    string str;
    cout << "enter string :";
    getline(cin, str);
    checkPalindrome(str);
}
