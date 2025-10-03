#include<iostream>
using namespace std;

 int  findSubString(string main, string sub){

    int len1 = 0;
    int  len2 = 0;
    for(int i=0;main[i]!='\0';i++){
        len1++;
    }
    for(int i=0;sub[i]!='\0';i++){
        len2++;
    }
    

    for(int i=0;i<len1;i++){
        bool match = true;  
        for(int j = 0;j<len2;j++){
            if(main[i+j]!=sub[j]){
                match = false;
                break;
            }
        }

        if(match){
            return i+1;
        }
        
    }
     return -1;

 }


int main(){
    string sentence, sub;
    cout<<"Enter the sentence :";
    getline(cin,sentence);
    cout<<"Enter the sub string that you want to find :";
    getline(cin,sub);

    cout<<findSubString(sentence,sub);
}
