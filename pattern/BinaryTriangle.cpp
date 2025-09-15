#include <iostream>
using namespace std;

int main()
{

    int row = 5;
    int a = 5; // take any initial value

    // for (int i = 1; i <= row; i++)
    // {
    //     // during printing of every row first check i's value is even of not

    //     if (i % 2 == 0)
    //     {
    //         a = 0;
    //     }
    //     else
    //     {
    //         a = 1;
    //     }

    //     for(int j=1;j<=i;j++){
    //         cout<<a;
    //         if(a ==1) a=0 ;
    //         else a =1;
    //     }
    //     cout<<endl;
    // }


    // second logic 

    for(int i=1;i<row;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1;
            }
            else cout<<0;
        }
        cout<<endl;
    }

}