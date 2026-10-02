class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) return 0;
        int i = 0;
        int j = 0;
        int cnt = 0;
        int ans = 0;
        unordered_map <char, int> mp;
        while (i < n && j < n) {
            if (mp[s[j]] == 0) {
                cnt++;
                mp[s[j]]++;
                j++;
            }
            else {
                ans = max(ans, cnt);
                cnt--;
                mp[s[i]]--;
                i++;
            }
        }
        ans = max(ans, cnt);
        return ans;
    }
};
