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
    
    int helper(TreeNode * root, bool &ans) {
        //Helps to find height and ans together O(n)
        if(root == NULL)
        {
            return 1;
        }
        if(!ans) return 0;
        int lh = helper(root->left, ans);
        int rh = helper(root->right, ans);
        if(abs(lh-rh) > 1) ans = false;
        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        bool ans = 1;
        helper(root, ans);
        return ans;
    }
/*
    // O(n*n)
    public:
    bool isBalanced(TreeNode* root) {
        if(root ==  NULL)
        {
            return true;
        }

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        int lh = height(root->left);
        int rh = height(root->right);

        return abs(lh-rh) <= 1 && leftAns && rightAns;
    }

    private: 
    int height(TreeNode * root) {
        if(root == NULL)
        {
            return 0;
        }
        return 1 + max(height(root->left), height(root->right));
    }
*/

};