# Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.<br>
You may assume that each input would have exactly one solution, and you may not use the same element twice.<br>
You can return the answer in any order.<br>

## Approach
使用 **Hash Table** 來記錄已經看過的數字及其索引。  
- 遍歷 `nums`，對於每個數字 `nums[i]`，計算補數 `key = target - nums[i]`。  
- 如果補數已經存在於 `seen`，回傳對應的索引。  
- 否則，把當前數字與索引存入 `seen`。

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **14.74 MB**, less than **50.49%** of C++ submissions 
