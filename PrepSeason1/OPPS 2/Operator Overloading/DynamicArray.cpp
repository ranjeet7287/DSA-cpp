#include<iostream>
using namespace std;

class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

    public:
    DynamicArray(){
        data=new int[5];
        nextIndex=0;
        capacity=5;
    }

    // Add element
    void add(int element)
    {
        if(nextIndex==capacity){
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                newdata[i]=data[i];
            }
            delete[]data;
            data=newdata;
            capacity=2*capacity;
        }
        data[nextIndex]=element;
        nextIndex++;   
    }

    // get element
    int get(int index) const
    {
        if(index < nextIndex){
            return data[index];
        }else{
            return -1;
        }
    }

    // set element
    void set(int index,int element){
        if(index<nextIndex){
            data[index]=element;
        }else if(index==nextIndex){
            add(element);
        }else{
            return;
        }
    }
    // print 
    void print()const{
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

    //Copy Constructor
    DynamicArray(DynamicArray const &d)
    {
        // Shallow copy
        // this->data=d.data;
        // this->capacity=d.capacity;
        // this->nextIndex=d.nextIndex;


        // Deep Copy
        this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->capacity=d.capacity;
        this->nextIndex=d.nextIndex;
    }

    // Copy Assingment
    void operator=(DynamicArray const &d)
    {
        this->data=new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
            this->data[i]=d.data[i];
        }
        this->capacity=d.capacity;
        this->nextIndex=d.nextIndex;
    }




};
int main()
{
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.print();

//     DynamicArray d2(d1); // Copy Constructor // Shallow Copy

//     d1.set(0,0);
//     d1.print();  // 0 20 30 40 50 60 
//     d2.print(); // 0 20 30 40 50 60  effect of shallow copy becouse poniting to same memory address
    DynamicArray d2(d1);
    d1.set(0,0);
    d1.print();  // 0 20 30 40 50 60 
    d2.print();  // 10 . . . . . . .
}