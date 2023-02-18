#include<iostream>
using namespace std;

template<typename T> 
class Stack
{
    T *data;  //
    int next_index;
    int capacity;

    public:
    
    Stack(){
        data=new T[5]; //
        next_index=0;
        capacity=5;
    }

    int size(){
        return next_index;
    }

    bool isEmpty(){
        return next_index==0;
    }

    void push(T element){
        if(next_index==capacity){
            T *newarr=new T[capacity*2]; //
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
            return 0;
        }
        next_index--;
    }

    T top()  //
    {
        if(isEmpty()){
            return 0;
        }
        return data[next_index-1];
    }
};
int main()
{
    Stack<int> s1;
    s1.push(1);
    s1.push(1);
    s1.push(1);
    cout<<s1.top()<<endl;

}