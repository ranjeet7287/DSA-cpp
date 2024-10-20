#include<bits/stdc++.h>
using namespace std;

template<typename T>
class BinaryTree
{
    public:
    T data;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTree(){
        delete left;
        delete right;
    }
}

int height(BinaryTree<int> *root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}


