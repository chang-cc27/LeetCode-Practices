# LeetCode 162. Find Peak Element
A peak element is an element that is strictly greater than its neighbors.<br>
Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.<br>
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.<br>
You must write an algorithm that runs in O(log n) time.

## Approach
- 使用二分搜尋尋找峰值：
  - 設 `left = 0, right = nums.size()-1`
  - 迴圈條件 `left < right`：
    - 計算中點 `mid = left + (right-left)/2`
    - 若 `nums[mid] < nums[mid+1]` → 峰值在右邊，`left = mid+1`
    - 否則 → 峰值在左邊或 mid 本身，`right = mid`
  - 最終 `left == right` → 返回該索引

---

## Performance
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **12.38 MB**, less than **92.21%** of C++ submissions  
