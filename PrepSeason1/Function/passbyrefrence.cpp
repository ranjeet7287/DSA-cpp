#include<iostream>
using namespace std;
void passby(int a)
{
    a++;
    cout<<a; //a=11
}
int main()
{
   int n=10;
   passby(n);
   cout<<n; //n=10
}