# LeetCode 15. 3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k,<br>
and nums[i] + nums[j] + nums[k] == 0.<br>
Notice that the solution set must not contain duplicate triplets.

## Approach
- 使用 **排序 + 雙指標 (Two Pointers)**：
  1. 先將陣列排序，方便去重與使用雙指標。
  2. 遍歷每個元素 `nums[i]` 作為第一個數字：
     - 若與前一個元素相同，跳過避免重複。
  3. 設兩個指標 `l = i+1`、`r = n-1`，計算三數和：
     - `sum == 0` → 加入結果，並移動雙指標，同時跳過重複值  
     - `sum < 0` → 左指標右移  
     - `sum > 0` → 右指標左移
- 重複直到所有可能組合處理完。

---

## Performance
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(1)（不算輸出結果）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **43 ms**, faster than **86.32%** of C++ submissions  
  - Memory: **29.11 MB**, less than **48.10%** of C++ submissions  
