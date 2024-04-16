class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int i = num.size()-1;
        vector<int>ans;
        int carry = 0;
        while(i >= 0|| k > 0 || carry > 0){
            int digit = i>=0?num[i]:0;
            
            int sum = digit + k%10 + carry;

            ans.push_back(sum%10);
            carry = sum/10;
            k = k/10;
            i--;
        }
       
        reverse(ans.begin(),ans.end());
        return ans;
    }
};