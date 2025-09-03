class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) return mid;

            // 左半邊有序
            if (nums[left] <= nums[mid]) {
                // 必須保證在左半邊，如果nums[left]>target，則target其實在右半邊(被rotate過)
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; // target 在左半邊
                } else {
                    left = mid + 1;  // target 在右半邊
                }
            }
            // 右半邊有序
            else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;  // target 在右半邊
                } else {
                    right = mid - 1; // target 在左半邊
                }
            }
        }
        return -1;
    }
};
