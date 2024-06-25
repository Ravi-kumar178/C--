class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ApSum = n*(n+1)/2;
        int arrSum = 0;
        for(int i = 0; i < nums.size(); i++){
            arrSum += nums[i];
        }
        return ApSum-arrSum;
    }
};