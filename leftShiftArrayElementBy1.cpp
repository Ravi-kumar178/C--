//shift element left by 1 

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}

void shiftArrayBy1(int arr[], int size){
    int temp = arr[0];
    
    for(int i = 0; i<=size-2 ; i++){
        arr[i] = arr[i+1];
    }
    
    arr[size-1] = temp;
    
    //printArray
    printArray(arr,size);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    shiftArrayBy1(arr,size);
    return 0;
}