class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int max_len = 0;
        unordered_set<char> seen;

        for (int i=0; i<int(s.size()); i++) {
            if(seen.find(s[i]) == seen.end()) {
                seen.insert(s[i]);
                max_len = max(max_len, (i-left+1));
            }
            else {
                do{
                    seen.erase(s[left]);
                }while(s[left++] != s[i]);
                seen.insert(s[i]);
                max_len = max(max_len, (i-left+1));
            }
        }

        return max_len;
    }
};
