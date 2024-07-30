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
// Delete a Node
Node* deleteNode(Node *head,int data,int i)
{
    Node *temp=head;
    if(temp==NULL)
    {
        return temp;
    }
    if(i==0)
    {
        Node *a=head;
        head=a->next;
        delete a;
        return head;
    }
    int count=0;
    while(count<i-1 && temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if(temp!=NULL && temp->next!=NULL)
    {
        Node *a=temp->next;
        temp->next=a->next;
        delete a;
    }
    return temp;
}




// Insert Node
Node* insertNode(Node *head,int i,int data)
{
    Node *temp=head;
    // creating a newnode with the desired data
    
    Node *newNode=new Node(data);
    int count=0;
    
    //Handelig the case of 0th index
    if(i==0){
        newNode->next=temp;
        //now we also have to update our head 
        temp=newNode;
        return temp;
    }

    // Traveling till i-1 index 
    // TEMP!=NULL SO THAT WE DON'T TRY TO ACCESS NEXT TO NULL ADDRESS

    // this condtion will fail for thr 0th index 
    while(count<i-1 && temp!=NULL){
        temp=temp->next;
        count++;
    }
    // Saveing the adrress of ith node so that we don't lost our nodes 
    if(temp!=NULL){
        Node *a=temp->next;
        temp->next=newNode;
        newNode->next=a;
    }
    return temp;
}



Node *takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL; 
    while(data != -1){
        Node *newNode=new Node(data);
        if(head==NULL){
            head=newNode;
            tail=newNode; 
        }else{
            tail->next=newNode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
}

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

}