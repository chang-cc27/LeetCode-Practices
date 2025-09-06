# LeetCode 297. Serialize and Deserialize Binary Tree
Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer,
or transmitted across a network connection link to be reconstructed later in the same or another computer environment.<br>
Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work.<br>
You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

## Approach
這題用 **Pre-order Traversal** + 標記空節點的方法：

- **序列化 (serialize)**：
  - 先序遍歷樹
  - 遇到節點 → `data += to_string(val) + ","`
  - 遇到空節點 → `data += "#,"`
- **反序列化 (deserialize)**：
  - 用 `stringstream` 按 `','` 拆字串
  - 遇到 `#` → 返回 nullptr
  - 遇到數字 → 建節點，遞迴生成左右子樹

這樣可以保持 **樹的結構**，並支持空節點。

---

## Performance
- **Time Complexity:** O(n)  
  - 序列化和反序列化都需要遍歷每個節點一次  
- **Space Complexity:** O(n)  
  - 儲存序列化字串與遞迴棧空間  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **23 ms**, faster than **82.03%** of C++ submissions  
  - Memory: **35.85 MB**, less than **34.99%** of C++ submissions  

---
