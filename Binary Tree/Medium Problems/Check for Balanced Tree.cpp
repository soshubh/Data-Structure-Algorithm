// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-for-balanced-tree

class Solution
{
public:
    int height(Node *root)
    {
        if (root == NULL)
            return 0;

        int l = height(root->left);
        int r = height(root->right);

        return max(l, r) + 1;
    }

    bool isBalanced(Node *root)
    {

        if (root == NULL)
            return true;

        if (isBalanced(root->left) == false)
            return false;

        if (isBalanced(root->right) == false)
            return false;

        int l = height(root->left);
        int r = height(root->right);

        if (abs(l - r) > 1)
            return false;
        else
            return true;
    }
};
