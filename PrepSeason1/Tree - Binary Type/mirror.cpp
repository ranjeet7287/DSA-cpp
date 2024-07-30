// Code : Mirror
// Send Feedback
// For a given Binary Tree of type integer, update it with its corresponding mirror image.
// Example:
// Alt text

// Input Format:
// The first and the only line of input will contain the node data, all separated by a single space. Since -1 is used as an indication whether the left or right node data exist for root, it will not be a part of the node data.
// Output Format:
// The only line of output prints the mirrored tree in a level-wise order. 
// Each level will be printed on a new line. Elements printed at each level will be separated by a single line.
// Note:
// You are not required to print anything explicitly. It has already been taken care of.
// Constraints:
// 1 <= N <= 10^5
// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 sec
// Sample Input 1:
// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
// Sample Output 1:
// 1 
// 3 2 
// 7 6 5 4
// Sample Input 2:
// 5 10 6 2 3 -1 -1 -1 -1 -1 9 -1 -1
// Sample Output 2:
// 5 
// 6 10 
// 3 2 
// 9
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

void mirror(BinaryTree<int> *root)
{
    if(root==NULL){
        return;
    }
    // swaping with the left and right child
    BinaryTree<int> *temp=root->left;
    root->left=root->right;
    root->right=temp;
    mirror(root->left);
    mirror(root->right);
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
    cout<<"Number of Nodes : "<<numNode(root);
    delete root;
}