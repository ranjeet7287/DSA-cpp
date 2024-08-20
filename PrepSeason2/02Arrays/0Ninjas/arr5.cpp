// Hashing

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // precompute
    // suppose max length of array is 13
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
}

// arr=[1,3,4,5,5,6]

// pre =[0,0,0,0,0,0,0,0,0]

// for arr[0]=1

// pre = [0,1,0,0,0,0,0,0]

// for arr[1]=3

// pre = [0,1,0,1,0,0,0,0]
// like...

// pre =[0,1,0,1,1,2,0,1]
