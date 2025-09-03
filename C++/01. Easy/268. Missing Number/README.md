# LeetCode 268. Missing Number
Given an array nums containing n distinct numbers in the range [0, n], <br>
return the only number in the range that is missing from the array.

----

# Ver. 1

## Approach
- 使用 **XOR 位運算**：
  - 將所有數字與索引依次 XOR，因為相同的數字 XOR 會消掉。  
  - 最後剩下的就是缺失的數字。  
- 優點：不需要額外空間，且邊界（缺失 0 或 n）自動處理。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **21.74.86 MB**, less than **70.18%** of C++ submissions
 
----

# Ver. 2

## Approach
- 利用 **數學公式**：
  - 設 `n` 為陣列長度，總和應該是 `0 + 1 + 2 + ... + n = n*(n+1)/2`。  
  - 遍歷陣列計算實際總和 `sum`，缺失的數字就是 `total_sum - sum`。  
- 另一種理解方式：
  - 計算差值：`missing = n - (sum - total_of_indices)`  
  - 保證邊界情況（缺失數字可能是 0 或 n）也正確。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **21.93 MB**, less than **13.89%** of C++ submissions  
