#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int y=0;
    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i)
        {
            cout<<(k+y);
            k++;
        }
        cout<<endl;
        i++;
        y++;
    }
}