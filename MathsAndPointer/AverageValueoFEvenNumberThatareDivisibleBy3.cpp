class Solution {
public:

    bool isEven(int n){
        if(n&1){
            return false;
        }
        return true;
    }

    int averageValue(vector<int>& nums) {
        int sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++){
            if(isEven(nums[i]) && nums[i]%3 == 0){
                sum += nums[i];
                count++;
            }
        }

        if(count == 0){
            return 0;
        }
        
        int avg = sum/count;
        return avg;
    }
};