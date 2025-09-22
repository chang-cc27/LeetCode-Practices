# LeetCode 53. Maximum Subarray
Given an integer array nums, find the subarray with the largest sum, and return its sum.

## Approach
- 遍歷陣列時：  
  1. 將當前元素加入當前總和 `sum`。  
  2. 更新 `max_sum` 為目前的最大值。  
  3. 若 `sum < 0`，則重置為 `0`，表示重新開始計算新的子陣列。  
- 最後回傳 `max_sum` 即為最大子陣列和。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **71.79 MB**, less than **52.22%** of C++ submissions
