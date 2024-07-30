#include<iostream>
using namespace std;
class stack
{
    private:
    int *data;
    int nextindex;
    int capacity;

    public:
    stack(int size)
    {
        data=new int[size];
        nextindex=0;
        capacity=size;
    }

    // Functions

    // 1.Size function
    int size()
    {
        return nextindex;
    }

    // 2. Empty Function
    bool isEmpty()
    {
        // short hand means if nextindex == 0 it simply means Ture otherwise it's False
        return nextindex==0;
    }

    // 3.Insert Method
    void push(int element){
        if(nextindex==capacity){
            cout<<"Stack is Full !!"<<endl;
            return;
        }   
        data[nextindex]=element;
        nextindex++;
    }


    //4.Delete an Element
    void pop()
    {
        if(isEmpty()){
            cout<<"Stack is Empty !!"<<endl;
            return;
        }
        nextindex--;
    }

    // 5.Top element
    int top()
    {
        if(isEmpty()){
            return -123456789;
        }
        return data[nextindex-1];
    }
};
int main()
{
    stack s(5);
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