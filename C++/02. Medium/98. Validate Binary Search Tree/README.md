# LeetCode 98. Validate Binary Search Tree
Given the root of a binary tree, determine if it is a valid binary search tree (BST).<br>
A valid BST is defined as follows:<br>
The left subtree of a node contains only nodes with keys strictly less than the node's key.<br>
The right subtree of a node contains only nodes with keys strictly greater than the node's key.<br>
Both the left and right subtrees must also be binary search trees.<br>

## Approach
- 利用 **遞迴**檢查每個節點是否符合 BST 規則：
  1. 每個節點的值必須在 `(minVal, maxVal)` 區間內。
  2. 對左子樹，更新最大值為當前節點值。
  3. 對右子樹，更新最小值為當前節點值。
- 空節點直接視為合法 BST。
- 使用 `long` 來避免節點值等於整數邊界時的問題。
- 時間複雜度 O(n)，空間複雜度 O(h) (遞迴棧，h 為樹高)。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(h)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **22.06 MB**, less than **17.90%** of C++ submissions  
