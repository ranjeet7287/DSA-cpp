// Map
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // pre-compute
    // map<int,int> mymap;
    // for(int i=0;i<n;i++){
    //     mymap[arr[i]]++;
    // }

    unordered_map<int,int> mymap;
    for(int i=0;i<n;i++){
        mymap[arr[i]]++;
    }

    // itreate into map
    // for(auto it : mymap){
    //     cout<<it.first<<"-->"<<it.second<<endl;
    // }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        // fetch
        cout<<mymap[num]<<endl;
    }

    return 0;
}