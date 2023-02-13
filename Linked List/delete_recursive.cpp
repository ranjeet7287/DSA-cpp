#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
int lenght(Node *head)
{
    Node *temp=head;
    if(temp==NULL){
       return 0; 
    }
    int small=lenght(head->next);
    return 1+small;
}

Node* insertNode(Node *head,int data,int i)
{
    Node *temp=head;
    if(temp==NULL){
        return temp;
    }
    if(i==0){
        Node *newNode=new Node(data);
        newNode->next=temp;
        temp=newNode;
        return temp;
    }
    temp->next=insertNode(temp->next,data,i);
    return temp;
}

Node* deleteNode(Node *head,int i,int data)
{
    Node *temp=head;
    if(temp==NULL){
        return temp;
    }
    if(i==0)
    {
        Node *a=temp->next;
        delete(temp);
        return a;
    }
    temp->next=deleteNode(head->next,i-1,data);
    return temp;
}
