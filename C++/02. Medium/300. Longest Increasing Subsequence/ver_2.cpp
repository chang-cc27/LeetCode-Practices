class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> inc_sub(nums.size(), 1);
        int max_len = 1;

        for (int i=1; i<nums.size(); i++) {
            int local_max = 0;
            for (int j=1; j<=i; j++) {
                if (nums[i] > nums[i-j]) {
                    local_max = max(local_max, inc_sub[i-j]);
                }
            }
            inc_sub[i] += local_max;
            max_len = max(max_len, inc_sub[i]);
        }
        return max_len;
    }
};
