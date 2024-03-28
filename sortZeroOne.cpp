//sort 0's and 1's

#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int size){
    int zeroCount = 0;
    int oneCount = 0;
    
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
        else if(arr[i] == 1){
            oneCount++;
        }
    }
    
   cout<<"zeroCount: "<<zeroCount<<endl;
   cout<<"oneCount: "<<oneCount<<endl;
   
  
    int index = 0;
    while(zeroCount > 0){
        arr[index] = 0;
        index++;
        zeroCount--;
    }
    while(oneCount--){
        arr[index] = 1;
        index++;
    }
    
    //print arr
    
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {0,1,0,1,1,0,0,0,0};
    int size = 9;
    
    sortZeroOne(arr,size);
    return 0;
    
}