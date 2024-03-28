
#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void rotateArray(int arr[], int n, int k){
    int nums[n];

    for(int i = 0; i < n; i++){
        int newIndex = (i+k)%n;
        nums[newIndex] = arr[i];
    }

    /* printArray(nums,n); */
    arr = nums;
  cout<<endl;
  cout<<"Print the rotated array: "<<endl;
  printArray(arr,n);
}

int main(){

    int k;
    cout<<"Enter the number by which the array should be rotated: ";
    cin>>k;
    cout<<endl;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Taking the element of the array as input: "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    };

    cout<<endl<<"Printing the array: "<<endl;
     printArray(arr,n);
    cout<<endl;
     rotateArray(arr,n,k);
    
    return 0;
}