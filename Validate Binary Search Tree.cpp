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
    bool isValidBST(TreeNode* root) {
       return isBST(root, nullptr,nullptr);
    }

    bool isBST(TreeNode *root, TreeNode *low, TreeNode* high){
        if(!root) return true;
        if(root -> left && root -> left ->val >= root -> val) return false;
        if(root -> right && root -> right->val <= root -> val) return false;
        if(high != nullptr && root -> val >= high -> val) return false;
        if(low != nullptr && root -> val <= low -> val) return false;


        return isBST(root -> left,low,root) && isBST(root -> right,root,high);
    }
};