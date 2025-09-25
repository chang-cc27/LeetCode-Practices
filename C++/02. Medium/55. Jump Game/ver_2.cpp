class Solution {
public:
    bool search(vector<int>& nums, int end) {
        for(int i=1; i<=end; i++) {
            if(nums[end-i] >= i) {
                if(end-i == 0) {
                    return true;
                }
                else {
                    return search(nums, end-i);
                }
            }
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return true;
        }

        return search(nums, n-1);
    }
};
