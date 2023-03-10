#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    // unordered_map is a template
    unordered_map<string,int> ourMap;
    
    // insert
    pair<string,int> p("abc",1);
    ourMap.insert(p);
    // or more way to insert
    ourMap["def"]=2;

    // find or access
    cout<<ourMap["abc"]<<endl;
    // cout<<ourMap["def"]<<endl;
    // one more way
    cout<<ourMap.at("def")<<endl;

    // cout<<ourMap.at("wwe")<<endl; -- > give error
    // if we use square []
    cout<<ourMap["wwe"]<<endl; 
    // it will not give error insted it insert this key into the map by value 0 .
    
    // CHECK PRESENSE
    // key is present or not
    // count() tell key come who much time it can be 0 or 1 
    // reson is that in map key can exist 1 time only
    if(ourMap.count("abc") > 0){
        cout<<"abc is present "<<endl;
    }

    // size
    cout<<ourMap.size()<<endl;

    // erase 
    ourMap.erase("abc");
    if(ourMap.count("abc") > 0){
        cout<<"abc is present "<<endl;
    }else{
        cout<<"abc key is erase"<<endl;
    }

}