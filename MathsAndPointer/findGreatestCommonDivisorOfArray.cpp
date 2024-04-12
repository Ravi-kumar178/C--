class Solution {
public:

    int hcf(int a, int b){
        if(a == 0) return b;
        else if(b == 0) return a;
        else{
            while(a > 0 && b > 0){
                if(a >= b){
                    a = a-b;
                }
                else{
                    b = b-a;
                }
            }
        }
        return a == 0?b:a;
    }

    int findGCD(vector<int>& nums) {
        int minNum = INT_MAX;
        int maxNum = INT_MIN;

        //find min num in array
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < minNum){
                minNum = nums[i];
            }
        }

        //find max num in array
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxNum){
                maxNum = nums[i];
            }
        }

        int ans = hcf(maxNum,minNum);
        return ans;
    }
};