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
           T *newdata=new T[2*capacity];
           int k=0;
           for(int i=firsrIndex;i<capacity;i++){
            newdata[k]=data[i];
            k++;
           }
           for(int i=0 ;i<firsrIndex;i++){
            newdata[k]=data[i];
            j++;
           }
           delete[]data;
           data=newdata;
           firsrIndex=0;
           nextIndex=capacity;
           capacity*=2;

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
}