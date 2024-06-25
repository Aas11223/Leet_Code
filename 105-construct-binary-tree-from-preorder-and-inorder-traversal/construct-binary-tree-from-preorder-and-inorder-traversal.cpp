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
    TreeNode* helper(vector<int>& preorder, unordered_map<int, int>& inorder_map, int& preorder_index, int inorder_left, int inorder_right) {
        if (inorder_left > inorder_right) {
            return nullptr;
        }

        int root_val = preorder[preorder_index++];
        TreeNode* root = new TreeNode(root_val);
        root->left = helper(preorder, inorder_map, preorder_index, inorder_left, inorder_map[root_val] - 1);
        root->right = helper(preorder, inorder_map, preorder_index, inorder_map[root_val] + 1, inorder_right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorder_map;
        for (int i = 0; i < inorder.size(); ++i) {
            inorder_map[inorder[i]] = i;
        }
        int preorder_index = 0;
        return helper(preorder, inorder_map, preorder_index, 0, inorder.size() - 1);
    }
};