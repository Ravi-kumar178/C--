#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void RotateArray(vector<int>& nums , int k){
    vector<int>arr = nums;
    for(int i = 0; i < nums.size(); i++){
        int index = (i+k)%nums.size();
        nums[index] = arr[i];
    }
    
}


void printArray(vector<int>& nums){
    for(int i = 0; i < nums.size() ; i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
   vector<int>nums = {10,20,30,40,50,60};
   int k = 2;
   cout<<"Before Rotating: "<<endl;
   printArray(nums);
   cout<<endl;
   RotateArray(nums , k);
   cout<<"After Rotating: "<<endl;
   printArray(nums);
   return 0;
}