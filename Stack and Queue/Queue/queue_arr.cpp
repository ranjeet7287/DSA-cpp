#include<iostream>
using namespace std;

template<typename T>
class QueueusingArray
{
    T *data;
    int nextIndex;
    int firsrIndex;
    int size;
    int capacity;

    public:
    QueueusingArray(int s)
    {
        data=new T[s];
        nextIndex=-1;
        firsrIndex=0;
        size=0;
        capacity=s;
    }


    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    // insert element 
    void enqueue(T element){
        if(size==capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1) % capacity;
        if(firsrIndex==-1){
            firsrIndex=0;
        }
        size++;
    }

    T front(){
        if(firsrIndex==-1){
            cout<<"Queue is Empty !!"<<endl;
            return -1;
        }
        return data[firsrIndex];
    }

    T dequeue()
    {
        if(isEmpty()){
            cout<< "Queue is Empty ! "<<endl;
            return 0;
        }
        T ans=data[firsrIndex];
        firsrIndex=(firsrIndex+1)%capacity;
        size--;
        if(size==0){
            firsrIndex=-1;
            nextIndex=0;
        }
        return ans;
    }
};

int main(){
    QueueusingArray<int> q(5);
    q.enqueue(1);
    q.enqueue(2);


}
