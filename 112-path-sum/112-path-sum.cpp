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
    bool hasSum(TreeNode* root, int targetSum, int currSum) {
        if(root == nullptr) return false;
        currSum = currSum + root->val;
        if(currSum == targetSum && root->right == nullptr && root->left == nullptr) return true;
        return hasSum(root->left, targetSum, currSum) || hasSum(root->right, targetSum, currSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int currSum = 0;
        return hasSum(root, targetSum, currSum);
    }
};