// https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1

int findCeil(Node *root, int input)
{
    int c = -1;
    while (root)
    {
        if (root->data == input)
        {
            c = root->data;
            return c;
        }
        if (input > root->data)
            root = root->right;
        else
        {
            c = root->data;
            root = root->left;
        }
    }
    return c;
}
