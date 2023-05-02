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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        
        queue<TreeNode *> pendingNodes;
        pendingNodes.push(root);
        int level = 0;
        
        while(!pendingNodes.empty())
        {
            int size = pendingNodes.size();
            if(size==0)
            {
                return ans;
            }
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
            if(level%2==0)
            {
                ans.push_back(row);
            }
            else
            {
                reverse(row.begin(),row.end());
                ans.push_back(row);
            }
            level++;
        }
        return ans;
    }
};