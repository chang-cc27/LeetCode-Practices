class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void backtracking(vector<int>& v, int start, int target) {
        if (target < 0) return;
        if(target == 0) {
            ans.push_back(path);
            return;
        }
        for (int i = start; i<v.size(); i++) {
            path.push_back(v[i]);
            backtracking(v, i, (target-v[i]));
            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.reserve(150);
        backtracking(candidates, 0, target);
        return ans;
    }
};
