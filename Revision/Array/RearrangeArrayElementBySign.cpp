class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int i = 0;
        vector<int>positive;
        vector<int>negative;
        while(i < nums.size()){
            if(nums[i] < 0){
                negative.push_back(nums[i++]);
            }
            else{
                positive.push_back(nums[i++]);
            }
        }

        
        for(int j = 0; j < nums.size(); j++){
            if(j%2 == 0){
                nums[j] = positive[j/2];
            }
            else{
                nums[j] = negative[j/2];
            }
        }
        
        return nums;
    }
};