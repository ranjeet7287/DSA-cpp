// Min Heap -->  CBT
// insert
// remove
// get min
#include<bits/stdc++.h>
using namespace std;
class PriorityQueue
{
    vector<int> pq;
    public:
    PriorityQueue(){

    }

    isEmpty(){
        return pq.size()==0;
    }
    // return the number of element in  CBT
    int getSize(){
        return pq.size();
    }
    int getMin(){
        if(isEmpty()){
            return -1;
        }
        return pq.at(0);
    }
    void insert(int data){
        pq.push_back(data);
        //  maintaing heap order property
        // 2*i+1 or 2*i+2 -- >children in vector
        // parent = (child - 1)/2; 

        int childIndex=pq.size()-1; // --> child index
        while(childIndex>0){
        int parentIndex=(childIndex-1)/2;
        if(pq.at(childIndex) < pq.at(parentIndex)){
            // swaping 
            int temp=pq.at(childIndex);
            pq.at(childIndex)=pq.at(parentIndex);
            pq.at(parentIndex)=temp;
        }else{
            break;
        }
        childIndex=parentIndex;
        }
    }
    int remove()
    {
        if(isEmpty()){
            return -1;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int parentIndex=0;
        int LCI=(2*parentIndex)+1;
        int RCI=(2*parentIndex)+2;
        while(LCI<pq.size()){
            int min_index=parentIndex;
            if(pq[min_index]>pq[LCI]){
                min_index=LCI;
            }
            if(RCI<pq.size() && pq[min_index] > pq[RCI]){
                min_index=RCI;
            }
            if(min_index==parentIndex){
                break;
            }
            int temp=pq[min_index];
            pq[min_index]=pq[parentIndex];
            pq[parentIndex]=temp;

            parentIndex=min_index;
            LCI=2*parentIndex+1;
            RCI=2*parentIndex+2;
        }
        return ans;
    }

};