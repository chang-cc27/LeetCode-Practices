class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> ans;
        if(n == 0) {
            ans.push_back(newInterval);
            return ans;
        }

        int i = 0;
        // Step 1.
        while(i < n && newInterval[0] > intervals[i][1]) {
            ans.push_back(intervals[i]);
            i++;
        }
        // Step 2.
        while(i < n && newInterval[1] >= intervals[i][0]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        ans.push_back(newInterval);
        // Step 3.
        while(i < n) {
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};
