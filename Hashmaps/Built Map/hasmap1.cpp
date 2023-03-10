//    Key     -- >     Hash Function      -- >     integer -- > Bucket Array
//    |                    |                                        |
//  can be any        1. HASH CODE                            1.Closed Hashing(Sperate Chaning) 
//  datatype but      2. COMPRESSION FUNCTION                 2.Open Hashing
//  we are using                                  
//  string for 
//  understanding...
//                for better understanding you learn from open sources like youtube .. 
#include<bits/stdc++.h>
using namespace std;

// for the Linked List in the bukets array
template<typename V>
class MapNode
{
    public:

    string key;
    V value;
    MapNode *next;
    
    MapNode(string Key,V value){
        this->key=key;
        this->value=value;
        next=NULL;
    }
    ~MapNode(){
        delete next;
    }
};


template<typename V> 
// for value can be type
class ourmap
{
    MapNode<V> ** bukets;
    int count;
    int numBukets;

    public:
    ourmap(){
        count=0;
        numBukets=5;
        bukets=new MapNode<int>*[numBukets];
        for(int i=0;i<numBukets;i++){
            bukets[i]=NULL;
        }
    }
    ~ourmap(){
        for(int i=0;i<numBukets;i++){
            delete bukets[i];
        }
        delete[] bukets;
    }

    int size(){
        return count;
    }

    V getvalue(string key){
        int buketindex=getBuketindex(key);
        MapNode<V> *head=bukets[buketindex];
        while(head!=NULL){
            if(head->key==key){
                return head->value;
            }
            head=head->next;
        }
        return 0;
    }
    private:
    // Hash Function
    int getBuketindex(string key){
        // hash code
        int hashcode=0;
        int currentCoffe=1;
        // "abc" -- > a*p^2 + b*p^1 + c*p^0  (p --> prime number) 
        for(int i=key.length()-1;i>=0;i--){
            hashcode+=key[i]*currentCoffe;
            hashcode=hashcode % numBukets;
            currentCoffe*=37; // any prime number 
            currentCoffe=currentCoffe % numBukets;
        }
        // Compression
        return hashcode%numBukets;
    }
    public:
    void insert(string key,V value){
        int buketindex=getBuketindex(key);
        MapNode<V> *head=bukets[buketindex];
        while(head!=NULL){
            // updating new entry
            if(head->key==key){
                head->value=value;
                return;
            }
            head=head->next;
        }
        // makeing new node 
        head=bukets[buketindex];
        MapNode<V> *node=new MapNode<V>(key,value);
        node->next=head;
        bukets[buketindex]=node;
        count++; 
    }

    V remove(string key){
        int buketindex=getBuketindex(key);
        MapNode<V> *head=bukets[buketindex];
        MapNode<V> *prev=NULL;
        while(head!=NULL)
        {
            if(head->key == key){
                if(prev==NULL){
                    // when we want to delete a head
                    buketindex[buketindex]=head->next;
                }else{
                prev->next=head->next;
                }
                V value=head->value;
                head->next=NULL;
                delete head;
                count--;
                return value;
            }
            prev=head;
            head=head->next;
        } 
        return 0;       
    }

};