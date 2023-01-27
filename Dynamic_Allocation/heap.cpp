// We can store our data in memory in two ways ->
// 1.Stack Memory and 2.Dyanamic Memory Alloacation(Heap Memory)

// Stack --> int i=1;

// Heap --> int *p= new int; 
//              *p=10;

#include<iostream>
using namespace std;
int main()
{
    // new int --> Bascially it's a memory address of heap memory and we storeing in pointer so that we can 
    // acess through derefrence of pointer
    int *i= new int;
    *i=1;
    cout<<*i<<endl;

    // One of the biggest problem in Array now resloved which we can assign variable in size


    // Bad Practice
    int j;
    cin>>j;
    int arr[j]; // Stack memory is pre-defined  it can be fail when we enter large size So, always assign any constant value here so stack memory define ourself


    // Good Practice 
    int n;
    cin>>n;
    int *arr=new int[n]; // Accessing from Heap Memory
}