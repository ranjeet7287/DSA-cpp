#include<iostream>
#include<vector>
#include<queue>
#include "binary.h"
using namespace std;

int height(BinaryTreeNode<int> *root)
{
    if(root==NULL){
        return 0;
    }
    return 1+ max(height(root->left),height(root->right));
}
// Time Complexity -- > 0(n^2)
// int diameter(BinaryTreeNode<int> *root){
//     if(root==NULL){
//         return 0;
//     }
//     int option1=height(root->left)+height(root->right);
//     int option2=diameter(root->left);
//     int option3=diameter(root->right);
//     return max(option1,option2,option3);
// }
pair<int,int> heightDiameter(BinaryTreeNode<int> *root){
    if(root==NULL){
        pair<int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }
    pair<int,int> leftAns=heightDiameter(root->left);
    pair<int,int> rightAns=heightDiameter(root->right);

    int ld=leftAns.second;
    int lh=leftAns.first;

    int rd=rightAns.second;
    int rh=rightAns.first;

    int height = 1+ max(lh,rh);
    int daimter=max(lh+rh,max(ld,rd));

    pair<int,int> p;
    p.first=height;
    p.second=daimter;
    return p;
}


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
    pair<int,int> p=heightDiameter(root);
    cout<<"Height : "<<p.first<<endl;
    cout<<"Diameter : "<<p.second<<endl;
}
