https : //practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#
        /*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
        vector<int>
        reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
    queue<Node *> q;

    if (root == NULL)
    {
        return v;
    }
    q.push(root);
    while (q.empty() == false)
    {
        Node *t = q.front();
        v.push_back(t->data);
        if (t->right != NULL)
        {
            q.push(t->right);
        }
        if (t->left != NULL)
        {
            q.push(t->left);
        }
        q.pop();
    }
    reverse(v.begin(), v.end());
    return v;
}