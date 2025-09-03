class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = int(nums.size());
        int sum = 0, total = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
            total += i;
        }

        if(sum == total){
            return n;
        }
        return n - (sum - total);
    }
};
