#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums){
    int s = 0 , e = nums.size()-1, mid = s+(e-s)/2;
    int ans = -1;
    while(s <= e){
        int diff = nums[mid]-mid;
        if(diff == 1){
            ans = nums[mid];
            s = mid + 1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    if(ans == -1){
        return nums[0]-1;
    }
    return ans+1;
}

int main(){
    vector<int>nums = {1,2,3,4,6,7,8,9};
    int missingNum = missingNumber(nums);
    cout<<"Missing number is: "<<missingNum<<endl;
    return 0;
}