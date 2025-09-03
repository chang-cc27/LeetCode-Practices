class Solution {
public:
    string longestPalindrome(string s) {
        int n = int(s.size());
        if (n == 0) {
            return {};
        }
        string ans(1, s[0]);

        for (int i=0; i<n; i++) {
            if(i+1 < n && s[i] == s[i+1]){
                int count = 0;
                while(i - count >= 0 && i + 1 + count < n && s[i - count] == s[i + 1 + count]) {
                    count++;
                }
                if(2*(count) > ans.size()) {
                    ans = s.substr(i-count+1, 2*count);
                }
            }
            
            if(i-1 >= 0 && i+1 < n && s[i-1] == s[i+1]) {
                int count = 0;
                while(i-1-count >= 0 && i+1+count < n && s[i-1-count] == s[i+1+count]) {
                    count++;
                }
                if(2*(count)+1 > ans.size()) {
                    ans = s.substr(i-count, 2*count+1);
                }
            }
        }
        return ans;
    }
};
