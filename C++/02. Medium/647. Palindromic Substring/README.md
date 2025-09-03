# LeetCode 647. Palindromic Substrings
Given a string s, return the number of palindromic substrings in it.<br>
A string is a palindrome when it reads the same backward as forward.<br>
A substring is a contiguous sequence of characters within the string.<br>

## Approach
- 使用 **中心擴展法 (Expand Around Center)**：每個字元或每對相鄰字元都可能是回文中心。  
- 設 `total` 初始為字串長度（每個單字元都是回文）。  
- 對於每個位置 `i`：  
  1. 若 `s[i] == s[i+1]`，嘗試以這對字元為中心向外擴展，擴展一次就加一次 `total`。  
  2. 若 `s[i-1] == s[i+1]`，嘗試以 `s[i]` 為中心向外擴展，每次擴展加一次 `total`。  
- 遍歷所有可能中心即可計算總回文子串數量。

---

## Performance
- **Time Complexity:** O(n²)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **3 ms**, faster than **89.01%** of C++ submissions  
  - Memory: **8.60 MB**, less than **81.69%** of C++ submissions  
