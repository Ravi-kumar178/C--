#include<iostream>
#include<vector>
using namespace std;

int pivot(vector<int>& nums){
    int s = 0, e = nums.size()-1 , mid = s+(e-s)/2;
    while(s < e){
        cout<<mid<<endl;
        if(nums[mid+1] > nums[mid]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main(){
    vector<int>nums = {10,20,50,40,30};
    int ans = pivot(nums);
    cout<<"Pivot index is: "<<ans<<endl;
    return 0;
}