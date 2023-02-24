// Replace with depth
// Send Feedback
// You are given a generic tree. You have to replace each node with its depth value. You just have to update the data of each node, there is no need to return or print anything.
// Input format :
// The first line of input contains data of the nodes of the tree in level order form. The order is: data for root node, number of children to root node, data of each of child nodes and so on and so forth for each node. The data of the nodes of the tree is separated by space.  
// Output format:
// The updated tree is printed level wise. Each level is printed in a new line. Please refer to sample output 1 for more details. 
// Constraints:
// Time Limit: 1 sec
// Sample Input 1:
// 10 3 20 30 40 2 40 50 0 0 0 0 
// Sample Output 1:
// 0 
// 1 1 1 
// 2 2
/************************************************************
    Following is the structure for the TreeNode class
    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;
        TreeNode(T data) {
            this->data = data;
        }
        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };
************************************************************/
void help(TreeNode<int> *root , int depth)
{
    root->data=depth;
    for(int i=0;i<root->children.size();i++)
    {
        help(root->children[i],depth+1);
    }
}
void replaceWithDepthValue(TreeNode<int>* root) 
{
    if(root==NULL){
        return;
    }
    help(root,0);
}