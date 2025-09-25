# LeetCode 56. Merge Intervals
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals,<br>
and return an array of the non-overlapping intervals that cover all the intervals in the input.

## Approach
- 使用 **Greedy + Sorting** 方法。  
- 步驟：
   - 先將區間依照起點 `intervals[i][0]` 升序排序。  
   - 初始化結果陣列 `ans`，加入第一個區間。  
   - 遍歷剩餘區間：
      - 若當前區間起點比先前區間終點`ans.back()[1]`小，表示有重疊，更新終點位置。  
      - 否則，直接將當前區間加入 `ans`。
- 最後回傳 `ans`。

---

## Performance
- **Time Complexity:** O(n log n) （排序花費時間）  
- **Space Complexity:** O(n) （儲存結果陣列）  
- 在 LeetCode 上測資的執行表現：
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **23.84 MB**, less than **57.67%** of C++ submissions
