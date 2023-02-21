#include<iostream>
#include "treenode.h"
using namespace std;

TreeNode<int>* takeinput(){    //  return the root
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int> *root=new TreeNode<int>(rootData);

    int n;
    cout<<"Enter number of children of"<<rootData<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int>*child =takeinput();
        root->children.push_back(child); //  connecting to each other
    }
    return root;
}

void printTree(TreeNode<int>* root)
{
    // Edge case
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}

int main()
{
    // Makeing independent nodes
    // TreeNode<int> *root=new TreeNode<int>(1);
    // TreeNode<int> *node1=new TreeNode<int>(2);
    // TreeNode<int> *node2=new TreeNode<int>(3);

    // stalbilshing a connection with them
    // root->children.push_back(node1);
    // root->children.push_back(node2);



    TreeNode<int>*root=takeinput();
    printTree(root);

    // todo to delete a tree 
    
}

