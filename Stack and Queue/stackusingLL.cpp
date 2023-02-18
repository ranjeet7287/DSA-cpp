#include<iostream>
using namespace std;
template<typename T>
class Node
{
    public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class Stack
{
    Node<T> *head;
    int size; //  Number of elements present in stack
 
    public:
    Stack(){
        head=NULL;
        size=0;
    }


    int getsize(){
        return size;
    }

    bool isEmpty(){
        return size==0;
    }

    void push(T element){
        Node<T> *newnode=new Node<T>(element);
        if(head==NULL){
            head=newnode;
            size++;
        }else{
            newnode->next=head;
            head=newnode;
            size++;
        }
    }

    void pop(){
        if(isEmpty()){
            return;
        }
        Node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
    }

    T top(){
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};
int main(){
    Stack<int> p1;
    p1.push(1);
    p1.push(2);
    p1.push(3);
    p1.pop();
    cout<<p1.top()<<endl;
    
}