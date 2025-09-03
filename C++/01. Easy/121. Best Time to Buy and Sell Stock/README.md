# LeetCode 121. Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day.<br>
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.<br>
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

## Approach
- 單次買賣股票求最大利潤。
- 遍歷價格：
  1. 記錄到目前為止的最低價 `min_value`。
  2. 計算當前價格賣出能得到的利潤 `prices[i] - min_value`。
  3. 更新最大利潤 `max_profit`。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **97.29 MB**, less than **86.84%** of C++ submissions  
