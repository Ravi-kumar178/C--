//shift array element by 1 

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i <size; i++){
        cout<<arr[i]<<" ";
    }
}

void shiftElementBy1(int arr[], int size){
    int temp = arr[size-1];
    
    for(int i = size-1; i>=1; i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = temp;
    
    //print array
    
    printArray(arr,size);
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    shiftElementBy1(arr,size);
    return 0;
}