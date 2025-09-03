# LeetCode 143. Reorder List
You are given the head of a singly linked-list. The list can be represented as:<br>
L0 → L1 → … → Ln - 1 → Ln<br>
Reorder the list to be on the following form:<br>
L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …<br>
You may not modify the values in the list's nodes. Only nodes themselves may be changed.

## Approach
- 分三步操作：
  1. **找中點**：使用快慢指標找到鏈表中點。
  2. **反轉後半部**：從中點的下一個節點開始，反轉後半段鏈表。
  3. **合併兩段**：將前半段與反轉後半段交替合併。  

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **22.70 MB**, less than **96.25%** of C++ submissions  
