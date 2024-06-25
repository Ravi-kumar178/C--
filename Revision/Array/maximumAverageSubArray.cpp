class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int sum = 0;
        for(int k = i; k <= j ;k++){
            sum += nums[k];
        }
        int maxSum = sum;
        j++;
        while(j < nums.size()){
            sum = sum - nums[i++];
            sum = sum + nums[j++];
            maxSum = max(sum,maxSum);
        }

        double avg = maxSum/(double)k;
        return avg;
    }
};