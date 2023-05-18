void solve(Node *r, vector<int> *a)
{
    if (r == NULL)
        return;
    solve(r->left, a);
    a->push_back(r->data);
    solve(r->right, a);
}

class Solution
{
public:
    vector<int> inOrder(Node *root)
    {
        vector<int> a;
        solve(root, &a);
        return a;
    }
};
