// Tree which have maximum two children is called BINARY TREE.
// OR Tree where Node have maximum two children
#include<iostream>
#include "binary.h"
using namespace std;

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
    BinaryTreeNode<int> *root=new BinaryTreeNode<int>(1);
    BinaryTreeNode<int> *node1=new BinaryTreeNode<int>(2);
    BinaryTreeNode<int> *node2=new BinaryTreeNode<int>(3);

    root->left=node1;
    root->right=node2;
    printTree(root);
    delete root;
    
}