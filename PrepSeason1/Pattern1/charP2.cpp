#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char s='A'+i-1;
        while(j<=n)
        {
            char r=s+j-1;
            cout<<r;
            j++;
        }
        cout<<endl;
        i++;
    }
}