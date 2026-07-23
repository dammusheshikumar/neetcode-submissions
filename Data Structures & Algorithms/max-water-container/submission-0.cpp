class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while (i < j) {
            int mn = min(heights[i], heights[j]);
            ans = max(ans, mn * (j-i));
            if (heights[i] <= heights[j]) i++;
            else j--;
        }
        return ans;
    }
};
