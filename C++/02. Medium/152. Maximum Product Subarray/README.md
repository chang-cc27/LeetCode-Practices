# LeetCode 152. Maximum Product Subarray
Given an integer array nums, find a subarray that has the largest product, and return the product.<br>
The test cases are generated so that the answer will fit in a 32-bit integer.

----

# Ver. 1

## Approach
- 使用 **動態規劃**：
  1. 追蹤當前子陣列的最大值 `mx` 與最小值 `mn`，因為負數會影響乘積。
  2. 對每個元素更新：
     - `mx = max(nums[i], nums[i]*mx, nums[i]*mn)`
     - `mn = min(nums[i], nums[i]*mx_prev, nums[i]*mn)`
  3. 更新結果 `ans = max(ans, mx)`。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **17.85 MB**, less than **20.92%** of C++ submissions
 
----

# Ver. 2

## Approach
- 使用 **暴力法**：
  1. 對每個起點 `i`，計算從 `i` 到每個終點 `j` 的乘積。
  2. 追蹤最大值 `max_num`。
- 雖然簡單，但時間複雜度較高，不適合大陣列。

---

## Performance
- **Time Complexity:** O(n^2)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **371 ms**, faster than **5.78%** of C++ submissions  
  - Memory: **17.85 MB**, less than **20.92%** of C++ submissions
