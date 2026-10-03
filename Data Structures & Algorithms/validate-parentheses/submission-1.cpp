class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for (char ch : s) {
            if (st.empty() && (ch == ')' || ch == '}' || ch == ']')) return false;
            if (ch == ')') {
                if (st.top() != '(') return false;
                else st.pop();
            }
            else if (ch == ']') {
                if (st.top() != '[') return false;
                else st.pop();
            }
            else if (ch == '}') {
                if (st.top() != '{') return false;
                else st.pop();
            }
            else st.push(ch);
        }
        return st.empty();
    }
};
