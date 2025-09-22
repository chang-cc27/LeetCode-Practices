# LeetCode 424. Longest Repeating Character Replacement
You are given a string s and an integer k.<br>
You can choose any character of the string and change it to any other uppercase English character.<br>
You can perform this operation at most k times.<br>

Return the length of the longest substring containing the same letter you can get after performing the above operations.

## Approach
- 使用 **Sliding Window + Hash Table** 方法。  
- 核心思路：維護一個滑動窗口，使得窗口內最多可以有 `k` 個非目標字元替換成同一字元。  
- 遍歷字串 `s`：  
  1. 用 `frequency` 陣列紀錄窗口內各字元出現次數。  
  2. 用 `max_freq` 紀錄當前窗口內出現次數最多的字元。  
  3. 若窗口長度減去 `max_freq` 大於 `k`，表示需要替換的字元超過允許數量，縮小左邊界 `left++`，並更新 `frequency`。  
  4. 否則，更新 `max_len` 為窗口長度。  
- 最後回傳 `max_len`。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1) （固定大小的 26 個字母陣列）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **10.88 MB**, less than **69.95%** of C++ submissions
