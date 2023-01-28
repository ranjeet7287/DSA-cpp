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
}