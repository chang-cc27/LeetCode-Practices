class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < nums[mid + 1]) {
                // 上坡，峰值一定在右邊
                left = mid + 1;
            } else {
                // 下坡或剛好是峰值，往左半邊找
                right = mid;
            }
        }
        return left; // left == right 時就是峰值位置
    }
};
