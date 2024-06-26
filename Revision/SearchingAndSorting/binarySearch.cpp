#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums, int target){
    int start = 0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){ 
            start = mid+1;
            
        }
        else {
            end = mid-1;
            
        }
        
        mid = start+(end-start)/2;
    }
    return -1;
}

int main(){
    vector<int>nums = {10,20,30,40,50,60,70};
    int target = 70;
    int found = binarySearch(nums,target);
    if(found == -1){
        cout<<"Target is absent"<<endl;
    }
    else{
        cout<<"Target is at: "<<found<<endl;
    }
    return 0;
}