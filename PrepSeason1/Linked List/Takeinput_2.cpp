#include<iostream>
using namespace std;

class Node{  
    public:
    int data;
    Node *next;
    // Constructor
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node *takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    // Makeing Tail Node so we cannot Travel every time on takeing input
    Node *tail=NULL; 
    while(data != -1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            // for the first node  
            tail=newNode; 
        }else{
            tail->next=newNode;
            tail=tail->next;
            // or tail=newNode;
        }
        cin>>data;
    }
    return head;
}
// Time complexity --> 0(n) 

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    Node *head=takeinput();
    print(head);
}