#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int input[100];
    //Input
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    //Print
    for(int i=0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }
}