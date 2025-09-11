#include<iostream>
using namespace std;

int main(){
    int row ;
    cout<<"Enter the row : ";
    cin>>row;
    // for(int i = row;i>=1;i--){
    //     for(int j = 1;j<=row;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i =1;i<row;i++){
        for(int j = 1;j<row+1-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}