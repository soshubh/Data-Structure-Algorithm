// https://practice.geeksforgeeks.org/problems/binary-tree-representation/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=binary-tree-representation
class Solution
{
public:
    void create_tree(node *r, vector<int> &v)
    {
        r->data = v[0];
        r->left = newNode(v[1]);
        r->right = newNode(v[2]);
        r->left->left = newNode(v[3]);
        r->left->right = newNode(v[4]);
        r->right->left = newNode(v[5]);
        r->right->right = newNode(v[6]);
    }
};
