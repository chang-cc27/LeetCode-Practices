# LeetCode 33. Search in Rotated Sorted Array
There is an integer array nums sorted in ascending order (with distinct values).<br>
Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length)<br>
such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).<br>
For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].<br>
Given the array nums after the possible rotation and an integer target,<br>
return the index of target if it is in nums, or -1 if it is not in nums.<br>
You must write an algorithm with O(log n) runtime complexity.

## 💡 思路 (Approach)
- 使用 **變形二分法**：
  1. 設定左右邊界 `left`、`right`，計算中點 `mid`。
  2. 判斷哪一半是有序的：
     - 左半邊有序：`nums[left] <= nums[mid]`
     - 右半邊有序：`nums[mid] <= nums[right]`
  3. 根據 target 是否落在有序區間，縮小搜索範圍。
  4. 重複直到找到 target 或搜尋結束。
- 時間複雜度 O(log n)，空間複雜度 O(1)。

---

## 📊 表現 (Performance)
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **15.27 MB**, less than **33.28%** of C++ submissions  
