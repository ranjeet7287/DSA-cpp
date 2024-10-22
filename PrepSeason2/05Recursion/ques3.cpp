// Sort an array

#include<bits/stdc++.h>
using namespace std;

void Insert(vector<int> &arr,int x){
    int n = arr.size();
    if(n==0 || arr[n-1]<=x){
        arr.push_back(x);
        return;
    }
    int val = arr[n-1];
    arr.pop_back();
    Insert(arr,x);
    arr.push_back(val);
}

void Sort(vector<int> &arr){
    int n = arr.size();
    if(n==1){
        return;
    }
    int temp = arr[n-1];
    arr.pop_back();
    Sort(arr);
    Insert(arr,temp);
}


int main(){
    vector<int> a={0,1,5,2,8};
    Sort(a);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}