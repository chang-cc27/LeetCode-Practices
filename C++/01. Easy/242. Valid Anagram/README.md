# LeetCode 242. Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

----

# Ver. 1

## Approach
- 比較兩字串長度，若不同直接回傳 false。
- 用長度 256 的陣列記錄 ASCII 字元出現頻率：
  1. 遍歷 `s`，對應字元頻率加 1。
  2. 遍歷 `t`，對應字元頻率減 1，若減到小於 0，表示 t 出現了 s 沒有的字元，回傳 false。
- 遍歷完成且沒有出現負數，則兩字串為 anagram。

---

## Performance
- **Time Complexity:** O(n) ，n 為字串長度  
- **Space Complexity:** O(1) ，固定大小 256  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **9.77 MB**, less than **48.43%** of C++ submissions  
 
----

# Ver. 2

## Approach
- 比較兩字串長度，若不同直接回傳 false。
- 用 `unordered_map<char,int>` 記錄字元頻率：
  1. 遍歷 `s`，對應字元頻率加 1。
  2. 遍歷 `t`，對應字元頻率減 1，若減到小於 0，表示 t 出現了 s 沒有的字元，回傳 false。
- 遍歷完成且沒有出現負數，則兩字串為 anagram。

---

## Performance
- **Time Complexity:** O(n) ，n 為字串長度  
- **Space Complexity:** O(n) ，最壞情況每個字元都不同  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **3 ms**, faster than **52.08%** of C++ submissions  
  - Memory: **9.96 MB**, less than **11.70%** of C++ submissions  
