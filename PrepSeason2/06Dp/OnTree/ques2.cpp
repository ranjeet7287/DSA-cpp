//  Maximum Path Sum | From any node to any node 

int Slove(Node *root,int &res){
    if(root==NULL){
        return 0;
    }
    int l = Slove(root->left,res);
    int r = Slove(root->right,res);

    int temp = max(max(l,r)+root->value,root->value);

    int ans = max(temp,l+r+root->value);

    res = max(res,ans);

    return temp;
}