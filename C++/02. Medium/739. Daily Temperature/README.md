# LeetCode 739. Daily Temperatures
Given an array of integers temperatures represents the daily temperatures,<br>
return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature.<br>
If there is no future day for which this is possible, keep answer[i] == 0 instead.

----

## Approach
- 使用單調遞減 stack 存索引：
  - 遍歷溫度列表 `temperatures`
  - 當 stack 不空且當前溫度大於 stack 頂部索引對應的溫度：
    - 計算天數差 `i - st.back()`
    - 更新答案 `ans[st.back()]`
    - 彈出 stack 頂部
  - 將當前索引推入 stack
- 最終 stack 中剩餘索引對應的答案為 0（之後不會有更高溫度）

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **8 ms**, faster than **96.83%** of C++ submissions  
  - Memory: **104.30 MB**, less than **61.43%** of C++ submissions  
