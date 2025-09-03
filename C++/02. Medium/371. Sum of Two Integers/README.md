# LeetCode 371. Sum of Two Integers
Given two integers a and b, return the sum of the two integers without using the operators + and -.

## Approach
- 不使用 `+` 或 `-`，用位運算計算兩數相加。
- 核心概念：
  1. `a ^ b` → 計算不含進位的和
  2. `(a & b) << 1` → 計算進位
- 將進位加到未進位和中，重複此過程直到進位為 0。

---

## Performance
- **Time Complexity:** O(1) ，32 位元整數迴圈最多 32 次  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **XX ms**, faster than **YY%** of C++ submissions  
  - Memory: **7.82 MB**, less than **32.31%** of C++ submissions  
