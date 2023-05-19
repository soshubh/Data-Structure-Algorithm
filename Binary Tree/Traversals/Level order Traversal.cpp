// https://leetcode.com/problems/binary-tree-level-order-traversal/description/
// (LeetCode) 102. Binary Tree Level Order Traversal

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> ans;
        if (root == NULL)
            return {};
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int size = q.size();
            vector<int> l;
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                if (node->left != NULL)
                    q.push(node->left);
                if (node->right != NULL)
                    q.push(node->right);
                l.push_back(node->val);
            }
            ans.push_back(l);
        }
        return ans;
    }
};
