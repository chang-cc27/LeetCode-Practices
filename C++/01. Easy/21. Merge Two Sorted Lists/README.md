# LeetCode 21. Merge Two Sorted Lists
You are given the heads of two sorted linked lists list1 and list2.<br>
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.<br>
Return the head of the merged linked list.<br>

## Approach
- 使用 **兩指針合併**：
  1. 建立兩個指針分別指向 `list1` 和 `list2`。
  2. 比較當前節點值，將較小的節點加入結果鏈表。
  3. 移動對應指針，重複直到其中一個鏈表走完。
  4. 將未走完的鏈表接到結果鏈表尾部。

---

## Performance
- **Time Complexity:** O(n + m)  (n 與 m 為兩個鏈表長度)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **19.52 MB**, less than **29.41%** of C++ submissions  
