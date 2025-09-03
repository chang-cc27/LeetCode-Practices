# LeetCode 19. Remove Nth Node From End of List
Given the head of a linked list, remove the nth node from the end of the list and return its head.

## Approach
- **兩步法**：
  1. **計算鏈表長度**：遍歷一次鏈表得到總長度 `count`。
  2. **找到目標節點前一個**：
     - 若 `count == n`，刪除頭節點，返回 `head->next`。
     - 否則遍歷到第 `count - n - 1` 個節點，修改 `next` 指向，跳過第 `n` 個節點。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **14.98 MB**, less than **59.40%** of C++ submissions  
