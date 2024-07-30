#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        int j=1;
        while(j<=i)
        {
            cout<<i+j-1;
            j++;
        }
        int y=i-1;
        while(y>=1)
        {
            cout<<i+y-1;
            y--;
        }
        cout<<endl;
        i++;
    }
}