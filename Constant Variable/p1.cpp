#include<iostream>
using namespace std;
int main()
{
    // Normally
    int i=10;
    i=9; // <-- We can re-asign the i but it doesnt happens in const variable


    // Constant

    const int j=13;
    //j=23  <-- Give Error 

   // const int k; <-- Error we need to intialise value here 

    
   // Const refrence from a non const int 
   int u=12;
   const int &r=u;


   // Const refrence from a  const int 
   const int y=14;
   const int &t=y;

   // refrence from a const int 
   int const j3=123;
   //    int &k3=j3; <--  Give Error 

}