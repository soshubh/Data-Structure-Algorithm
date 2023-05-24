// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=search-a-node-in-bst

bool search(Node *r, int x)
{
    if (r == NULL)
        return false;
    if (r->data == x)
        return true;
    if (r->data > x)
        return search(r->left, x);
    else
        return search(r->right, x);
}
