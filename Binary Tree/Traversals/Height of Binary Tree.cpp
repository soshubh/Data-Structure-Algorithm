// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=height-of-binary-tree

class Solution
{
public:
    int height(struct Node *node)
    {
        if (node == NULL)
            return 0;

        int l = height(node->left);
        int r = height(node->right);

        return 1 + max(l, r);
    }
};
