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
    // Creating a Head pointer
    Node *head=NULL;
    // here we using -1 as terminator
    while(data != -1){
        // Statically makeing a node is a wrong way to take input beacouse they deallocate itself so use Dynamic Allocation
        Node *newNode=new Node(data);
        // only once we need make or mark  our head 
        if(head==NULL){
            head=newNode;
        }else{
            // head->next=newNode;
            Node *temp=head;
            // travleing from head to tail so that we can connect newnode to tail's next
            while(temp->next!=NULL){
                temp=temp->next;
            }
            // here we are connecting 
            temp->next=newNode;
        }
        cin>>data;
    }
    return head;
}
// Time Complexity of above input function is n^2 <-- Bad
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