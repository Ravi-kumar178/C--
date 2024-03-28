class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int rowNo;

        vector<int>ans;

        int count = INT_MIN;

        for(int i = 0; i < n; i++){
            int oneCount = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    oneCount++;
                }
            }

            if(oneCount > count){
                count = oneCount;
                rowNo = i;
            }
        }

        ans.push_back(rowNo);
        ans.push_back(count);
        return ans;
    }
};