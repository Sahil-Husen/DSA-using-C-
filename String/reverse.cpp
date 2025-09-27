#include <iostream>
// #include<bits/stdc++.h>
#include <stdexcept>
using namespace std;

int len(string &str)
{
    
    int length = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

int main()
{
    string str;

    cout << "Enter any string : ";

    getline(cin, str);
    

}