

#include <iostream>
using namespace std;
 

int len(string str)
{
    int len = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    return len;
}

string insertSubString(string main, string sub, int pos)
{

    int mainLen = len(main);
    int subLen = len(sub);

    main.resize(mainLen + subLen);
     

    for (int i = mainLen - 1; i >= pos; i--)
    {
        main[i + subLen] = main[i];
    }

    for (int i = 0; i < subLen; i++)
    {
        main[pos + i] = sub[i];
    }

    return main;
}




int main()
{
    string main = "helloworld";
    string sub = "abc";
    int pos = 5;
    cout << insertSubString(main, sub, pos);
}