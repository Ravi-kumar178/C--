#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int repeatedElements(vector<int>& nums){
    for(int i = 0; i < nums.size()-1; i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                return nums[i];
                break;
            }
        }
    }
    return INT_MIN;
}

int main(){
    vector<int>nums = {10, 5, 3, 4, 3, 5, 6};
    int repeatedElem = repeatedElements(nums);
    cout<<"Repeated Elements: "<<repeatedElem<<endl;
    return 0;
}