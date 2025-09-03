class Solution {
public:
    int countSubstrings(string s) {
        int n = int(s.size());
        if (n == 0 || n == 1) {
            return n;
        }
        int total = n;

        for (int i=0; i<n; i++) {
            if(i+1 < n && s[i] == s[i+1]){
                int count = 0;
                while(i - count >= 0 && i + 1 + count < n && s[i - count] == s[i + 1 + count]) {
                    count++;
                    total++;
                }
            }
            
            if(i-1 >= 0 && i+1 < n && s[i-1] == s[i+1]) {
                int count = 0;
                while(i-1-count >= 0 && i+1+count < n && s[i-1-count] == s[i+1+count]) {
                    count++;
                    total++;
                }
            }
        }
        return total;
    }
};
