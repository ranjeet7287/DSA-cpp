// Contains x
// Send Feedback
// Given a generic tree and an integer x, check if x is present in the given tree or not. 
// Return true if x is present, return false otherwise.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form.
// The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
// The following line contains an integer, that denotes the value of x.
// Output format :
// The first and only line of output contains true, if x is present and false, otherwise.
// Constraints:
// Time Limit: 1 sec
// Sample Input 1 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 40 
// Sample Output 1 :
// true
// Sample Input 2 :
// 10 3 20 30 40 2 40 50 0 0 0 0
// 4 
// Sample Output 2:
// false
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

template<typename T>
class TreeNode
{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this->data=data;
    }
    ~TreeNode()
    {
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }
};
// contain x
bool isPresent(TreeNode<int>*root,int x)
{
    if(root->data==NULL)
    {
        return false;
    }
    if(root->data==x){
        return true;
    }
    for(int i=0;i<root->children.size();i++){
        bool ans=isPresent(root->children[i],x);
        if(ans==true){
            return ans;
        }
    }
    return false;
}



// Take input 
TreeNode<int> *taleinput()
{
    int rootdata;
    cout<<"Enter the root data : "<<endl;
    cin>>rootdata;

    TreeNode<int> *root =new TreeNode<int>(rootdata);
    queue<TreeNode<int>*> pending;
    pending.push(root);

    while(pending.size()!=0)
    {
        TreeNode<int> *front=pending.front();
        pending.pop();

        int numchild;
        cout<<"Enter the number of child "<<front->data<<endl;
        cin>>numchild;

        for(int i=0;i<numchild;i++)
        {
            int child_data;
            cout<<"Enter "<<i<<"th childer of"<<front->data<<":";
            cin>>child_data;
            TreeNode<int> *child=new TreeNode<int>(child_data);
            front->children.push_back(child);
            pending.push(child);
        }
    }
    return root;
}
