// #include<queue>
// STL -- > priority_queue<___>
// by defult it's Max Priority Queue
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(8);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(9);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    
}