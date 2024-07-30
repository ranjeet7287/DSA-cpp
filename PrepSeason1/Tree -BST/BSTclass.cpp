#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST
{
    BinaryTreeNode<int> *root;

    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }

    private:
    BinaryTreeNode<int> *deleteNode(BinaryTreeNode<int> *root,int data){
        if(root==NULL){
            return NULL;
        }
        if(data > root->data){
            root->right=deleteNode(root->right,data);
        }else if(data < root->data){
            root->left=deleteNode(root->left,data);
        }else{
            // if both side NULL
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }else if(root->left==NULL){
                BinaryTreeNode<int>  *temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }else if(root->right==NULL){
                BinaryTreeNode<int> *temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }else{
                BinaryTreeNode<int> *minNode=root->right;
                while(minNode->left !=NULL){
                    // last left of right means it's the minimum root->data
                    minNode=minNode->left;
                }
                int rightmin=minNode->data;
                root->data=rightmin;
                root->right=deleteNode(rightmin,root->right);
                return root;
            }
        }
    }

    public:
    void deleteData(int data){
        root=deleteNode(data,root);
    }
    
    private:
    void printTreehelp(BinaryTreeNode<int> *root)
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
    public:
    void printTree(){
        printTreehelp(root);
    }
    private:
    BinaryTreeNode<int>  *insert_helper(int data,BinaryTreeNode<int> *root){
        if(root==NULL){
            BinaryTreeNode<int> *newnode=new BinaryTreeNode<int>(data);
            return newnode;
        }
        if(data < root->data){
            root->left=insert_helper(data,root->left);
        }else{
            root->right=insert_helper(data,root->right);
        }
        return root;
    }
    public:
    void insertData(int data){
        this->root=insert_helper(data,this->root);
    }

    private:

    bool hasDatahelper(int data,BinaryTreeNode<int> *node)
    {
        if(node==NULL){
            return false;
        }
        if(node->data==data){
            return true;
        }else if(node->data > data){
            return hasDatahelper(data,node->left);
        }else{
            return hasDatahelper(data,root->right);
        }
    }
    public:

    bool hasdata(int data){
       return hasDatahelper(data,root);
    }
};
