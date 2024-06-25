#include<iostream>
#include<vector>
using namespace std;

void rearrangeBySign(vector<int>& nums){
    int i = 0;
    int index = 0;
    while(i < nums.size()){
        if(nums[i] < 0){
            swap(nums[i++],nums[index++]);
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
    vector<int>nums = {23,-7,12,-10,-11,40,60};
    cout<<"Before Rearranging: "<<endl;
    printArray(nums);
    rearrangeBySign(nums);
    cout<<endl<<"After Rearranging: "<<endl;
    printArray(nums);
    return 0;
}