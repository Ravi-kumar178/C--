#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortColors(vector<int>& nums){
    int index = 0;
    int i = 0;
    while(i < nums.size()){
        if(nums[i] == 0){
            swap(nums[i++],nums[index++]);
        }
        else{
            i++;
        }
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