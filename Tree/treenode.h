#include<vector>
using namespace std;
template<typename T>
class TreeNode
{
    public:
    T data;
    vector<TreeNode *> children;
    // --> vector dynanmic array to store the adress of child node 
    // and also by deafult it will set our data template as parent node

    TreeNode(T data)
    {
        this->data=data;
    }

}; 