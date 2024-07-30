#include<bits/stdc++.h>
using namespace std;
class PriorityQueue
{
    vector<int> pq;
    public:
    PriorityQueue(){

    }
    int size(){
        return pq.size();
    }
    bool isEmpty(){
        return pq.size()==0;
    }
    int getMax(){
        if(isEmpty()){
            return -1;
        }
        return pq.at(0);
    }
    void insert(int data)
    {
        pq.push_back(data);
        int childIndex=pq.size()-1;
        while(childIndex>0)
        {
            int parentIndex=(childIndex-1)/2;
            if(pq[childIndex] > pq[parentIndex]){
                int temp=pq[childIndex];
                pq[childIndex]=pq[parentIndex];
                pq[parentIndex]=temp;
            }else{
                break;
            }
            childIndex=parentIndex;
        }
    }
    int remove(){
        if(isEmpty()){
            return -1;
        }
        int ans=pq.at(0);
        pq.at(0)=pq.at(pq.size()-1);
        pq.pop_back();
        int parentIndex=0;
        int LCI=(2*parentIndex)+1;
        int RCI(2*parentIndex)+2;
        while(LCI<pq.size()){
            int maxIndex=parentIndex;
            if(pq[maxIndex]<pq[LCI]){
                maxIndex=LCI;
            }
            if( RCI<pq.size() && pq[maxIndex]<PQ[RCI]){
                maxIndex=RCI;
            }
            if(maxIndex==parentIndex){
                break;
            }
            int temp=pq[maxIndex];
            pq[maxIndex]=pq[parentIndex];
            pq[parentIndex]=temp;
            parentIndex=maxIndex;
            LCI=(2*parentIndex)+1;
            RCI=(2*parentIndex)+2;
        }
        return ans;
    }
};