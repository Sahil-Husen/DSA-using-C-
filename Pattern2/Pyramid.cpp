#include<iostream>

using namespace std;
int main(){


    int row =4;

    for(int i=1;i<=row;i++){
        for(int space = 1;space<=row-i;space++){
            cout<<" ";
        }

        for(int j =1;j<=2*i-1;j++){
            cout<<"*";
        }
         

        cout<<endl;
    }

    for(int k = row-1;k>=1;k--){
        for(int space = 1;space<=row-k;space++){
            cout<<" ";
        }

        for(int j =1;j<=2*k-1;j++){
            cout<<"*";
        }
         

        cout<<endl;
    }
}