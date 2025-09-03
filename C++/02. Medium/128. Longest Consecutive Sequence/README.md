# LeetCode 128. Longest Consecutive Sequence
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.<br>
You must write an algorithm that runs in O(n) time.

## Approach
- 用 `unordered_set` 存所有數字，確保查找是 O(1)。<br>
- 每次從集合中隨機拿一個數，向左向右擴展，直到不是連續數。<br>
- 擴展過的數字從集合中移除，避免重複計算。<br>
- 每次擴展記錄長度，更新最長值。<br>
- 因為每個數只會被刪一次，所以總時間複雜度是 O(n)。

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **82 ms**, faster than **59.26%** of C++ submissions  
  - Memory: **88.80 MB**, less than **64.95%** of C++ submissions  
