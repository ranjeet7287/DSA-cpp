// Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    cout<<sum<<endl;
}