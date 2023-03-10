// Iterator -- > vector,list,map, unordered_map , set , unordered_set (set--> set contain only keys not a value like hasmap)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> map;
    map["abc1"]=1;
    map["abc2"]=2;
    map["abc3"]=3;
    map["abc4"]=4;
    map["abc5"]=5;

    unordered_map<string,int> :: iterator it=map.begin();
    // it will can give unordered wise don't think it will give in orderedwise result ok understood
    while(it!=map.end()){
        cout<<"Key : "<<it->first<<" , Value : "<<it->second<<endl; 
        it++;
    }

    // FIND
    unordered_map<string,int> :: iterator it2=map.find("abc4"); // give you a iterator

    // Erase
    map.erase(it2);
    // map.erase(it2,it2+4)-- > from it2,it2+1,it2+2,it3+3 -- --> it will delete element


    // VECTOR
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int> ::iterator ite=v.begin();
    while(ite!=v.end()){
        cout<<*ite<<endl;
        ite++;
    }
}