#include<iostream>
#include<vector>
#include<queue>
#include "binary.h"
using namespace std;


BinaryTreeNode<int> *takeinput()
{
    int rootData;
    cout<<"Enter the root Data : ";
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pending;
    pending.push(root);

    while(pending.size()!=0){
        BinaryTreeNode<int> *front=pending.front();
        pending.pop();

        cout<<"Enter the left child of "<<front->data<<endl;
        int leftchild;
        cin>>leftchild;
        if(leftchild!=-1){
            BinaryTreeNode<int> *child=new BinaryTreeNode<int>(leftchild);
            front->left=child;
            pending.push(child);
        }

        cout<<"Enter the right child of "<<front->data<<endl;
        int rightchild;
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryTreeNode<int> *child=new BinaryTreeNode<int>(rightchild);
            front->right=child;
            pending.push(child);
        }
    }
    return root;
}
void printTree(BinaryTreeNode<int> *root)
{
    // Base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left !=NULL ){
        cout<<"left :"<<root->left->data<<",";
    }
    if(root->right!=NULL){
        cout<<"Right :"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}
int main(){
    BinaryTreeNode<int> *root=takeinput();
    printTree(root);
}
