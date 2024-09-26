#include<bits/stdc++.h>
using namespace std;

vector<int> MaxAllSubArr(int *arr,int n,int k)
{
    vector<int> ans;
    int i=0,j=0;
    queue<int> pq;
    while(j<n){
        
        // cal
        if(pq.empty()){
            pq.push(arr[j]);
        }else{
            while(!pq.empty() && pq.front()<arr[j]){
                pq.pop();
                pq.push(arr[j]);
            }
        }
        if(j-i+1<k){
            j++;
        }else if(j-i+1==k){
            // ans cal
            ans.push_back(pq.front());
            // slide the window -> remove the ith calculation and i++,j++
            if(arr[i]==pq.front()){
                pq.pop();
            }
            i++;
            j++;
        }

    }
}


int main(){

}