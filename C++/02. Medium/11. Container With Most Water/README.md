# LeetCode 11. Container With Most Water
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are<br>
(i, 0) and (i, height[i]).<br>
Find two lines that together with the x-axis form a container, such that the container contains the most water.<br>
Return the maximum amount of water a container can store.<br>
Notice that you may not slant the container.

## Approach
- 使用 **雙指標 (Two Pointers)** 方法：  
  - 一個指標指向左端 `left`，另一個指向右端 `right`。  
- 計算當前容器面積 `area = min(height[left], height[right]) * (right - left)`，更新最大面積。  
- 每次移動高度較小的指標，因為移動高度較高的指標不會得到更大面積。  
- 重複直到左右指標相遇，最後返回最大面積。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **63.05 MB**, less than **12.40%** of C++ submissions  
