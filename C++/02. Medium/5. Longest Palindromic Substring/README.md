# LeetCode 5. Longest Palindromic Substring
Given a string s, return the longest palindromic substring in s.

## Approach
- 使用 **中心擴展法 (Expand Around Center)**：每個字元或每對相鄰字元都可能是回文中心。  
- 對於每個位置 `i`：  
  1. 若 `s[i] == s[i+1]`，嘗試以這對字元為中心向外擴展。  
  2. 若 `s[i-1] == s[i+1]`，嘗試以 `s[i]` 為中心向外擴展。  
- 每次擴展後計算回文長度，若比目前最長回文長，更新答案。  
- 遍歷所有可能中心即可找到最長回文。

---

## Performance
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **5 ms**, faster than **91.94%** of C++ submissions  
  - Memory: **11.78 MB**, less than **57.30%** of C++ submissions  
