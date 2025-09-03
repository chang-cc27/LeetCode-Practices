# LeetCode 155. Min Stack
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.<br>
Implement the MinStack class:<br>
MinStack() initializes the stack object.<br>
void push(int val) pushes the element val onto the stack.<br>
void pop() removes the element on the top of the stack.<br>
int top() gets the top element of the stack.<br>
int getMin() retrieves the minimum element in the stack.<br>
You must implement a solution with O(1) time complexity for each function.

----

# Ver. 1

## Approach
- 用 `vector<pair<int,int>>` 來實現 stack，同時存儲：
  1. 元素本身
  2. 當前 stack 的最小值
- Push 時：
  - 若 stack 為空，直接存 `{val, val}`。
  - 否則存 `{val, min(val, st.back().second)}`，更新最小值。
- Pop/Top/GetMin 操作皆為 O(1)。

---

## Performance
- **Time Complexity:** O(1) per operation  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **XX ms**, faster than **YY%** of C++ submissions  
  - Memory: **23.69 MB**, less than **22.13%** of C++ submissions  
 
----

# Ver. 2

## Approach
- 用兩個 stack 實現：
  1. `nums`：存儲所有元素
  2. `mins`：存儲每個元素對應的當前最小值
- Push 時：
  - 將元素推入 `nums`
  - 將 `val` 與 `mins.top()` 比較，推入 `mins`（保持最小值）
- Pop 時：
  - 同時彈出 `nums` 和 `mins`
- Top/GetMin 時直接返回對應 stack 的頂部元素

---

## Performance
- **Time Complexity:** O(1) per operation  
- **Space Complexity:** O(n)  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **3 ms**, faster than **61.88%** of C++ submissions  
  - Memory: **24.48 MB**, less than **9.61%** of C++ submissions  
