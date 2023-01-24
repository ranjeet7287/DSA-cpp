#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout<<a<<" "<<b<<endl;
}
//10 21 
// Solution Description
//  p points to a. q points to p directly and a through 
//  p (double pointer). *q — value stored in p is changed 
//  to address of b instead of that of a. (*p)++ — value that 
//  p points to, which now is of b, is incremented by 1 (b becomes 21).
//   Value of a remains unchanged.
