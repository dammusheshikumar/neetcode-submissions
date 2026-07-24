/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void preOrder(TreeNode* root, int &count, int mx) {
        if (!root) return ;
        if (root->val >= mx) count++;
        mx = max(mx, root->val);
        preOrder(root->left, count, mx);
        preOrder(root->right, count, mx);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;
        int mx = INT_MIN;
        preOrder(root, count, mx);
        return count;
    }
};
