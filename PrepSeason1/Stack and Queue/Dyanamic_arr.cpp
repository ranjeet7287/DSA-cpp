#include<iostream>
using namespace std;

class Stack
{
    int *data;
    int next_index;
    int capacity;

    public:
    
    Stack(){
        data=new int[5];
        next_index=0;
        capacity=5;
    }

    int size(){
        return next_index;
    }

    bool isEmpty(){
        return next_index==0;
    }

    void push(int element){
        if(next_index==capacity){
            int *newarr=new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newarr[i]=data[i];
            }
            delete[]data;
            data=newarr;
            capacity=2*capacity;
        }
        data[next_index]=element;
        next_index++;
    }

    void pop()
    {
        if(isEmpty()){
            cout<<"Stack is Empty !!"<<endl;
            return;
        }
        next_index--;
    }

    int top()
    {
        if(isEmpty()){
            return -123456789;
        }
        return data[next_index-1];
    }
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Size :"<<s.size()<<endl;
    cout<<"Top Element : "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;
    cout<<"Is Empty : "<<s.isEmpty()<<endl;
}