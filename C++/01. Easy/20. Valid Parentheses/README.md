# LeetCode 20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',<br>
determine if the input string is valid.<br>
An input string is valid if:<br>
Open brackets must be closed by the same type of brackets.<br>
Open brackets must be closed in the correct order.<br>
Every close bracket has a corresponding open bracket of the same type.

## Approach
- 使用 **Stack**：
  1. 遇到左括號 `(`、`{`、`[` → 推入 stack。
  2. 遇到右括號 `)`、`}`、`]` → 檢查 stack 是否為空，且 stack 頂端是否對應：
     - 不對或 stack 空 → 返回 false
     - 對應 → pop stack
  3. 最後 stack 為空 → 字串有效；否則無效。

---

## Performance
- **Time Complexity:** O(n)  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **0 ms**, faster than **100%** of C++ submissions  
  - Memory: **8.76 MB**, less than **65.03%** of C++ submissions  
