class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Step 1: sort
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue; // skip duplicate i

            int l = i + 1, r = n - 1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++, r--;
                    while (l < r && nums[l] == nums[l - 1])
                        l++; // skip duplicate l
                    while (l < r && nums[r] == nums[r + 1])
                        r--; // skip duplicate r
                } else if (sum < 0)
                    l++;
                else
                    r--;
            }
        }
        return res;
    }
};
