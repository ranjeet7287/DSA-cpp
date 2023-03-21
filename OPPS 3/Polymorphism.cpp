#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    public:
        string color;

        virtual void print(){
            cout<<"Vehicle"<<endl;
        }  
};
class Car:public Vehicle
{
    public:
        int numGears;
        
        virtual void print(){
            cout<<"Car"<<endl;
        }
};
int main()
{
    Vehicle v;
    Car c;
    v.print();
    c.print();

    Vehicle *v1=new Vehicle;
    Vehicle *v2;

    v2=&c;
    // Base Class pointer can point to derived class pointer(but vice-versa not allowed).
    v1->print(); //vehicle
    v2->print(); 

}