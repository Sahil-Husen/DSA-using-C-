#include <iostream>
using namespace std;

int findOccuranceOfWord(string text, string word)
{

    int len1 = 0;
    for (int i = 0; i < text[i] != '\0'; i++)
    {
        len1++;
    }

    string str = "";
    int count = 0;
     
    for (int i = 0; i < len1; i++)
    {
        char ch = text[i];
       
        if (ch == ' ' || ch == '\0')
        {
            if (str == word)
            {
                count++;
            }
            str = "";
        }
        else
        {
            str += ch;
        }
    }
    return count;
}

int main()
{
    string text, word;
    cout << "Enter the text string : ";
    getline(cin, text);
    cout << "Enter the word :";
    getline(cin, word);
    cout << findOccuranceOfWord(text, word);
}