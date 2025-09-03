# LeetCode 206. Reverse Linked List
Given the head of a singly linked list, reverse the list, and return the reversed list.

## Approach
- 使用 **迭代法**反轉單鏈表：
  1. 用三個指標追蹤：`prev`、`current`、`next`。
  2. 每步將 `current->next` 指向 `prev`。
  3. 指標依序前移，直到走完整個鏈表。
- 時間複雜度 O(n)，空間複雜度 O(1)。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **13.20 MB**, less than **90.71%** of C++ submissions  
