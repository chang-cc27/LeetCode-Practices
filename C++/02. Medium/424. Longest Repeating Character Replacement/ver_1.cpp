class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.size();
        vector<int> frequency(26, 0);
        int left = 0, right = 0;
        int max_freq = 0, max_len = 0;

        while(right < n) {
            frequency[s[right] - 'A']++;
            max_freq = max(max_freq, frequency[s[right] - 'A']);

            if((right-left+1) - max_freq > k) {
                frequency[s[left] - 'A']--;
                left++;
            }
            else {
                max_len = max(max_len, (right-left+1));
            }

            right++;
        }
        return max_len;
    }
};
