#include<iostream>
using namespace std;

void print_num(int n)
{
    for(int i=0;i<=n;i++){
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    print_num(n);
}