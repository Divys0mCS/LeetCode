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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ans;
        vector<int> res;
        
        PreOrder(p, ans);
        PreOrder(q, res);
        
        return ans == res; 
    }
    private:
    void PreOrder(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) {
            ans.push_back(INT_MAX);
            return;
        }
        
        ans.push_back(node->val);
        PreOrder(node->left, ans);
        PreOrder(node->right, ans);
    }
};