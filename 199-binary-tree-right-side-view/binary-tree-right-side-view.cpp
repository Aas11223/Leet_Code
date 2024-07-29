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
    void helper(TreeNode* node, vector<int>& ans, int level) {
        //Reverse Preorder
        if (node == NULL) return;
        if (level == ans.size()) ans.push_back(node->val); // As it travels the left subtree it will check that already that level is travelled in right subtree
        helper(node->right, ans, level + 1);
        //we traverse the left subtree in addition to the right subtree is to ensure 
        //we capture the rightmost nodes at each level. If a node does not have a right child, 
        //the left child (if it exists) will be the rightmost node visible at that level. 
        //Thus, to cover all cases, we need to process both subtrees.
        helper(node->left, ans, level + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        helper(root, ans, 0);
        return ans;
    }
};
