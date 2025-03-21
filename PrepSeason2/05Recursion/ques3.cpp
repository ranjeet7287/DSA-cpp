// Sort an array

#include<bits/stdc++.h>
using namespace std;

void Insert(vector<int> &arr,int x){
    int n = arr.size();
    if(n == 0 || arr[n-1]<=x){
        arr.push_back(x);
        return;
    }
    int val = arr[n-1];
    arr.pop_back();
    Insert(arr,x);
    arr.push_back(val);
}

void Sort(vector<int> &arr,int n){
    if(n<=1){
        return;
    }
    int x = arr.at(n-1);
    arr.pop_back();
    Sort(arr,arr.size());
    Insert(arr,x);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    Sort(arr,arr.size());
    for(int i : arr){
        cout<<i<<" ";
    }
}