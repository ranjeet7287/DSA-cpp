// Code : Find a node
// Send Feedback
// For a given Binary Tree of type integer and a number X, find whether a node exists in the tree with data X or not.
//  Input Format:
// The first line of each test case contains elements of the first tree in the 
// level order form. The line consists of values of nodes separated by a single space.
//  In case a node is null, we take -1 in its place.

// The second line of each test case contains the node value you have to find.


// For example, the input for the tree depicted in the below image would be:
// example

// 1
// 2 3
// 4 -1 5 6
// -1 7 -1 -1 -1 -1
// -1 -1
// Explanation:
// Level 1:
// The root node of the tree is 1

// Level 2:
// Left child of 1 = 2
// Right child of 1 = 3

// Level 3:
// Left child of 2 = 4
// Right child of 2 = null (-1)
// Left child of 3 = 5
// Right child of 3 = 6

// Level 4:
// Left child of 4 = null (-1)
// Right child of 4 = 7
// Left child of 5 = null (-1)
// Right child of 5 = null (-1)
// Left child of 6 = null (-1)
// Right child of 6 = null (-1)

// Level 5:
// Left child of 7 = null (-1)
// Right child of 7 = null (-1)

// The first not-null node(of the previous level) is treated as the parent of the first two nodes of the current level. The second not-null node (of the previous level) is treated as the parent node for the next two nodes of the current level and so on.
// The input ends when all nodes at the last level are null(-1).
// Note:
// The above format was just to provide clarity on how the input is formed for a given tree.
// The sequence will be put together in a single line separated by a single space. Hence, for the above-depicted tree, the input will be given as:

// 1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
// Output Format:
// The only line of output prints 'true' or 'false'.

// The output of each test case should be printed in a separate line.
// Note:
// You are not required to print anything explicitly. It has already been taken care of.
// Constraints:
// 1 <= N <= 10^5

// Where N is the total number of nodes in the binary tree.

// Time Limit: 1 sec.
// Sample Input 1:
// 8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
// 7
// Sample Output 1:
// true
// Explanation For Output 1:
// Clearly, we can see that 7 is present in the tree. So, the output will be true.
// Sample Input 2:
// 2 3 4 -1 -1 -1 -1
// 10
// Sample Output 2:
// false

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
// find a Node is present in tree or not

bool ispresent(BinaryTree<int>*root,int x)
{
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    bool ans1=ispresent(root->left,x);
    if(ans1==true){
        return ans1;
    }
    bool ans2=ispresent(root->right,x);
    if(ans2==true){
        return ans2;
    }
    return false;
}

// Count Number of Nodes
int numNode(BinaryTree<int> *root)
{
    if(root==NULL){
        return 0;
    }
    return 1+numNode(root->left)+numNode(root->right);
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