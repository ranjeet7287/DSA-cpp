// Creating List of 5 Nodes

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

void print(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }

}
int main()
{
    // Statically
    // Node n1(1);
    // Node *head=&n1;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);

    // // Connect
    // n1.next=&n2;
    // n2.next=&n3;
    // n3.next=&n4;
    // n4.next=&n5;

    // Dynamically
    Node *n6=new Node(6);
    Node *head=n6;
    Node *n7=new Node(7);
    Node *n8=new Node(8);
    Node *n9=new Node(9);
    Node *n10=new Node(10);

    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    n9->next=n10;

    print(head);

}

// Notes
// 1.Linked List are best suited : for the size of the structure is constantly changing.
