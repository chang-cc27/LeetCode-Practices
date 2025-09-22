# LeetCode 435. Non-overlapping Intervals
Given an array of intervals intervals where intervals[i] = [starti, endi],
return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.<br>

Note that intervals which only touch at a point are non-overlapping. For example, [1, 2] and [2, 3] are non-overlapping.

## Approach
- 使用 **Greedy Algorithm**：透過選擇「最早結束」的區間，最大化能保留的不重疊區間數量。  
- 步驟：  
  1. 將 **結束時間** 升序排序。  
  2. 初始化 `end = intervals[0][1]` 並將 `count = 1`。  
  3. 依序遍歷區間：  
     - 若當前區間起點 `>= end`，則更新 `end = 當前區間結束` 並增加計數。  
     - 否則，代表有重疊，跳過此區間。  
  4. 最後結果為 `n - count`，即刪除的最少區間數。  

---

## Performance
- **Time Complexity:** O(n log n) （主要來自排序）  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **42 ms**, faster than **70.08%** of C++ submissions  
  - Memory: **94.02 MB**, less than **38.64%** of C++ submissions
