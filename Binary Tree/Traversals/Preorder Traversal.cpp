// https://practice.geeksforgeeks.org/problems/preorder-traversal/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=preorder-traversal

void solve(Node *r, vector<int> &a)
{
    if (r == 0)
        return;

    a.push_back(r->data);
    solve(r->left, a);
    solve(r->right, a);
}

vector<int> preorder(Node *root)
{
    vector<int> a;
    solve(root, a);
    return a;
}
