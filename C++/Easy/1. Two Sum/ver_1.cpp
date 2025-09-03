class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash Table
        unordered_map<int, int> seen;

        for (int i=0; i<int(nums.size()); i++) {
            // Key Setting
            int key = target - nums[i];
            auto it = seen.find(key);
            if(it != seen.end()) {
                return {it->second, i}; 
            }
            seen.insert({nums[i], i});
        }
        return {};
    }
};
