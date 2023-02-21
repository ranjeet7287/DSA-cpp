// Take input levelwise 
#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include "treenode.h"
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
            front->children.push_back(child);
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
