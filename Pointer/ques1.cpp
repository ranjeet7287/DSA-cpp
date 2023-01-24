#include<iostream>
using namespace std;
int main()
{
    int j=1;
    int *s=&j;
    cout<<j<<endl; // 1
    cout<<&j<<endl; // hexadecimal value_1
    cout<<s<<endl; // hexadecimal value_1 
    cout<<*s<<endl; // 1

    j++;
    
    cout<<j<<endl; // 2
    cout<<*s<<endl; // 2



    // confusing 
    cout<<&s<<endl; // diffrent from hexadecimal value_1 
    // beacouse S also create diffrent storage of other adress but it contain adress of j in our storage that is 
    // we are able to access the adress or value using s also
}