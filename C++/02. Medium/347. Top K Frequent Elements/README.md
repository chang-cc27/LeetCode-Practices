# LeetCode 347. Top K Frequent Elements
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

## Approach
- 使用 **Hash Table**計算每個元素出現的頻率。
- 用 **min-heap** 維護頻率最大的 k 個元素：
  1. Min-heap中存 `(頻率, 元素)` pair，堆頂是頻率最小的元素。
  2. 當heap大小超過 k 時，彈出堆頂，保留頻率最大的 k 個。
- 最後將heap中元素 pop 出，並反轉順序以從高到低排列。
- 時間複雜度 O(n log k)，空間複雜度 O(n + k)。

---

## Performance
- **Time Complexity:** O(n log k)  
- **Space Complexity:** O(n + k)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **18.37 MB**, less than **24.21%** of C++ submissions  
