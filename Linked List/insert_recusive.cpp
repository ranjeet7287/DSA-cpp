#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

// Lenght 
int Lenght(Node *head)
{
    Node *temp=head;
    if(temp==NULL)
    {
        return 0;
    }
    int small=Lenght(temp->next);
    return 1+small;
}

// Insert

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
    temp->next=insertNode(head->next,data,i);
    return temp;
}
