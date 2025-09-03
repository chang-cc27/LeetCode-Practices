# LeetCode 235. Lowest Common Ancestor of a Binary Search Tree
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.<br>
According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

## 💡 思路 (Approach)
- 利用 BST 的特性：
  1. 若 p 和 q 都小於當前節點，LCA 在左子樹。
  2. 若 p 和 q 都大於當前節點，LCA 在右子樹。
  3. 否則當前節點就是 LCA（分岔點或其中一個節點）。
- 迴圈向下搜尋，直到找到 LCA。

---

## 📊 表現 (Performance)
- **Time Complexity:** O(h) ，h 為樹高  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **25 ms**, faster than **36.31%** of C++ submissions  
  - Memory: **23.52 MB**, less than **33.04%** of C++ submissions  
