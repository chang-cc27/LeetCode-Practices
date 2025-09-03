class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int max_num = 0;

        while(seen.size() > max_num) {
            int count = 0;
            int val = *seen.begin();
            int val_b = val - 1;

            while(seen.erase(val++)) {
                count++;
            }
            while(seen.erase(val_b--)){
                count++;
            }
            max_num = max(max_num, count);
        }
        return max_num;        
    }
};
