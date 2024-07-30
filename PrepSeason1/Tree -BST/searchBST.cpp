// Code: Search in BST
// Given a BST and an integer k. Find if the integer k is present in given BST or not.
// You have to return true, if node with data k is present, return false otherwise.
// Note: Assume that BST contains all unique elements.
// Input Format:
// The first line of input contains data of the nodes of the tree in level order form. 
// The data of the nodes of the tree is separated by space. If any node does not have left 
// or right child, take -1 in its place. Since -1 is used as an indication whether the left 
// or right nodes exist, therefore, it will not be a part of the data of any node.   
// The following line of input contains an integer, that denotes the value of k.
// Output Format:
// The first and only line of output contains a boolean value. Print true, if node with 
// data k is present, print false otherwise. 
// Constraints:
// Time Limit: 1 second
// Sample Input 1 :
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
// 2
// Sample Output 1 :
// true
// Sample Input 2 :
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1
// 12
// Sample Output 2 :
// false
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

template<typename T>
class BinaryNode
{
    public:
    T data;
    BinaryNode<T> *left;
    BinaryNode<T> *right;

    BinaryNode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~BinaryNode(){
        if(left) delete left;
        if(right) delete right;
    }
};

bool searchinBST(BinaryNode<int> *root ,int k)
{
    if(root==NULL){
        return false;
    }
    if(root->data==k){
        return true;
    }
    if(root->data>k){
        return searchinBST(root->left,k);
    }else{
        return searchinBST(root->right,k);
    }
}

BinaryNode<int> *takeinput()
{
    int rootdata;
    cout<<"Enter the root data : ";
    cin>>rootdata;

    BinaryNode<int> *root=new BinaryNode<int>(rootdata);
    queue<BinaryNode<int>*> pending;
    pending.push(root);

    while(pending.size()!=0){
        BinaryNode<int> *front=pending.front();
        pending.pop();

        int leftchild;
        cout<<"Enter the left child of "<<front->data<<" : ";
        cin>>leftchild;
        if(leftchild!=-1){
            BinaryNode<int> *child=new BinaryNode<int>(leftchild);
            front->left=leftchild;
            pending.push(leftchild);
        }
        int rightchild;
        cout<<"Enter the right child of "<<front->data<<" : ";
        cin>>rightchild;
        if(rightchild!=-1){
            BinaryNode<int> *child=new BinaryNode<int>(rightchild);
            front->right=rightchild;
            pending.push(rightchild);
        }
    }
    return root;
}