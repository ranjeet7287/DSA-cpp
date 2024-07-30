#include<iostream>
#include<vector>
#include<queue>
#include "binary.h"
using namespace std;

BinaryTreeNode<int> *takeinput()
{
    int rootData;
    cout<<"Enter data : ";
    cin>>rootData;

    if(rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int> *leftchild=takeinput();
    BinaryTreeNode<int> *rightchild=takeinput();
    root->left=leftchild;
    root->right=rightchild;
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
int main()
{
    BinaryTreeNode<int> *root=takeinput();
    printTree(root);
    delete root;
}