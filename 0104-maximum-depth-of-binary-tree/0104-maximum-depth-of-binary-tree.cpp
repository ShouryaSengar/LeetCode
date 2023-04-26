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
    int maxDepth(TreeNode* root) {
        /*
            Approach 1: Level Order Count
        */
        if(root == NULL)
        {
            return 0;
        }
        queue<TreeNode*> pendingNodes;
        pendingNodes.push(root);
        int level=0;
        while(!pendingNodes.empty())
        {
            int size =  pendingNodes.size();
            while(size-- > 0)
            {
                TreeNode * front = pendingNodes.front();
                pendingNodes.pop();
                if(front->left != NULL)
                {
                    pendingNodes.push(front->left);
                }
                if(front->right != NULL)
                {
                    pendingNodes.push(front->right);
                }
            }
            level++;
        }
        return level;
    }
};