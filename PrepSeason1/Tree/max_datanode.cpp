// Code : Max data node
// Given a generic tree, find and return the node with maximum data. 
// You need to return the node which is having maximum data.
// Return null if tree is empty.
// Input format :
// The first line of input contains data of the nodes of the tree in level order
//  form. The order is: data for root node, number of children to root node, data of each 
// of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.
// Output Format :
// The first and only line of output contains the data of the node with largest data in the given tree.
// Constraints:
// Time Limit: 1 sec
// Sample Input 1:
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 1:
// 50
// Take input levelwise 
#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include "treenode.h"

int maxdatanode(TreeNode<int> *root)
{
    TreeNode<int> *max=root;
    for(int i=0;i<root->children.size();i++)
    {
        TreeNode<int> *child=maxdatanode(root->children[i]);
        if(max->data < child->data){
            max=child;
        }
    }
    return max;
}

TreeNode<int> *takeinput()
{
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>*root =new TreeNode<int>(rootData);
    
    queue<TreeNode<int>*>  pendingNodes;

    pendingNodes.push(root);

    while(pendingNodes.size()!=0){
        TreeNode<int> *front= pendingNodes.front();
        pendingNodes.pop();
        cout<<"Number of children of "<<front->data<<endl;
        int numChild;
        cin>>numChild;

        for(int i=0;i<numChild;i++){
            int childata;
            cout<<" Enter "<<i<<"th child of "<<front->data<<endl;
            cin>>childata;
            TreeNode<int> *child=new TreeNode<int>(childata);
            front->children.push_back(child); // connecting to node as children
            pendingNodes.push(child);
        }
    }
    return root;
}

void printTree(TreeNode<int> *root)
{
    queue<TreeNode<int>*> pending;
    pending.push(root);
    while(!pending.empty())
    {
        TreeNode<int> *front=pending.front();
        pending.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data;
            if(i<front->children.size()-1){
                cout<<",";
            }
            pending.push(front->children[i]); 
            // pusing to the pending queue so that we are able to get children
        }
        cout<<endl;
    }
}

int main()
{
    TreeNode<int>*root=takeinput();
    printTree(root);
    return 0; 
}
