class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOnes = INT_MIN;
        int row = -1;
        vector<int>ans;
        for(int i = 0; i < mat.size(); i++){
            int count = 0;
            for(int j = 0; j < mat[0].size(); j++){
                if(mat[i][j] == 1) count++;
            }
            if(count > maxOnes) row = i;
            maxOnes = max(count,maxOnes);
        }
        ans.push_back(row);
        ans.push_back(maxOnes);
        return ans;
    }
};