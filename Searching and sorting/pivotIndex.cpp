#include<iostream>
using namespace std;

int findPivotElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    
    while(start <= end){
        if(start == end){
            return start;
        }
        
        else if(arr[mid] > arr[mid+1]){
            return mid;
        }
        
        else if(arr[mid] < arr[mid-1]){
            return mid-1;
        }
        
        else if(arr[start] > arr[mid]){
            //line b
            end = mid-1;
        }
        
        else if(arr[start] < arr[mid]){
            //line a
            start = mid+1;
        }
        
        mid = start + (end-start)/2;
    }
}


int main(){
   
    // int arr[] = {12,14,16,2,4,6,8,10};
     int arr[] = {4,5,6,7,0,1,2};
    int n = 7;
    
    int ans = findPivotElement(arr,n);
    cout<<"The pivot element index is: "<< ans<<endl;
    return 0;
}
