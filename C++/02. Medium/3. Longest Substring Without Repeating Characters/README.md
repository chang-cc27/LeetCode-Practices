# LeetCode 3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.

## Approach
- 使用 **滑動視窗 (Sliding Window)** 搭配 `unordered_set` 記錄目前子串中出現過的字元。  
- 設兩個指標 `left` 和 `i`，`i` 遍歷整個字串，`left` 指向當前子串起始位置。  
- 當遇到重複字元時，從左邊移除字元直到重複字元被移除，並更新 `left`。  
- 每次更新 `max_len` 為目前視窗長度。  
- 這樣每個字元最多被插入與刪除一次，維持線性時間。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(min(n, a))，其中 a 為字元種類數（例如 ASCII 128）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **16 ms**, faster than **35.32%** of C++ submissions  
  - Memory: **14.37 MB**, less than **22.45%** of C++ submissions  
