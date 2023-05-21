// https://leetcode.com/problems/binary-tree-maximum-path-sum/description

class Solution
{
public:
    int path(TreeNode *r, int &a)
    {

        if (r == nullptr)
            return 0;

        const int l = max(0, path(r->left, a));
        const int rh = max(0, path(r->right, a));
        a = max(a, r->val + l + rh);
        return r->val + max(l, rh);
    }
    int maxPathSum(TreeNode *root)
    {
        int c = INT_MIN;
        path(root, c);
        return c;
    }
};
