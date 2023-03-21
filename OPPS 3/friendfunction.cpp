#include<bits/stdc++.h>
using namespace std;
class Bus
{
    public:
        void print();
};
void test();
class Truck
{
    private:
        int x;
    protected:
        int y;  
    public:
        int z;


        // friend void Bus :: print();    // class
        // friend void test();            // function


        friend class Bus;
        
};
void Bus::print(){
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
}
void test(){
    // Acess truck private property
    Truck t1;
    t1.x=100;
    t1.y=12345;
    cout<<t1.x<<" "<<t1.y<<endl;
}
int main()
{
    Bus b;
    b.print();
    test();
}