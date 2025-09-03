# LeetCode 704. Binary Search
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums.<br>
If target exists, then return its index. Otherwise, return -1.<br>
You must write an algorithm with O(log n) runtime complexity.

----

# Ver. 1

## Approach
- 標準二分搜尋：
  - 設定左右邊界 `left` 和 `right`
  - 計算中點 `mid = left + (right - left) / 2`
  - 比較 `nums[mid]` 與 `target`：
    - 若相等，返回 `mid`
    - 若小於 target，左邊界右移 `left = mid + 1`
    - 若大於 target，右邊界左移 `right = mid - 1`
- 循環直到左右邊界交錯，找不到返回 -1

---

## Performance
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **31.38 MB**, less than **45.43%** of C++ submissions  
 
----

# Ver. 2

## Approach
- 使用遞迴實現二分搜尋：
  - 定義 helper function `binarySearchHelper(nums, target, left, right)`
  - 若 `left > right`，代表找不到，返回 -1
  - 計算中點 `mid = left + (right - left) / 2`
  - 比較 `nums[mid]` 與 `target`：
    - 相等 → 返回 mid
    - 大於 target → 搜尋左半邊 `[left, mid-1]`
    - 小於 target → 搜尋右半邊 `[mid+1, right]`

---

## Performance
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(log n)  (遞迴棧)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **31.29 MB**, less than **80.01%** of C++ submissions  
