# LeetCode 39. Combination Sum
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target.<br>
You may return the combinations in any order.<br>
The same number may be chosen from candidates an unlimited number of times.<br>
Two combinations are unique if the frequency of at least one of the chosen numbers is different.<br>
The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

## Approach
這題屬於 **Backtracking 回溯法** 經典題：  
- 要從 `candidates` 中挑選數字，能重複使用，組合總和剛好等於 `target`。  
- 每次回溯函式帶入：
  - `start`：當前搜索起點，避免重複組合（確保組合是遞增序列）。  
  - `target`：目前剩餘總和。  
- 若 `target < 0` → 無解，回溯。  
- 若 `target == 0` → 收集目前 `path` 到 `ans`。  
- 否則，遍歷 `candidates[start..]`，遞迴探索。  

---

## Performance
- **Time Complexity:** O(N^(T/min))  
  - N 為候選數量，T 為 target，min 為候選數中最小值  
  - 每次選或不選，每個遞迴深度最多 target/min  
- **Space Complexity:** O(T/min)  
  - 遞迴深度與當前 path 最多為 target/min  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **14.49 MB**, less than **38.62%** of C++ submissions  
