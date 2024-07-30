// Code : Reverse LL (Recursive)
// Send Feedback
// Given a singly linked list of integers, reverse it using recursion and return the head to the modified list. You have to do this in O(N) time complexity where N is the size of the linked list.
//  Note :
// No need to print the list, it has already been taken care. Only return the new head to the list.
// Input format :
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first and the only line of each test case or query contains the elements of the singly linked list separated by a single space.
// Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format :
// For each test case/query, print the elements of the updated singly linked list.

// Output for every test case will be printed in a seperate line.
//  Constraints :
// 1 <= t <= 10^2
// 0 <= M <= 10^4
// Where M is the size of the singly linked list.

// Time Limit: 1sec
// Sample Input 1 :
// 1
// 1 2 3 4 5 6 7 8 -1
// Sample Output 1 :
// 8 7 6 5 4 3 2 1
// Sample Input 2 :
// 2
// 10 -1
// 10 20 30 40 50 -1
// Sample Output 2 :
// 10 
// 50 40 30 20 10

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
/*------------------------Method 1------------*/
// Node *ReaverseLL1(Node *head)
// {
//     Node *temp=head;
//     if(temp==NULL || temp->next==NULL)
//     {
//         return temp;                           ------------------------
//     }                                         -    TIME COMPLEXTY        -
//     Node *small=ReaverseLL1(temp->next);      -       IS 0(n^2)          - 
//     Node *a=small;                             -------------------------
//     while(a->next!=NULL)
//     {
//         a=a->next;
//     }
//     a->next=temp;
//     temp->next=NULL;
//     return small;
// }


// Method 2
// class Pair{
//     public:
//     Node *head;
//     Node *tail;
// };
// Pair ReversedLL_2(Node *head)
// {
//     if(head==NULL || head->next==NULL)
//     {
//         Pair ans;
//         ans.head=head;
//         ans.tail=head;
//         return ans;
//     }
//     Pair smallans=ReversedLL_2(head->next);
//     smallans.tail->next=head;
//     head->next=NULL;
//     Pair ans;
//     ans.head=smallans.head;
//     ans.tail=head;
//     return ans;
// }
// Node *ReversedLL_better(Node *head)
// { 
//     return  ReversedLL_2(head).head;
// }


// Method 3

Node* ReversedLL(Node *head)
{
    Node *temp=head;
    if(temp==NULL || temp->next==NULL)
    {
        return temp;
    }
    Node *small=ReversedLL(head->next);
    Node *tail=temp->next;
    tail->next=temp;
    temp->next=NULL;
    return small;
}

// Iterative
Node *reverseLinkedList(Node *head)
{
    Node *current=head;
    Node *prev=NULL;
    while(current!=NULL)
    {
        Node *next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}

