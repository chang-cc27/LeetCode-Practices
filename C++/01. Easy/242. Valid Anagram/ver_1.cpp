class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        int freq[256] = {0}; // 所有 ASCII 字元
        for (char c : s) {
            freq[(unsigned char)c]++;
        }
        for (char c : t) {
            if (--freq[(unsigned char)c] < 0) {
                return false;
            }
        }
        return true;
    }
};
