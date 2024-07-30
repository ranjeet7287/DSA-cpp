#include<iostream>
using namespace std;
#include<stack>

int main()
{
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    cout<<s1.top()<<endl;
    s1.pop();
    cout<<s1.size()<<endl;
    cout<<s1.empty()<<endl;
}