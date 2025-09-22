# LeetCode 300. Longest Increasing Subsequence
Given an integer array nums, return the length of the longest strictly increasing subsequence.

----

# Ver. 1

## Approach
- 使用 **Patience Sorting + Binary Search** 方法。  
- 核心思路：維護一個動態數列 `num_list`，它並不是最終 LIS，但長度正確。  
- 遍歷 `nums`：  
  1. 使用 `lower_bound` 找到 `num_list` 中第一個大於等於 `nums[i]` 的位置。  
  2. 若找不到，表示 `nums[i]` 大於 `num_list` 目前所有元素，將其加入尾端。  
  3. 若找到，則用 `nums[i]` 更新該位置的值，以保證 `num_list` 中的數字儘量小，增加後續延長序列的可能性。  
- 最後 `num_list.size()` 即為 LIS 的長度。  

---

## Performance
- **Time Complexity:** O(n log n) （每個元素使用一次 `lower_bound`）  
- **Space Complexity:** O(n) （儲存動態數列）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **13.92 MB**, less than **94.79%** of C++ submissions
 
----

# Ver. 2

## Approach
- 使用 **Dynamic Programming (O(n²))** 方法。  
- 維護一個陣列 `inc_sub`，`inc_sub[i]` 表示以 `nums[i]` 結尾的 LIS 長度。  
- 遍歷陣列 `nums`：  
  1. 對每個 `i`，檢查之前的所有元素 `nums[j]`（j < i）：  
     - 若 `nums[i] > nums[j]`，更新 `inc_sub[i] = max(inc_sub[i], inc_sub[j] + 1)`。  
  2. 同時維護 `max_len`，記錄目前最大 LIS 長度。  
- 最後回傳 `max_len`。

---

## Performance
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **47 ms**, faster than **75.01%** of C++ submissions  
  - Memory: **14.34 MB**, less than **64.05%** of C++ submissions
