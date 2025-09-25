# LeetCode 54. Spiral Matrix
Given an m x n matrix, return all elements of the matrix in spiral order.

## Approach
- 使用 **Simulation + Boundary Shrinking** 方法。  
- 核心思路：按照「右 → 下 → 左 → 上」的順序，不斷遍歷矩陣邊界，並逐步縮小邊界。  
- 步驟：  
  1. 定義四個邊界：`left, right, up, down`。  
  2. 依序進行四個方向的遍歷：  
     - 向右：固定 `up`，遍歷 `left → right`。然後 `up++`。  
     - 向下：固定 `right`，遍歷 `up → down`。然後 `right--`。  
     - 向左：固定 `down`，遍歷 `right → left`。然後 `down--`。  
     - 向上：固定 `left`，遍歷 `down → up`。然後 `left++`。  
  3. 每走完一圈，就縮小對應的邊界。  
  4. 當邊界交錯（例如 `up > down` 或 `left > right`），結束遍歷。  

---

## Performance
- **Time Complexity:** O(m * n) （每個元素剛好被訪問一次）  
- **Space Complexity:** O(1) （除了輸出結果外，不需要額外空間）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **9.38 MB**, less than **49.70%** of C++ submissions
