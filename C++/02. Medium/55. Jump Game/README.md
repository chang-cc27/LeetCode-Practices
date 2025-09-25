# 55. Jump Game
You are given an integer array nums.<br>
You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.<br>

Return true if you can reach the last index, or false otherwise.

----

# Ver. 1

## Approach
- 使用 **Greedy**（貪心法）。  
- 維護一個 `furthest` 變數，紀錄目前能跳到的最遠位置。  
- 迴圈檢查：
   - 若 `i > furthest`，代表走不到該位置，回傳 `false`。  
   - 更新 `furthest = max(furthest, i + nums[i])`。  
   - 如果 `furthest >= n-1`，代表能到最後，回傳 `true`。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **52.36 MB**, less than **35.11%** of C++ submissions
 
----

# Ver. 2

## Approach
- 使用 **DFS / Backtracking** 方法。  
- 定義函數 `search(nums, end)`，檢查是否能跳到 `end` 位置。  
- 對 `end` 往前回溯：
   - 若 `nums[end-i] >= i`，代表能從 `end-i` 跳到 `end`。
   - 如果 `end-i == 0`，回傳 `true`，表示可以從起點到達。
   - 否則遞迴呼叫 `search(nums, end-i)`。
- 若所有可能都失敗，回傳 `false`。

---

## Performance
- **Time Complexity:** O(2^n) 最壞情況會檢查所有可能路徑，效率較低。  
- **Space Complexity:** O(n) 遞迴呼叫堆疊深度。 
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100.00%** of C++ submissions  
  - Memory: **52.53 MB**, less than **18.91%** of C++ submissions
