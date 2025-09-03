class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq.reserve(nums.size());  // 預留空間避免 rehash

        // 計數頻率
        for (int num : nums) {
            freq[num]++;
        }

        // heap，存 pair<頻率, 元素>，頻率小的在堆頂
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> minHeap;

        for (auto& [num, count] : freq) {
            minHeap.emplace(count, num);
            if ((int)minHeap.size() > k) {
                minHeap.pop();  // 保持堆大小不超過 k
            }
        }

        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        // 因為是頻率從小到大 pop 出來，結果反轉更符合常用習慣
        reverse(result.begin(), result.end());

        return result;
    }
};
