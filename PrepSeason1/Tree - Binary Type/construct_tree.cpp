// Code: Construct Tree from Preorder and Inorder
// Send Feedback
// For a given preorder and inorder traversal of a Binary Tree of type integer stored 
// in an array/list, create the binary tree using the given two arrays/lists. You just
//  need to construct the tree and return the root.
// Note:
// Assume that the Binary Tree contains only unique elements. 
// Input Format:
// The first line of input contains an integer N denoting the size of the list/array.
// It can also be said that N is the total number of nodes the binary tree would have.

// The second line of input contains N integers, all separated by a single space.
// It represents the preorder-traversal of the binary tree.

// The third line of input contains N integers, all separated by a single space.
//  It represents the inorder-traversal of the binary tree.
// Output Format:
// The given input tree will be printed in a level order fashion where each level will 
// be printed on a new line. 
// Elements on every level will be printed in a linear fashion. A single space will separate them.
// Constraints:
// 1 <= N <= 10^4
// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 sec
// Sample Input 1:
// 7
// 1 2 4 5 3 6 7 
// 4 2 5 1 6 3 7 
// Sample Output 1:
// 1 
// 2 3 
// 4 5 6 7 
// Sample Input 2:
// 6
// 5 6 2 3 9 10 
// 2 6 3 9 5 10 
// Sample Output 2:
// 5 
// 6 10 
// 2 3 
// 9 
// Tree Traverse
// 1.Level Order 
// 2.Pre Order -- >   Node - left - right
// 3.Post Order -->  left - right - node 
// 4.In Order -- > left Node right 
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

BinaryTree<int> *treehelper(int *inorder,int *preorder, int inStart ,int inEnd ,int preStart ,int preEnd)
{
    if(inStart > inEnd){
        return NULL;
    }
    int rootData=preorder[preStart];
    int rootindex=-1;
    for(int i=inStart;i<=inEnd;i++){
        if(inorder[i]==rootData){
        rootindex=i;
        break;
        }
    }
    int leftInS =inStart;
    int leftInEl=rootindex-1;
    int leftpreS=preStart+1;
    int leftpreE=(leftInEl-leftInS)+leftpreS;

    int rightpreS=leftpreE+1;
    int rightpreE=preEnd;
    int rightInS=rootindex+1;
    int rightInEl=inEnd;

    BinaryTree<int> *root=new BinaryTree<int>(rootData);
    root->left=treehelper(inorder,preorder,leftInS,leftInEl,leftpreS,leftpreE);
    root->right=treehelper(inorder,preorder,rightInS,rightInEl,rightpreS,rightpreE);
    return root;
}


BinaryTree<int> *buildtree(int *inorder,int *preorder,int size){
    return treehelper(inorder,preorder,0,size-1,0,size-1);
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
    int in[]={4,2,5,1,8,6,9,3,7};
    int pre[]={1,2,4,5,3,6,8,9,7};
    BinaryTree<int> *root=buildtree(in,pre,9);
    printTree(root);
    

}


