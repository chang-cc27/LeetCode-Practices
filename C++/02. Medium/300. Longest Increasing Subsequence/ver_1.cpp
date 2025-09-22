class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> num_list;   // Not the real answer.

        for (int i=0; i<nums.size(); i++) {
            // Find the address of the smallest number in num_list that >= nums[i]
            auto it = lower_bound(num_list.begin(), num_list.end(), nums[i]);
            if (it == num_list.end()) {
                num_list.push_back(nums[i]);
            }
            else {
                *it = nums[i];
            }
        }
        return num_list.size();
    }
};
