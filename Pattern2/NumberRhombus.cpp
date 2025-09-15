#include<iostream>
using namespace std;

int main(){
    int row = 5;
    for(int i=1;i<=row;i++){
 
        for(int space = 1;space<=row-i;space++){
            cout<<" ";
        }

        for(int j = 1;j<=row;j++){
            cout<<i;
        }
        cout<<endl;

    }
}