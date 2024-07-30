// Tree Traverse
// 1.Level Order 
// 2.Pre Order -- >   Node - left - right
// 3.Post Order -->  left - right - node 
// 4.In Order -- > left Node right 
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

template<typename T>
class BinaryTree
{
    public:
    T data;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryTree(){
        delete left;
        delete right;
    }
};
// Preorder -- > node left right 
void preorder(BinaryTree<int> *root)
{
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
// post order
void postorder(BinaryTree<int> *root)
{
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// Inorder Traversal -- > left node right 
void inorder(BinaryTree<int> *root)
{
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


BinaryTree<int> *takeinput()
{
    int rootData;
    cout<<"Enter the root data : "<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }

    BinaryTree<int> *root=new BinaryTree<int>(rootData);

    queue<BinaryTree<int>*> pending;
    pending.push(root);

    while(pending.size()!=0){
        BinaryTree<int> *front=pending.front();
        pending.pop();

        int leftchild;
        cout<<"Enter the left children of "<<front->data<<": ";
        cin>>leftchild;
        if(leftchild!=-1){
            BinaryTree<int> *child=new BinaryTree<int>(leftchild);
            front->left=child;
            pending.push(child);
        }

        int rightchild;
        cout<<"Enter the right children of "<<front->data<<" : ";
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryTree<int> *child=new BinaryTree<int>(rightchild);
            front->right=child;
            pending.push(child);
        }
    }
    return root;
}

void printTree(BinaryTree<int> *root)
{
    if(root==NULL){
        return;
    }
    queue<BinaryTree<int>*> pending;
    pending.push(root);
    while(pending.size()!=0)
    {
        BinaryTree<int> *front=pending.front();
        pending.pop();

        cout<<front->data<<":";
        if(front->left!=NULL){
            cout<<"Left : "<<front->left->data<<",";
            pending.push(front->left);
        }else{
            cout<<"left -1";
        }
        if(front->right!=NULL){
            cout<<"right :"<<front->right->data;
            pending.push(front->right);
        }else{
            cout<<"Right -1";
        }
        cout<<endl;
    }
}
int main()
{
    BinaryTree<int> *root=takeinput();
    printTree(root);
    // cout<<"Number of Nodes : "<<numNode(root);
    cout<<" Inorder wise : ";
    inorder(root);
    delete root;
}