class Solution{
    public:
   
    //Function to find the height of a binary tree.
    int height(struct Node* node)
    {
        // code here 
         if(node==NULL) return 0;
         int left = height(node->left);
         int right = height(node->right);
        if(left > right)
        {
         int h = 1 + left; 
        }
        else
        {
        int h = 1 + right;
        }
      return h;
    }
};
