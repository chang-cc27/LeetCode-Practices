# LeetCode 226. Invert Binary Tree
Given the root of a binary tree, invert the tree, and return its root.

## 💡 思路 (Approach)
- 遞迴交換每個節點的左右子樹：
  1. 若節點不為空，先暫存左子樹。
  2. 將左子樹設為原右子樹，右子樹設為原左子樹。
  3. 對交換後的左右子樹遞迴同樣操作。
- 空節點直接返回。
- 時間複雜度 O(n)，空間複雜度 O(h)（遞迴棧，h 為樹高）。

---

## 📊 表現 (Performance)
- **Time Complexity:** O(n)  
- **Space Complexity:** O(h)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **12.37 MB**, less than **86.19%** of C++ submissions  
