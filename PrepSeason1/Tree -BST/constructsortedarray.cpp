#include <iostream>
#include <queue>

template <typename T>
class Node {
   public:
    T data;
    Node<T>* next;
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

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

using namespace std; 

pair<Node<int>*,Node<int>*> helper(BinaryTreeNode<int> *root){
    if(root==NULL){
        pair<Node<int>*,Node<int>*> ans;
        ans.first=NULL;
        ans.second=NULL;
        return ans;
    }
    pair<Node<int>*,Node<int>*> leftans=helper(root->left);
    pair<Node<int>*,Node<int>*> rightans=helper(root->right);
    pair<Node<int>*,Node<int>*> ans;
    Node<int> *node=new  Node<int>(root->data);
    node->next=rightans.first;
    if(leftans.second!=NULL){
        leftans.second->next=node;
    }
    if(leftans.first!=NULL){
        ans.first=leftans.first;
    }else{
        ans.first=node;
    }if (rightAns.second != NULL)
    {
        ans.second = rightAns.second;
    }
    else
    {
        ans.second = node;
    }
    return ans;
}

Node<int> *constructLinkedList(BinaryTreeNode<int> *root){
    return helper(root).first;
}

BinaryTreeNode<int>* takeInput() {
    int rootData;

    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    Node<int>* head = constructLinkedList(root);

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}