# LeetCode 133. Clone Graph
Given a reference of a node in a connected undirected graph.<br>
Return a deep copy (clone) of the graph.<br>
Each node in the graph contains a value (int) and a list (List[Node]) of its neighbors.

## Approach
- 使用 **深度優先搜索 (DFS)** 遞迴複製每個節點與其鄰居。  
- 使用 `unordered_map<Node*, Node*> visited` 記錄已經複製的節點，避免重複複製和無限循環。  
- 遞迴步驟：
  1. 若節點為空，返回 nullptr。  
  2. 若節點已複製過，直接回傳複製結果。  
  3. 否則建立新節點，將其加入 `visited`。  
  4. 遍歷鄰居，遞迴複製並加入新節點的鄰居列表。  
- 返回複製後的節點即可完成整個圖的複製。

---

## Performance
- **Time Complexity:** O(V + E)，V 為節點數，E 為邊數  
- **Space Complexity:** O(V)，用於 `visited` map 和遞迴堆疊  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **12.20 MB**, less than **48.15%** of C++ submissions  
