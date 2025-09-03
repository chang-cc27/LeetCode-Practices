class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1;
        while(left <= right) {
            if (left == right) return nums[left];
            
            int mid = (left+right)/2;
            if(nums[left] > nums[mid] && nums[mid] < nums[right]) {
                right = mid;
            }
            else if (nums[left] < nums[mid] && nums[mid] > nums[right]) {
                left = mid;
            }
            else if (nums[left] < nums[mid] && nums[mid] < nums[right]) {
                return nums[left];
            }
            else if (left == mid) {
                return min(nums[left], nums[right]);
            }
        }
        return 0;
    }
};
