#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortColors(vector<int>& nums){
    int zeroCount = 0;
    for(int i = 0; i < nums.size() ; i++){
        if(nums[i] == 0) zeroCount++;
    }
    int i = 0;
    for( ; i < zeroCount; i++){
        nums[i] = 0;
    }
    for(int j = i; j < nums.size() ; j++){
        nums[j] = 1;
    }
}

void printArray(vector<int>& nums){
    for(int i = 0; i < nums.size() ; i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
   vector<int>nums = {0,1,0,1,1,0,0,0,0};
   cout<<"Before Sorting: "<<endl;
   printArray(nums);
   cout<<endl;
   sortColors(nums);
   cout<<"After Sorting: "<<endl;
   printArray(nums);
   return 0;
}