//  In this question we have to sort an array in decresing way such that element can only move (k-1) postion 
// from our current postion.
//  array     -->        10 12 15 6 9                    K=3
// after sorting  -->    15 12 10 9 6            .. .. . . Vaild Example

// array      -->  10 12 6 15 9                        K=3
//            -->  15 12 10 9 6           .. .. . . . Not Valid Ex beacouse here 15 moves 3 postion in left
#include<bits/stdc++.h>
using namespace std;

void ksortarray(int *arr,int n,int k){
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    int j=0;
    for(int i=k;i<n;i++){
        arr[j]=pq.top();
        pq.pop();
        pq.push(arr[i]);
        j++;
    }
    // for the last k element
    while(!pq.empty()){
        arr[j]=pq.top();
        pq.pop();
        j++;
    }
}
int main(){
    int input[]={10,20,30,2,1};
    int k=3;
    ksortarray(input,5,k);
    for(int i=0;i<5;i++){
        cout<<input[i]<<" ";
    }
}
