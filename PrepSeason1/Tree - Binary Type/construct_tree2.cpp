// Construct Tree from Postorder and Inorder
// Send Feedback
// For a given postorder and inorder traversal of a Binary Tree of type integer 
// stored in an array/list, create the binary tree using the given two arrays/lists. 
// You just need to construct the tree and return the root.
// Note:
// Assume that the Binary Tree contains only unique elements. 
// Input Format:
// The first line of input contains an integer N denoting the size of the list/array.
//  It can also be said that N is the total number of nodes the binary tree would have.

// The second line of input contains N integers, all separated by a single space.
//  It represents the Postorder-traversal of the binary tree.

// The third line of input contains N integers, all separated by a single space. 
// It represents the inorder-traversal of the binary tree.
// Output Format:
// The given input tree will be printed in a level order fashion where 
// each level will be printed on a new line. 
// Elements on every level will be printed in a linear fashion. A single space will separate them.
// Constraints:
// 1 <= N <= 10^4
// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 sec
// Sample Input 1:
// 7
// 4 5 2 6 7 3 1 
// 4 2 5 1 6 3 7 
// Sample Output 1:
// 1 
// 2 3 
// 4 5 6 7 
// Sample Input 2:
// 6
// 2 9 3 6 10 5 
// 2 6 3 9 5 10 
// Sample Output 2:
// 5 
// 6 10 
// 2 3 
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

BinaryTree<int> *treehelp(int *postorder,int postS,int postE,int *inorder,int inorderS,int inorderE){
    if(inorderS > inorderE){
        return NULL;
    }

    int root_data=postorder[postE];
    int root_index=-1;
    for(int i=inorderS;i<=inorderE;i++){
        if(inorder[i]==root_data){
            root_index=i;
            break;
        }
    }

    int leftIS=inorderS;
    int leftIE=root_index-1;
    int leftPS=postS;
    int leftPE=leftPS-leftIS+leftIE;

    int rightIS=root_index+1;
    int rightIE=inorderE;
    int rightPS=leftPE+1;
    int rightPE=postE-1;

    BinaryTree<int> *root=new BinaryTree<int>(root_data);
    root->left=treehelp(postorder,leftPS,leftPE,inorder,leftIS,leftIE);
    root->right=treehelp(inorder,rightPS,rightPE,inorder,rightIS,rightIE);
    return root;
}

BinaryTree<int>* buildtree(int *postorder,int postlenght,int *inorder,int inlenght){
    return treehelp(postorder,0,postlenght-1,inorder,0,inorder-1);
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