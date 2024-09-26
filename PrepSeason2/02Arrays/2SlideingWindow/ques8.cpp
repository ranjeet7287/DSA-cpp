#include<bits/stdc++.h>
using namespace std;

int PickToy(string str){
    int i=0,j=0;
    int maxi=INT_MIN;
    unordered_map<char,int> map;
    while(j<str.size()){
        map[str[j]]++;
        if(map.size()<2){
            j++;
        }else if(map.size()==2){
            maxi=max(maxi,j-i+1);
            j++;
        }else if(map.size()>2){
            while(map.size()>2){
                map[str[i]]--;
                if(map[str[i]]==0){
                    map.erase();
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
}


int main(){

}