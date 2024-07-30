// Code: Merge Sort
//  Given a singly linked list of integers, sort it using 'Merge Sort.'
// Note :
// No need to print the list, it has already been taken care. Only return the new head to the list.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
// The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
// Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format :
// For each test case/query, print the elements of the sorted singly linked list.
// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= M <= 10^5
// Where M is the size of the singly linked list.
// Time Limit: 1sec
// Sample Input 1 :
// 1
// 10 9 8 7 6 5 4 3 -1
// Sample Output 1 :
//  3 4 5 6 7 8 9 10 
//  Sample Input 2 :
// 2
// -1
// 10 -5 9 90 5 67 1 89 -1
// Sample Output 2 :
// -5 1 5 9 10 67 89 90 

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

Node* takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newNode=new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp=head;
    if(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* midPoint(Node *head)
{
    Node *temp=head;
    Node *slow=temp;
    Node *fast=temp->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* mergeSortedLL(Node *head1,Node *head2)
{
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    Node *final_head=NULL;
    Node *final_tail=NULL;
    Node *temp1=head1;
    Node *temp2=head2;

    if(temp1->data < temp2->data)
    {
        final_head=final_tail=temp1;
        temp1=temp1->next;
    }else{
        final_head=final_tail=temp2;
        temp2=temp2->next;
    }

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data < temp2->data)
        {
            final_tail->next=temp1;
            final_tail=temp1;
            temp1=temp1->next;
        }else{
            final_tail->next=temp2;
            final_tail=temp2;
            temp2=temp2->next;
        }
    }
    if(temp1!=NULL)
    {
        final_tail->next=temp1;
    }else{
        final_tail->next=temp2;
    }
    return final_head;
}
Node *mergeSort(Node *head)
{
    Node *temp=head;
    if(temp==NULL || temp->next==NULL)
    {
        return temp;
    }
    Node *mid=midPoint(temp);
    // Breaking into two half
    Node *h1=head;
    Node *h2=mid->next;
    mid->next=NULL;
    h1=mergeSort(h1);
    h2=mergeSort(h2);

    Node *final_head=mergeSortedLL(h1,h2);
    return final_head;
}