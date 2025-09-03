# LeetCode 141. Linked List Cycle: 
Given head, the head of a linked list, determine if the linked list has a cycle in it.<br>
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.<br>
Internally, pos is used to denote the index of the node that tail's next pointer is connected to. <br>
Note that pos is not passed as a parameter.<br>
Return true if there is a cycle in the linked list. Otherwise, return false.

----

# Ver. 1

## Approach
- 使用 **快慢指標 (Floyd's Tortoise and Hare)**：
  - 設兩個指標 `slow` 和 `fast`，初始都指向 `head`。
  - 每次迴圈：
    1. `slow` 前進一步  
    2. `fast` 前進兩步  
  - 若快慢指標相遇，表示鏈表有環。  
  - 若 `fast` 或 `fast->next` 為 nullptr，表示鏈表無環。  

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **8 ms**, faster than **80.40%** of C++ submissions  
  - Memory: **11.86 MB**, less than **53.32%** of C++ submissions
 
----

# Ver. 2

## Approach
- 使用 **Hash Set** 記錄已訪問過的節點：
- 遍歷鏈表，每遇到一個節點，檢查是否已存在於 `seen` 中。  
- 若已存在，表示鏈表有環，返回 true。  
- 若遍歷到 nullptr，表示無環，返回 false。  

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **17 ms**, faster than **7.03%** of C++ submissions  
  - Memory: **14.51 MB**, less than **11.16%** of C++ submissions
