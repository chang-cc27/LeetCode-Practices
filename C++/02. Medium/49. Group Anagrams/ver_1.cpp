class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (const string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());   // 將字串排序，得到 key
            groups[key].push_back(s);       // 同一 key 的字串放一組
        }

        vector<vector<string>> result;
        for (auto& [key, group] : groups) {
            result.push_back(move(group));
        }

        return result;
    }
};
