#include<iostream>
using namespace std;
int main()
{
    // Static Memory -- > Delete itself when funtion finised but this not happen in Heap Memory
/*
    while(true)
    {
        int i=10; // it always make new memory after iteration 
    }

    while (true)
    {
        int *i=new int; // it keep incerseing memory after some time it will crash the programmef
    }
    delete i;
    
*/

    
    int n;
    cin>>n;
    int *arr=new int[n];
    delete[]arr;

}