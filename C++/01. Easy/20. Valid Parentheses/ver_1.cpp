class Solution {
public:
    bool isValid(string s) {
        stack<char> seen;
        for (int i=0; i<int(s.size()); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                seen.push(s[i]);
            }
            else {
                if (seen.empty()){
                    return false;
                }
                if (s[i] == ')' && seen.top() != '(') {
                    return false;
                }
                else if (s[i] == '}' && seen.top() != '{') {
                    return false;
                }
                else if (s[i] == ']' && seen.top() != '[') {
                    return false;
                }
                seen.pop();
            }
        }
        if (!seen.empty()) {
            return false;
        }
        return true;
    }
};
