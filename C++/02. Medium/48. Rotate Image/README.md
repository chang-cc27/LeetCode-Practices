# LeetCode 48. Rotate Image
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).<br>

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.<br>
DO NOT allocate another 2D matrix and do the rotation.

## Approach
- 使用 **Layer by Layer + 4-way Swap** 方法。  
- 核心思路：將矩陣視為多層「圈」，每次將四個角的元素旋轉到正確位置。  
- 步驟：  
  1. 對每一層（從外圈到內圈）進行操作，層數為 `n/2`。  
  2. 對每一個元素做 **四個元素的交換**：  
     - top → right  
     - right → bottom  
     - bottom → left  
     - left → top  
  3. 完成整個矩陣旋轉。  

---

## Performance
- **Time Complexity:** O(n²) （每個元素只處理一次）  
- **Space Complexity:** O(1) （原地旋轉）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **10.7 MB**, less than **68.68%** of C++ submissions
