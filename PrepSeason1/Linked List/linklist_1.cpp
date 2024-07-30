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
int main()
{
    // Statically
    Node n1(1);
    // Storeing address of first node of linked list into head pointer
    Node *head=&n1;
     
    Node n2(2);
    // Connecting two nodes
    n1.next=&n2;
    // cout<<n1.data<<endl;
    // cout<<n2.data<<endl;

    // Dynamically
    Node *n3=new Node(3);
    // head
    Node *head=n3;
    Node *n4=new Node(4);
    
    // Connecting two node
    n3->next=n4;


}