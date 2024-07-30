// Vector is just a inbulit dynamic array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Dyanamically
    vector<int>  *vp=new vector<int>(); 

    // Statically
    vector<int> v;

    //insering a elment in vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50); 
    // push back is a function which cheack size of an array then put into the array 

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // v[index] --> never use this for inserting new element beacouse it will just append not increase the size of 
    // an array like push back function

    // v[index] -- > use for  get and update

    // v.at(index) -- > it always give a value of an never give a garbage value which index which doesn't exist in array of vector

    v.pop_back();
    // Removes last element. This is a typical stack operation.
    // It shrinks the %vector by one. Note that no data is returned,
    // and if the last element's data is needed, it should be retrieved before pop_back() is called.

    for(int i=0;i<100;i++){
        cout<<"capacity :"<<v.capacity()<<endl;
        v.push_back(i+1);
        cout<<"size :"<<v.size()<<endl;
    }

}
