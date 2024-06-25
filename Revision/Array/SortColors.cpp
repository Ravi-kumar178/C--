#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums){
    int i =0,left = 0 , right = nums.size()-1;
    
    while(i <= right){
        if(nums[i] == 2){
            swap(nums[i],nums[right--]);
        }
        else if(nums[i] == 0){
            swap(nums[i++],nums[left++]);
        }
        else{
            i++;
        }
    }
}

void printArray(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int>nums = {2,0,1};
    cout<<"Before Rearranging: "<<endl;
    printArray(nums);
    sortColors(nums);
    cout<<endl<<"After Rearranging: "<<endl;
    printArray(nums);
    return 0;
}