#include<bits/stdc++.h>
using namespace std;
class Vehicle
{
    private:
        int maxSpeed;
    protected:
        int numTyres;
    public:
        string color;


    Vehicle(){
        cout<<"Vehicle's Default Constructor Call"<<endl;
    }
    Vehicle(int z){
        cout<<"Vechile Parametrized Constructor"<<endl;
        maxSpeed=z;
    }
    ~Vehicle(){
        cout<<"Vehicle's Default Destructor Call"<<endl;
    }
};
/*
      class Car : Access_modifer Vehicle{

                 -----

      };

*/
class Car :public Vehicle
{
    public:
        int numGears;

        void print(){
            cout<<"Number of Tyres : "<<numTyres<<endl;
            cout<<"Color : "<<color<<endl;
            cout<<"Number of Gears : "<<numGears<<endl;
            // cout<<" Max Speed : "<<maxSpeed<<endl; --> private property
        }

    Car(int x) : Vehicle(x){
        cout<<"Car Parametrized Constructor Call"<<endl;
    }
    ~Car(){
        cout<<"Car Default Destructor Call"<<endl;
    }
};
int main()
{
    Vehicle v;
    v.color="Blue";
    /* 

        v.maxSpeed=100; ->  private 
        v.numTyres=4;   ->  protected
    
    */
   Car c;
   c.color="Black";
   c.numGears=8;
    
    // c.numTyres=4; --> Protected
    // c.print();
}