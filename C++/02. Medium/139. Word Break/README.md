# LeetCode 139. Word Break
Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.<br>
Note that the same word in the dictionary may be reused multiple times in the segmentation.

## Approach
- 使用 **動態規劃 (Dynamic Programming)**：  
  - `dp[i]` 表示字串 `s[0..i-1]` 是否可以被字典拆分。  
- 初始化：`dp[0] = true`，空字串可以拆分。  
- 遍歷字串每個位置 `i`，嘗試向左擴展子字串 `w = s[j..i-1]`，檢查：
  1. `w` 是否在字典中  
  2. `dp[i - w.length()]` 是否為 true  
  - 若兩者成立，`dp[i] = true`，並 break。  
- 為了減少不必要檢查，設定 `w.length() <= maxlen`，其中 `maxlen` 是字典中最長字串長度。  
- 最終返回 `dp[n]` 表示整個字串是否可以拆分。

---

## Performance
- **Time Complexity:** O(n * m * l)，其中 n 為字串長度，m 為字典大小，l 為字典中字串平均長度  
- **Space Complexity:** O(n + m * l)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **10.43 MB**, less than **87.83%** of C++ submissions  
