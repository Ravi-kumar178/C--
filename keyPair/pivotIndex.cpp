class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int leftSum = 0;
            int rightSum = 0;
            
            //right sum
            for(int j = i+1; j < n; j++){
                rightSum = rightSum + nums[j];
            }

            
            //left sum
            for(int k = i-1; k >= 0; k--){
                leftSum = leftSum + nums[k];
            }

            //apply condn
            if(leftSum == rightSum){
                return i;
            }
        }
        return -1;
    }
};