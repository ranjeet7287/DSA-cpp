#include<iostream>
using namespace std;


// here si is default argument  
// it should be intialised from right most
int sum(int *arr,int n,int si=0)
{
    int ans=0;
    for(int i=si;i<n;i++)
    {
        ans+=arr[i];
    }
    return ans;
}

int main()
{

}