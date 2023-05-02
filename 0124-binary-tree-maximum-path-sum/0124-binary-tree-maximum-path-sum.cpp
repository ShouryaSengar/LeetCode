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
    
    int helper(TreeNode* root, int &maxi) {
        
        if(root == NULL)
            return 0;
        
        int leftAns = max(0, helper(root->left, maxi));
        int rightAns = max(0, helper(root->right, maxi));
        
        int maxPath = root->val + leftAns + rightAns;
        maxi = max(maxi, maxPath);
            
        return root->val + max(leftAns, rightAns);
    }
    
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        helper(root, maxi);
        return maxi;
    }
};