class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>temp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if((i != j) && (nums[i]+nums[j] == target))
                {
                    temp.push_back(i);
                    temp.push_back(j);
                    break;
                }
                
            }
        }
        return temp;
    }
};