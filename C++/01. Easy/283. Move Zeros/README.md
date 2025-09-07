# LeetCode 283. Move Zeroes 
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.<br>
Note that you must do this in-place without making a copy of the array.

----

# Ver. 1

## Approach
- 建一個新陣列 `ans`，初始都為 0。
- 遍歷原陣列：
  - 如果元素不為 0 → 放到 `ans[count]`，並增加 `count`
- 最後將 `nums` 移動賦值為 `ans`
- **效果**：保留非零元素順序，所有零集中到末尾  

---

## Performance
- **Time Complexity:** O(n)  
  - 遍歷原陣列一次
- **Space Complexity:** O(n)  
  - 額外使用一個大小為 n 的陣列
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **24.39 MB**, less than **8.90%** of C++ submissions  
 
----

# Ver. 2

## Approach
- **原地操作，不使用額外空間**：
  1. 遍歷陣列，將非零元素依序放到最前面 (`nums[count]`)，同時增加 `count`。
  2. 遍歷剩餘位置，全部填 0。
- **效果**：保留非零元素順序，所有零集中到末尾，空間複雜度降為 O(1)。

---

## Performance
- **Time Complexity:** O(n)  
  - 遍歷陣列兩次：一次搬移非零元素，一次填充零
- **Space Complexity:** O(1)  
  - 原地修改，不使用額外陣列
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **24.00 MB**, less than **20.99%** of C++ submissions  
