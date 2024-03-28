//shift array element by 1 

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i <size; i++){
        cout<<arr[i]<<" ";
    }
}

void shiftElementBy2(int arr[], int size){
    int temp[] = {arr[size-2], arr[size-1]};
    
    for(int i = size-1; i>=2; i--){
        arr[i] = arr[i-2];
    }
    
    arr[0] = temp[0];
    arr[1] = temp[1];
    
    //print array
    
    printArray(arr,size);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    shiftElementBy2(arr,size);
    return 0;
}