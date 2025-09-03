class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> seen;
        for (char c:s) {
            seen[c]++;
        }
        for (char c:t) {
            seen[c]--;
            if (seen[c] < 0) {
                return false;
            }
        }
        return true;
    }
};
