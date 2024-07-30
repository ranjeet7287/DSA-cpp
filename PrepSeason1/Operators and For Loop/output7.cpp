#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<5)
    {
        if(i==3)
        {
            continue;
        }
        cout<<i<<" ";
        i++;
    }
}
// 1 2 infinte loop
// Beacuse we are increseing the value of i in if condition
