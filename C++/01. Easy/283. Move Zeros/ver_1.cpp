class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int count = 0;

        for(int i=0; i<nums.size(); i++) {
            if (nums[i] != 0) {
                ans[count] = nums[i];
                count++;
            }
        }
        nums = move(ans);
    }
};
