#include<iostream>
using namespace std;

void moveZeros(int arr[] , int size){

    int j = 0;

    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;    
        }
    }

}

int main(){

    int arr[] = {1,0,3,0,12};
   
    int size = sizeof(arr)/sizeof(arr[0]);
       
    // for(int i=0;i<size;i++){
      
    //     if(arr[i]!=0){
    //         arr[j] = arr[i];
    //         j++;
    //     }
    // }

    // while(j<size){
    //     arr[j] = 0;
    //     j++;
    // }

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    moveZeros(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}