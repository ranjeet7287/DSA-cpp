// Diameter of tree

#include<bits/stdc++.h>
using namespace std;
template<typename T>

class Tree{
    public:
    T data;
    Tree *left;
    Tree *right;

    Tree(T data){
        this->data =data;
        left = NULL;
        right = NULL;
    }
    ~Tree(){
        delete left;
        delete right;
    }
}

int Slove(Node *root,int &res){
    if(root==NULL){
        return 0;
    }
    int l=Slove(root->left,res);
    int r= Slove(root->right,res);

    // case 1
    int temp = max(l,r)+1;
    // case 2
    int ans = max(temp,l+r+1);

    res = max(ans,res);

    return temp;
}


int main(){

}