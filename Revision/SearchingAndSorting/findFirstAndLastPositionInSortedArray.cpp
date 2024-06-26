class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        vector<int>ans;
        int firstOcc = -1;
        int lastOcc = -1;
        int mid = s+(e-s)/2;

        while(s <= e){
            if(target == nums[mid]){
                firstOcc = mid;
                e = mid-1;
            }
            else if(target > nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e - s)/2;
        }
        ans.push_back(firstOcc);

        s = 0;
        e = nums.size()-1;
        mid = s+(e-s)/2;
        while(s<=e){
            if(target == nums[mid]){
                lastOcc = mid;
                s = mid+1;
            }
            else if(target > nums[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        ans.push_back(lastOcc);
        return ans;
    }
};