// Even after Odd LinkedList
// For a given singly linked list of integers, arrange the elements such that all the even numbers are placed after the odd numbers. The relative order of the odd and even terms should remain unchanged.
// Note :
// No need to print the list, it has already been taken care. Only return the new head to the list.
// Input format:
// The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case or query contains the elements of the singly linked list separated by a single space. 
//  Remember/Consider :
// While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
// Output format:
// For each test case/query, print the elements of the updated singly linked list.

// Output for every test case will be printed in a seperate line.
// Constraints :
// 1 <= t <= 10^2
// 0 <= M <= 10^5
// Where M is the size of the singly linked list.

// Time Limit: 1sec
// Sample Input 1 :
// 1
// 1 4 5 2 -1
// Sample Output 1 :
// 1 5 4 2 
// Sample Input 2 :
// 2
// 1 11 3 6 8 0 9 -1
// 10 20 30 40 -1
// Sample Output 2 :
// 1 11 3 9 6 8 0
// 10 20 30 40


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

Node *takeinput(int data)
{
    int data;
    cin>>data;
    Node *head=NULL;
    Node *tail=NULL;
    while(data!=-1)
    {
        Node *newnode =new Node(data);
        if(head==NULL){
            newnode=head;
            newnode=tail;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}

Node *Evenafterodd(Node *head)
{
    Node *temp=head;
    if(temp==NULL || temp->next==NULL)
    {
        return head;
    }
    Node *even_H=NULL;
    Node *even_T=NULL;
    Node *odd_H=NULL;
    Node *odd_T=NULL;
    while(temp!=NULL)
    {
        if(temp->data%2!=0){
            if(odd_H==NULL){
                odd_H=temp;
                odd_T=temp;
            }else{
                odd_T->next=temp;
                odd_T=temp;
            }
        }else{
            if(even_H==NULL)
            {
                even_H=temp;
                even_T=temp;
            }else{
                even_T->next=temp;
                even_T=temp;
            }
        }
        temp=temp->next;
    }
    if(odd_H==NULL){
        return even_H;
    }else{
        odd_T->next=even_H;
    }
    if(even_H!=NULL){
        even_T->next=NULL;
    }
    return odd_H;
}
