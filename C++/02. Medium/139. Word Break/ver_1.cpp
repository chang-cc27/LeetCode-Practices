class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        // dp[i] 表示 s[0..i-1] 是否可被拆分
        int n = s.length(); // 8
        vector<bool> dp(n + 1, false);
        dp[0] = true;
        unordered_set<string> dict(wordDict.begin(), wordDict.end());

        // 找最長的字
        int maxlen = -1;
        for (auto x : dict) {
            maxlen = max(int(x.length()), maxlen);
        }

        for (int i = 1; i <= n; i++) {
            int j = i - 1;
            string w = "";
            while (j >= 0 && w.length() <= maxlen) {
                //若 w 在字典中，且前綴 s[0..j-1]（也就是 dp[j]，等同 dp[i - w.length()]）可被拆分
                w = s.substr(j,i-j);
                if (dict.find(w) != dict.end() && dp[i - w.length()] == true) {
                    dp[i] = true;
                    break;
                }
                j--;
            }
        }
        // 回傳整個字串 s[0..n-1] 是否可被拆分
        return dp[n];
    }
};
