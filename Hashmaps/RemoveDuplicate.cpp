#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(int *a,int n)
{
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<n;i++){
        if(seen.count(a[i])>0){
            continue;
        }
        seen[a[i]]=true;
        output.push_back(a[i]);
    }
    return output;
}

int main()
{
    int a[]={1,2,3,4,5,6,5,4,3,2,1};
    vector<int> ans=removeDuplicate(a,11);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
}

