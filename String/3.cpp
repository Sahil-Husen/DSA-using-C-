// Write a C++ program to find a string within a sentence and replace it with
// another string.

#include<iostream>
using namespace std;

 

void findAndReplaceString(string &sentence, const string &subStr, const string &str)
{
    // "const & var" ka matlab hai ki original value ka refrence do par original value ko change mat kro

    string newStr = "";
    string current = "";

    for (int i = 0; i <= sentence.length(); i++)
    {

        char ch = sentence[i];
        if (ch == ' ' || ch == '\0')
        {
            if (current == subStr)
            {
                newStr += str;
            }
           
            else
            {
                newStr += current;
            }
             newStr  += " "; // space ke liye jab koi word match na kre current se toh curren ko new Str me dalo phir ek space bhi add kro aur current ko empty set kro 
             current  ="";
        }
        else
        {
            current += ch;
        }
    }
    sentence = newStr;
   

}

int main()
{

    string sentence, subStr, str;

    cout << "Enter the sentence : ";
    getline(cin, sentence);
    cout << "Enter the sub string that you want to find : ";
    getline(cin, subStr);
    cout << "Enter the string u want to replace : ";
    getline(cin, str);
    findAndReplaceString(sentence,subStr,str);

    cout << "Modified sentence: " << sentence << endl;
 
}