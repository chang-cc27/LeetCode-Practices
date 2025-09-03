# LeetCode 104. Maximum Depth of Binary Tree
Given the root of a binary tree, return its maximum depth.<br>
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Approach
- 使用 BFS 層序遍歷計算樹的深度：
  1. 將根節點加入隊列。
  2. 當隊列不為空時，遍歷當前層所有節點。
  3. 將每個節點的左右子節點加入隊列。
  4. 完成一層後，深度加 1。
- 最終返回遍歷完成後的深度。
- 時間複雜度 O(n)，空間複雜度 O(w)，w 為最大層寬。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(w)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **19.12 MB**, less than **13.77%** of C++ submissions  
