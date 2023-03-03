#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int ,vector<int> , greater<int> > pq;
    pq.push(3);
    pq.push(9);
    pq.push(6);
    pq.push(4);
    cout<<pq.top()<<endl;
}