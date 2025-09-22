class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i=0; i<int(n/2); i++) {
            for (int j=i; j<n-1-i; j++) {
                swap(matrix[i][j], matrix[n-1-j][i]);
                swap(matrix[n-1-j][i], matrix[n-1-i][n-1-j]);
                swap(matrix[n-1-i][n-1-j], matrix[j][n-1-i]);
            }
        }
    }
};
