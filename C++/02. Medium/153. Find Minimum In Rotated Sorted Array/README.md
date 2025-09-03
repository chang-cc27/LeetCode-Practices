# LeetCode 153. Find Minimum in Rotated Sorted Array
Suppose an array of length n sorted in ascending order is rotated between 1 and n times.<br>
For example, the array nums = [0,1,2,4,5,6,7] might become:<br>
[4,5,6,7,0,1,2] if it was rotated 4 times.<br>
[0,1,2,4,5,6,7] if it was rotated 7 times.<br>
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].<br>
Given the sorted rotated array nums of unique elements, return the minimum element of this array.<br>
You must write an algorithm that runs in O(log n) time.

## Approach
- 使用 **二分法**：
  1. 取左右邊界 `left`、`right` 與中點 `mid`。
  2. 根據 `nums[left]`、`nums[mid]`、`nums[right]` 的大小關係縮小搜索範圍。
  3. 當範圍縮小到 1~2 個元素時，直接返回最小值。
- 保證 O(log n) 的時間複雜度。

---

## Performance
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **14.18 MB**, less than **49.15%** of C++ submissions  
