#include<bits/stdc++.h>
using namespace std;

void First_Negative(int arr[],int n,int k){
    int i=0,j=0;
    list<int> l;
    vector<int> res;
    while(j<n){
        if(arr[j]<0){
            l.push_back(a[j]);
        }
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            if(l.size()==0){
                res.push_back(0);
            }else{
                res.push_back(l.front());
                if(arr[i]==l.front()){
                    l.pop_front();
                }
            }
            j++;
            i++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    First_Negative(arr,n,k);
}