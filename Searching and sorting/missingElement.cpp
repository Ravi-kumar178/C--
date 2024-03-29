#include<iostream>
using namespace std;

int findMissingElement(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start <= end){
        int diff = arr[mid]-mid;
        if(diff == 1){
            start = mid+1;
        }
        else if(diff == 2){
            ans = arr[mid]-1;
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    if(ans+1 == 0){
        return n+1;
    }
    return ans;
}

int main(){
   // int arr[] = {1,2,3,4,6,7,8,9};
   // int arr[] = {2,3,4,5,6,7,8,9};
     int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    
    int ans = findMissingElement(arr,n);
    cout<<"The missing element is: "<< ans<<endl;
    return 0;
}
