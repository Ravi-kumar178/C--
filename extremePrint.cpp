//extreme print in an array 

#include<iostream>
using namespace std;

void extremePrint(int arr[], int size){
    int i = 0;
    int j = size-1;
    
    while(i <= j){
        if(i == j){
            cout<<arr[i]<<" ";
            i++;
            j--;
        }
        else{
        cout<<arr[i]<<" "<<arr[j]<<" ";
        i++;
        j--;
        }
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    
    extremePrint(arr,size);
    return 0;
}
