//Without Function
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     int fact_n=1;
//     int i=1;
//     while(i<=n)
//     {
//         fact_n=fact_n*i;
//         i++;
//     }
//     int fact_r=1;
//     i=1;
//     while(i<=r)
//     {
//         fact_r=fact_r*i;
//         i++;
//     }
//     int fact_nr=1;
//     i=1;
//     while(i<=n-r)
//     {
//         fact_nr=fact_nr*i;
//         i++;
//     }
//     cout<<(fact_n)/(fact_r*fact_nr);
// }



// With function
#include<iostream>
using namespace std;
int factorial(int n)
{
    int i=1;
    int fact=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    return fact;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(r)*factorial(n-r));
}