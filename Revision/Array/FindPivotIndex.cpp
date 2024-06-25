class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int i = 0;
        while(i < nums.size()){
            int leftSum = 0;
            int rightSum = 0;
            int a = i;
            //right sum
            for(int j = a+1; j < nums.size(); j++){
                rightSum += nums[j];
            }
            cout<<"right sum: "<<rightSum<<endl;
            //left sum
            for(int j = a-1; j >= 0; j--){
                leftSum += nums[j];
            }
             cout<<"left sum: "<<leftSum<<endl;
            if(leftSum == rightSum){
                return a;
            }
            i++;
        }
        return -1;
    }
};