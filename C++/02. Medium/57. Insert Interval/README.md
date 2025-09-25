# LeetCode 57. Insert Interval
You are given an array of non-overlapping intervals intervals where intervals[i] = [starti, endi] represent the start and the end of the ith interval and intervals is sorted in ascending order by starti. You are also given an interval newInterval = [start, end] that represents the start and end of another interval.

Insert newInterval into intervals such that intervals is still sorted in ascending order by starti and intervals still does not have any overlapping intervals (merge overlapping intervals if necessary).

Return intervals after the insertion.

Note that you don't need to modify intervals in-place. You can make a new array and return it.

----

# Ver. 1

## Approach
- 使用 **Greedy + Interval Merging** 方法，使用 **while loop** 表示。  
- 步驟：
   1. 遍歷原區間，將所有完全在 `newInterval` 之前的區間直接加入結果 `ans`。  
   2. 對於與 `newInterval` 有重疊的區間，合併成新的區間：
      - `newInterval[0] = min(newInterval[0], intervals[i][0])`  
      - `newInterval[1] = max(newInterval[1], intervals[i][1])`  
   3. 將合併後的 `newInterval` 加入結果，並把剩餘區間加入 `ans`。  
- 最後回傳 `ans`。

---

## Performance
- **Time Complexity:** O(n) （遍歷所有區間一次）  
- **Space Complexity:** O(n) （儲存結果陣列）  
- 在 LeetCode 上測資的執行表現：
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **21.66 MB**, less than **74.58%** of C++ submissions
 
----

# Ver. 2

## Approach
- 方法與Ver. 1類似，不過改用 **for loop** 表示。  
- 步驟：
   1. 遍歷原區間：
      - 若 `newInterval[0] > intervals[i][1]`，表示當前區間在 `newInterval` 之前，直接加入結果 `ans`。
      - 若 `newInterval[1] < intervals[i][0]`，表示當前區間在 `newInterval` 之後，先加入 `newInterval`，再把剩餘區間加入結果並回傳。
      - 否則，表示有重疊，更新 `newInterval`：
         - `newInterval[0] = min(newInterval[0], intervals[i][0])`  
         - `newInterval[1] = max(newInterval[1], intervals[i][1])`
   2. 若遍歷完所有區間，最後將合併後的 `newInterval` 加入結果。
- 最後回傳 `ans`。

---

## Performance
- **Time Complexity:** O(n) （遍歷所有區間一次）  
- **Space Complexity:** O(n) （儲存結果陣列）  
- 在 LeetCode 上測資的執行表現：
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **21.88 MB**, less than **20.25%** of C++ submissions
