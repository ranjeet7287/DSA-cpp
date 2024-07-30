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
        while(j<=n)
        {
            char s='A'+j-1;
            cout<<s;
            j++;
        }
        cout<<endl;
        i++;
    }
}