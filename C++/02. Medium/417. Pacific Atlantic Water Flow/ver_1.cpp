class Solution {
public:
    void check(vector<vector<int>>& heights, vector<vector<int>>& reach, int a, int b) {
        int m = heights.size(), n = heights[0].size();
        if (a - 1 >= 0 && heights[a-1][b] >= heights[a][b]) {
            if(reach[a-1][b] == 0) {
                reach[a-1][b] = 1;
                check(heights, reach, a-1, b);
            }
        }
        if (a + 1 < m && heights[a+1][b] >= heights[a][b]) {
            if(reach[a+1][b] == 0) {
                reach[a+1][b] = 1;
                check(heights, reach, a+1, b);
            }
        }
        if (b - 1 >= 0 && heights[a][b-1] >= heights[a][b]) {
            if(reach[a][b-1] == 0) {
                reach[a][b-1] = 1;
                check(heights, reach, a, b-1);
            }
        }
        if (b + 1 < n && heights[a][b+1] >= heights[a][b]) {
            if(reach[a][b+1] == 0) {
                reach[a][b+1] = 1;
                check(heights, reach, a, b+1);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size(), n = heights[0].size();
        vector<vector<int>> rd_2_pac(m, vector<int>(n, 0));
        vector<vector<int>> rd_2_atl(m, vector<int>(n, 0));
        
        // Pacific
        for(int i=0; i<m; i++) {
            if(rd_2_pac[i][0] == 0) {
                rd_2_pac[i][0] = 1;
                check(heights, rd_2_pac, i, 0);
            }
        }
        for(int i=0; i<n; i++) {
            if(rd_2_pac[0][i] == 0) {
                rd_2_pac[0][i] = 1;
                check(heights, rd_2_pac, 0, i);
            }
        }

        // Atlantic
        for(int i=0; i<m; i++) {
            if (rd_2_atl[i][n-1] == 0) {
                rd_2_atl[i][n-1] = 1;
                check(heights, rd_2_atl, i, n-1);
            }
        }
        for(int i=0; i<n; i++) {
            if (rd_2_atl[m-1][i] == 0) {
                rd_2_atl[m-1][i] = 1;
                check(heights, rd_2_atl, m-1, i);
            }
        }

        // Combine
        vector<vector<int>> result;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(rd_2_pac[i][j] == 1 && rd_2_atl[i][j] == 1){
                    result.push_back({i, j});
                }
            }
        }
        return result;
    }
};
