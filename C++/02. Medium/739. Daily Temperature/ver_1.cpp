class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        vector<int> st; // 當棧用，存索引
        st.reserve(n);

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && temperatures[i] > temperatures[st.back()]) {
                ans[st.back()] = i - st.back();
                st.pop_back();
            }
            st.push_back(i);
        }
        return ans;
    }
};
