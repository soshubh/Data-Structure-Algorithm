// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=diameter-of-binary-tree

class Solution
{
public:
    int solve(Node *r, int &c)
    {
        if (r == NULL)
            return 0;

        int l = solve(r->left, c);
        int rh = solve(r->right, c);
        c = max(c, l + rh);
        return 1 + max(l, rh);
    }
    int diameter(Node *root)
    {
        int c = 0;
        solve(root, c);
        return c + 1;
    }
};
