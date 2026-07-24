class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> st;
        for (int ast : asteroids) {
            if (ast > 0) st.push(ast); 
            else {
                while (!st.empty() && st.top() > 0 && st.top() < abs(ast)) {
                    st.pop();
                }
                if (!st.empty() && st.top() == abs(ast)) st.pop();
                else if (st.empty() || st.top() < 0) st.push(ast);
            }
        }
        vector <int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};