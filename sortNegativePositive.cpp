
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void sortPositiveNegative(int arr[], int n){
    
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[] = {23,-7,12,-10,-11,40,60};
    int n = 7;
    
    cout<<"Print the given array: "<<endl;
    printArray(arr,n);
    cout<<endl;
    sortPositiveNegative(arr,n);
    cout<<"Print the sorted array: "<<endl;
    printArray(arr,n);
    return 0;
}
