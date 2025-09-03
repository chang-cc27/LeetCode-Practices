# LeetCode 49. Group Anagrams
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

## Approach
- 使用 **Hash Table**：
  1. 對每個字串 `s` 排序，得到 `key`。
  2. 將相同 `key` 的字串放到同一個 vector 中。
- 最後把hash table的值轉成二維 vector 返回。
- 時間複雜度 O(n * k log k)，其中 n 為字串數量，k 為字串平均長度。

---

## Performance
- **Time Complexity:** O(n * k log k)  
- **Space Complexity:** O(n * k)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **7 ms**, faster than **98.48%** of C++ submissions  
  - Memory: **23.76 MB**, less than **94.93%** of C++ submissions  
