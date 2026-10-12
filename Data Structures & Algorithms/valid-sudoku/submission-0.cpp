class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<9; ++i) {
            unordered_set <char> row;
            unordered_set <char> col;
            for (int j=0; j<9; ++j) {
                if (row.count(board[i][j])) return false;
                if (col.count(board[j][i])) return false;
                if (board[i][j] != '.') row.insert(board[i][j]);
                if (board[j][i] != '.') col.insert(board[j][i]);
            }
        }
        for (int k=0; k<9; ++k) {
            unordered_set <char> st;
            for (int i=0; i<3; ++i) {
                for (int j=0; j<3; ++j) {
                    int row = (k/3) * 3 + i;
                    int col = (k%3) * 3 + j;
                    if (st.count(board[row][col])) return false;
                    if (board[row][col] != '.') st.insert(board[row][col]);
                }
            }
        }
        return true;
    }
};
