#include<iostream>
using namespace std;

    void find(int n, int* ptr1, int* ptr2){
        // find the last digit
        *ptr2 = n%10;
        // find the first digit

        while(n>10){
            n/=10;
        }

        *ptr1 = n;
        return;


    }


int main(){

    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int firstNum , secondNum;
    int* ptr1 = &firstNum;
    int* ptr2 = &secondNum;

    find(num,ptr1,ptr2);
    cout<<firstNum<<" "<<secondNum<<endl;
    
}