class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = int(temperatures.size());
        // Initialize all to 0.
        vector<int> ans(n, 0);
        // Record the index.
        stack<int> temp;

        // 實際go through一次可以懂
        for(int i=0; i<n; i++) {
            // 當今天溫度比stack.top()那天高，更新那天的等待天數.
            while(!temp.empty() && temperatures[i] > temperatures[temp.top()]) {
                int prevday = temp.top();
                temp.pop();
                ans[prevday] = i-prevday;
            }
            temp.push(i);
        }
        return ans;
    }
};
