class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];

        int max_num = nums[0];
        for(int i=0; i<nums.size(); i++) {
            int total = 1;
            for (int j=i; j<nums.size(); j++) {
                total *= nums[j];
                max_num = max(max_num, total);
            }
        }

        return max_num;
    }
};
