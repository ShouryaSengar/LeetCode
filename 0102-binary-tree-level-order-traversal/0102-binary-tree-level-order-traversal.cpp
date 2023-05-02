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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        queue<TreeNode *> pendingNodes;
        pendingNodes.push(root);
        
        while(!pendingNodes.empty())
        {
            int size = pendingNodes.size();
            vector<int> row;
            while(size-- > 0)
            {
                TreeNode * front = pendingNodes.front();
                pendingNodes.pop();
                row.push_back(front->val);
                if(front->left != NULL)
                {
                    pendingNodes.push(front->left);
                }
                if(front->right != NULL)
                {
                    pendingNodes.push(front->right);
                }
            }
            ans.push_back(row);
        }
        return ans;
    }
};