class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n = nums.length;
        int[] right = new int[n+1];
        right[n] = 1;
        for (int i=n-1; i>=0; i--) {
            right[i] = right[i+1] * nums[i];
        }
        int left = 1;
        int[] ans = new int[n];
        for (int i=0; i<n; ++i) {
            ans[i] = left * right[i+1];
            left *= nums[i];
        }
        return ans;
    }
}  
