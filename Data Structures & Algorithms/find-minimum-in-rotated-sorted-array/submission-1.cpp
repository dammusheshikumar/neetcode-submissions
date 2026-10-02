class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        if (n == 1) return nums[0];
        int mn = INT_MAX;
        int l = 0, r = n-1;
        while (l <= r) {
            int m = l + (r - l)/2;
            if (nums[r] < nums[m]) {
                mn = min(mn, nums[m]);
                l = m + 1;
            }
            else {
                mn = min(mn, nums[m]);
                r = m - 1;
            }
        }
        return mn;
    }
};
