class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) {
            return {};
        }
        
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n-1;
        int up = 0, down = m-1;

        while(1) {
            // Step 1.
            for(int i=left; i<=right; i++) {
                ans.push_back(matrix[up][i]);
            }
            up++;
            if(up > down) {
                break;
            }
            // Step 2.
            for(int i=up; i<=down; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(left > right) {
                break;
            }
            // Step 3.
            for(int i=right; i>=left; i--) {
                ans.push_back(matrix[down][i]);
            }
            down--;
            if(up > down) {
                break;
            }
            // Step 4.
            for(int i=down; i>=up; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            if (left > right) {
                break;
            }
        }
        return ans;
    }
};
