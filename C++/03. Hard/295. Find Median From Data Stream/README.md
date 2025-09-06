# LeetCode 295. Find Median from Data Stream
The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value,<br>
and the median is the mean of the two middle values.<br>
For example, for arr = [2,3,4], the median is 3.<br>
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.<br>
Implement the MedianFinder class:<br>
MedianFinder() initializes the MedianFinder object.<br>
void addNum(int num) adds the integer num from the data stream to the data structure.<br>
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.

----

# Ver. 1

## Approach
使用 **max-heap** (`lower`) 保存數列左半部（較小的數），**min-heap** (`upper`) 保存右半部（較大的數）。
- 插入數字時：
  1. 若小於等於 max-heap 的最大值 → 放入 `lower`  
  2. 否則放入 `upper`
- 調整兩個堆的大小，使它們 **size 差不超過 1**。
- 取得中位數：
  - 若大小相等 → `(lower.top() + upper.top()) / 2`
  - 否則 → 堆中元素較多的一方的 top
- 插入: **O(log n)**, 取中位數: **O(1)**
---

## Performance
- **Time Complexity:**  
  - `addNum`: O(log n)
  - `findMedian`: O(1)  
- **Space Complexity:** O(n)  
  - 存放所有數字的兩個heap
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **68 ms**, faster than **53.10%** of C++ submissions  
  - Memory: **148.45 MB**, less than **45.79%** of C++ submissions  
 
----

# Ver. 2

## Approach
**有序集合 (multiset) + 指標 mid** ：

- 使用 `multiset` 保持數列**自動排序**。
- 使用一個 iterator `mid` 指向中位數：
  - 插入數字後，依據數值與 `mid` 的大小以及集合大小奇偶性調整 `mid`。
- 取得中位數：
  - 若集合大小為奇數 → `*mid`
  - 若為偶數 → `(*mid + *next(mid)) / 2.0`

- 插入 **O(log n)**，查中位數 **O(1)**。

---

## Performance
- **Time Complexity:**  
  - `addNum`: O(log n)  (multiset 插入)  
  - `findMedian`: O(1)  
- **Space Complexity:** O(n)  
  - 存放所有數字的 multiset  
- 在 LeetCode 上測資的執行表現：  
  - Runtime: **95 ms**, faster than **18.48%** of C++ submissions  
  - Memory: **163.05 MB**, less than **5.01%** of C++ submissions  
