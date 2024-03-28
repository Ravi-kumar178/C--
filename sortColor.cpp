
//sort color 

#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

void sortColors(int arr[], int n){
    int i = 0;
    int left = 0;
    int right = n-1;
    
    while(i <= right){
        if(arr[i] == 0){
            swap(arr[i],arr[left]);
            i++;
            left++;
        }
        else if(arr[i] == 1){
            i++;
        }
        else if(arr[i] == 2){
            swap(arr[i],arr[right]);
            right--;
        }
    }
}

int main(){
     int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the elements in the array: "<<endl;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<endl<<"Print the array: "<<endl;
    printArray(arr,n);
    cout<<endl;
    
    sortColors(arr,n);
    
    cout<<"Print the sorted array: "<<endl;
    printArray(arr,n);
    return 0;
    
}