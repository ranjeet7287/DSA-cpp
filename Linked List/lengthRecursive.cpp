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

// Lenght Recursive
int lenght(Node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    int small=lenght(head->next);
    return 1+small;
}



