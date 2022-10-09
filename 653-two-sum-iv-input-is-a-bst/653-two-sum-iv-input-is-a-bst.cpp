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
    //unordered_set<int> us;
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> us;
        return find(root, k, us);
    }
    
    bool find(TreeNode* root, int k, unordered_set<int>& us){
        if(root == nullptr) return false;
        int rem = k-root->val;
        if(us.find(rem) != us.end()){
            return true;
        }
        us.insert(root->val);
        return find(root->left, k, us) || find(root->right, k, us);
    }
};

// bool findTarget(TreeNode* root, int k) {
//         unordered_set<int> set;
//         return dfs(root, set, k);
//     }
    
//     bool dfs(TreeNode* root, unordered_set<int>& set, int k){
//         if(root == NULL)return false;
//         if(set.count(k - root->val))return true;
//         set.insert(root->val);
//         return dfs(root->left, set, k) || dfs(root->right, set, k);
//     }


// public:
//     bool findTarget(TreeNode* root, int k) {
//         if (!root) return false;
//         if (s.count(k - root->val)) return true;
//         s.insert(root->val);
//         return findTarget(root->left, k) || findTarget(root->right, k);
//     }
    
// private:
//     unordered_set<int> s;
// };