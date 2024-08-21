#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> mymap;
    for(int i=0;i<n;i++){
        mymap[arr[i]]++;
    }

    for(auto it:mymap){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    int index = 0;
    for(int i = 0; i < mymap[0]; i++) {
        arr[index++] = 0;
    }
    for(int i = 0; i < mymap[1]; i++) {
        arr[index++] = 1;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}