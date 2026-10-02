class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set <vector <int>> st;
        vector <vector <int>> ans;
        for (int i=0; i<n; ++i) {
            unordered_map <int, bool> mp; 
            for (int j=i+1; j<n; ++j) {
                int x = 0 - (nums[i] + nums[j]);
                if (mp[x]) {
                    vector <int> temp = {nums[i], nums[j], x};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                mp[nums[j]] = true;
            }
        }
        for (auto it : st) ans.push_back(it);
        return ans;
    }
};
