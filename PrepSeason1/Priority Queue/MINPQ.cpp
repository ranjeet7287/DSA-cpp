#include<bits/stdc++.h>
#include "priorityqueue.h"
using namespace std;
// HEAP SORT
int main(){
    PriorityQueue p;
    p.insert(6);
    p.insert(5);
    p.insert(4);
    p.insert(3);

    p.remove();
    cout<<p.getMin()<<endl;

}