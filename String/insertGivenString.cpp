

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


void resizes(string &str,int le){
    
      string res = "";
    for(int i =0;i<le;i++){
      
        res+=str[i];
    }
    str = res;

}

string deleteAtPosition(string &str,int nth,int pos ){

     

    int length = len(str);

    // for(int i= pos;i<length-nth;i++){
    //     str[i] = str[i+nth];
    // }
    
    //  resizes(str,(length-nth));
    // return str;

    for(int i=pos;i<length;i++){
        str[i] = str[i+nth];
    }
    str.resize(length-nth);

    return str;

}



int main()
{
    string main = "computer";
    string sub = "abc";
    int pos = 5;
    // cout << insertSubString(main, sub, pos);
    cout<<deleteAtPosition(main,4,2);
}