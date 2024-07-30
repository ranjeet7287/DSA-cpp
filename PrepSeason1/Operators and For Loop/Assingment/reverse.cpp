#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    while(n!=0)
    {
        i=i*10+n%10; //n%10 --> it will give reminder value which means give last digit value n i.e 1345 is value it will return 5
        n=n/10; //i.e if 1345 --> 134 -->13 -->1 -->0 closed the loop
    }
    cout<<i<<endl; // return final result
}