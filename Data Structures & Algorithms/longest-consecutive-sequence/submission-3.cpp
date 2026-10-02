class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        unordered_set <int> st;
        for (int num : nums) st.insert(num);
        int ans = 0;
        for (int num : nums) {
            if (!st.count(num-1)) {
                int x = num;
                int cnt = 1;
                while (st.count(x+1)) {
                    cnt++;
                    x++;
                }
                ans = max(ans, cnt);
            }
        }
        return ans;
    }
};
