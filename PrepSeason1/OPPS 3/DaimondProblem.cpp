// Hybrid Inheritance
#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    private:
        int maxSpeed;
    public:
        int numTyres;
    protected:
        string color;
    
    // Vehicle(){
    //     cout<<"Vehicle's default constructor "<<endl;
    // }
    Vehicle(int z){
        cout<<"Vehicle's Paramterized constructor"<<endl;
        maxSpeed=z;
        cout<<"MaxSpeed : "<<z<<endl;
    }
    void print(){
        cout<<"Vehicle : "<<endl;
    }
    ~Vehicle(){
        cout<<"Vehilce's Destructor "<<endl;
    }
};

class Car:virtual public Vehicle{
    public:
    int numGears;
    Car():Vehicle(3){
        cout<<"Car's default constructor"<<endl;
    }
    ~Car(){
        cout<<"Car's default destructor"<<endl;
    }
    void print(){
        cout<<"Number of Tyres : "<<numTyres<<endl;
        cout<<"Color : "<<color<<endl;
        cout<<"Number of Gears : "<<numGears<<endl;
        // cout<<" Max Speed : "<<maxSpeed<<endl; --> private property
    }
};
class Truck:virtual public Vehicle
{
    public:
        Truck():Vehicle(4){
            cout<<"Truck Default Constructor"<<endl;
        }
};
class Bus:public Car ,public Truck{
    public:
        Bus():Vehicle(5){
        cout<<"Bus's Constructor "<<endl;
        }
        void print(){
            cout<<"Bus"<<endl;
        }
};

int main()
{
    Bus b;

}