// https://practice.geeksforgeeks.org/problems/postorder-traversal/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postorder-traversal

void solve(Node *r, vector<int> *a)
{
    if (r == NULL)
        return;
    solve(r->left, a);
    solve(r->right, a);
    a->push_back(r->data);
}
vector<int> postOrder(Node *root)
{
    vector<int> a;
    solve(root, &a);
    return a;
}
