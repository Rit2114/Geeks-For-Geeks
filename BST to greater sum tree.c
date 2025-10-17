class Solution {
  public:
    void transformTree(Node *root) {
        // code here
        if(!root){return;}
      solve(root->right,sum);
      int rootval=root->data;
      root->data=sum;
      sum+=rootval;
      solve(root->left,sum);
    }
    void transformTree(Node *root) {
        // code here
        int sum=0;
        solve(root,sum);
    }
};
