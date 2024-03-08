//reverse an array

#include<iostream>
using namespace std;

 void reverseAnArray(int arr[],int size){
     int i = 0;
     int j = size-1;
     
     while(i<j){
         swap(arr[i],arr[j]);
         i++;
         j--;
     }
     
     //printing the array
     
     for(int i = 0; i < size; i++){
         cout<<arr[i]<<" ";
     }
 }

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    reverseAnArray(arr,size);
    return 0;
}