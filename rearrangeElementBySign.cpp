class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>positive;
        vector<int>negative;

        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }

        for(int i = 0; i < n; i++){
            if(i%2 == 0 ){
                nums[i] = positive[i/2];
            }
            else if(i%2 == 1 ){
                nums[i] = negative[(i-1)/2];
            }
        }

        return nums;
    }
};