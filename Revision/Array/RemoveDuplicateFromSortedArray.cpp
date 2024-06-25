class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0;
        int i = index+1;
        while(i < nums.size()){
            if(nums[i] == nums[index]){
                i++;
            }
            else{
                ++index;
                swap(nums[i++],nums[index]);
            }
        }
        return index+1;
    }
};