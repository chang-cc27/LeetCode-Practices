# LeetCode 417. Pacific Atlantic Water Flow
There is an m x n rectangular island that borders both the Pacific Ocean and Atlantic Ocean.<br>
The Pacific Ocean touches the island's left and top edges, and the Atlantic Ocean touches the island's right and bottom edges.<br>

The island is partitioned into a grid of square cells.<br>
You are given an m x n integer matrix heights where heights[r][c] represents the height above sea level of the cell at coordinate (r, c).<br>

The island receives a lot of rain, and the rain water can flow to neighboring cells directly north, south, east, and west if the neighboring cell's height is less than or equal to the current cell's height.<br>
Water can flow from any cell adjacent to an ocean into the ocean.<br>

Return a 2D list of grid coordinates result where result[i] = [ri, ci] denotes that rain water can flow from cell (ri, ci) to both the Pacific and Atlantic oceans.

## Approach
- 使用 **DFS + 標記矩陣** 方法。  
- 核心思路：每個位置要判斷能否流向太平洋和大西洋。  
- 步驟：  
  1. 建立兩個矩陣 `rd_2_pac` 和 `rd_2_atl`，分別標記能流到 Pacific 和 Atlantic 的位置。  
  2. 從 Pacific 邊界（第一行 & 第一列）出發，用 DFS 標記所有可達位置。  
  3. 從 Atlantic 邊界（最後行 & 最後列）出發，用 DFS 標記所有可達位置。  
  4. 最後遍歷整個矩陣，將 **兩個矩陣都為 1 的位置** 加入結果，代表該位置水可以流向兩個海洋。  

---

## Performance
- **Time Complexity:** O(m * n) （每個格子最多被 DFS 訪問一次）  
- **Space Complexity:** O(m * n) （兩個矩陣 + DFS 遞迴棧空間）  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **1 ms**, faster than **93.85%** of C++ submissions  
  - Memory: **23.64 MB**, less than **49.31%** of C++ submissions
