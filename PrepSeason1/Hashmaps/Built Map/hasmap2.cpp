#include <string>
#include<bits/stdc++.h>
using namespace std;
template <typename V>
class MapNode {
	public:
		string key;
		V value;
		MapNode* next;

		MapNode(string key, V value) {
			this->key = key;
			this->value = value;
			next = NULL;
		}

		~MapNode() {
			delete next;
		}
};

template <typename V>
class ourmap {
	MapNode<V>** buckets;
	int count;
	int numBuckets;

	public:
	ourmap() {
		count = 0;
		numBuckets = 5;
		buckets = new MapNode<V>*[numBuckets];
		for (int i = 0; i < numBuckets; i++) {
			buckets[i] = NULL;
		}
	}

	~ourmap() {
		for (int i = 0; i < numBuckets; i++) {
			delete buckets[i];
		}
		delete [] buckets;
	}

	int size() {
		return count;
	}

	V getValue(string key) {
		int bucketIndex = getBucketIndex(key);
		MapNode<V>* head = buckets[bucketIndex];
		while (head != NULL) {
			if (head->key == key) {
				return head->value;
			}
			head = head->next;
		}
		return 0;
	}

	private:
	int getBucketIndex(string key) {
		int hashCode = 0;

		int currentCoeff = 1;
		for (int i = key.length() - 1; i >= 0; i--) {
			hashCode += key[i] * currentCoeff;
			hashCode = hashCode % numBuckets;
			currentCoeff *= 37;
			currentCoeff = currentCoeff % numBuckets;
		}

		return hashCode % numBuckets;
	}
    void rehash()
    {
        // storeing in temporary memory
        MapNode<V> **temp=buckets;
        // Makeing a new buktes of double size
        buckets = new MapNode<V>*[2*numBuckets];
        for(int i=0;i<2*numBuckets;i++){
            buckets[i]=NULL;
        }
        int oldBuketCount=numBuckets;
        numBuckets *=2;
        count=0;
        // inserting a oldBuket into  newBukets sized Bukets
        for(int i=0;i<oldBuketCount;i++){
            MapNode<V>* head=temp[i];
            while(head!=NULL){
                string key=head->key;
                V value =head->value;
                insert(key,value);
                head=head->next; 
            }
        }
        // deleteing previous map
        for(int i=0;i<oldBuketCount;i++){
            MapNode<int> *head=temp[i];
            delete head;
        }
        delete[]temp;
    }
	public:
    double getloadfactor(){
        return (1.0*count)/numBuckets;
    }
	void insert(string key, V value) {
		int bucketIndex = getBucketIndex(key);
		MapNode<V>* head = buckets[bucketIndex];
		while (head != NULL) {
			if (head->key == key) {
				head->value = value;
				return;
			}
			head = head->next;
		}
		head = buckets[bucketIndex];
		MapNode<V>* node = new MapNode<V>(key, value);
		node->next = head;
		buckets[bucketIndex] = node;
		count++;
        // Rehasing 
        double loadFactor=(1.0*count)/numBuckets; 
        if(loadFactor > 0.7){
            rehash();
        }
	}
	V remove(string key) {
		int bucketIndex = getBucketIndex(key);
		MapNode<V>* head = buckets[bucketIndex];
		MapNode<V>* prev = NULL;
		while (head != NULL) {
			if (head->key == key) {
				if (prev == NULL) {
					buckets[bucketIndex] = head->next;
				} else {
					prev->next = head->next;
				}
				V value = head->value;
				head->next = NULL;
				delete head;
				count--;
				return value;
			}
			prev = head;
			head = head->next;
		}
		return 0;
	}

};
int main()
{
    ourmap<int> map;
    for(int i=0;i<10;i++){
        char c='0'+i;
        string key ="abc";
        key=key+c;
        int value=i+1;
        map.insert(key,value);
        cout<<map.getloadfactor()<<endl; 
    }
    for(int i=0;i<10;i++){
        char c='0'+i;
        string key="abc";
        key=key+c;
        cout<<key<<":"<<map.getValue(key)<<endl;
    }

    cout<<map.size()<<endl;
}






// // Rehasing -- > Changes in insert function
// #include<bits/stdc++.h>
// using namespace std;

// // for the Linked List in the bukets array
// template<typename V>
// class MapNode
// {
//     public:

//     string key;
//     V value;
//     MapNode *next;
    
//     MapNode(string Key,V value){
//         this->key=key;
//         this->value=value;
//         next=NULL;
//     }
//     ~MapNode(){
//         delete next;
//     }
// };


// template<typename V> 
// // for value can be type
// class ourmap
// {
//     MapNode<V> ** bukets;
//     int count;
//     int numBukets;

//     public:
//     ourmap(){
//         count=0;
//         numBukets=5;
//         bukets=new MapNode<int>*[numBukets];
//         for(int i=0;i<numBukets;i++){
//             bukets[i]=NULL;
//         }
//     }
//     ~ourmap(){
//         for(int i=0;i<numBukets;i++){
//             delete bukets[i];
//         }
//         delete[] bukets;
//     }

//     int size(){
//         return count;
//     }

//     V getvalue(string key){
//         int buketindex=getBuketindex(key);
//         MapNode<V> *head=bukets[buketindex];
//         while(head!=NULL){
//             if(head->key==key){
//                 return head->value;
//             }
//             head=head->next;
//         }
//         return 0;
//     }
//     private:
//     // Hash Function
//     int getBuketindex(string key){
//         // hash code
//         int hashcode=0;
//         int currentCoffe=1;
//         // "abc" -- > a*p^2 + b*p^1 + c*p^0  (p --> prime number) 
//         for(int i=key.length()-1;i>=0;i--){
//             hashcode+=key[i]*currentCoffe;
//             hashcode=hashcode % numBukets;
//             currentCoffe*=37; // any prime number 
//             currentCoffe=currentCoffe % numBukets;
//         }
//         // Compression
//         return hashcode%numBukets;
//     }
    // void rehash()
    // {
    //     // storeing in temporary memory
    //     MapNode<V> **temp=bukets;
    //     // Makeing a new buktes of double size
    //     bukets = new MapNode<V>*[2*numBukets];
    //     for(int i=0;i<2*numBukets;i++){
    //         bukets[i]=NULL;
    //     }
    //     int oldBuketCount=numBukets;
    //     numBukets *=2;
    //     count=0;
    //     // inserting a oldBuket into  newBukets sized Bukets
    //     for(int i=0;i<oldBuketCount;i++){
    //         MapNode<V>* head=temp[i];
    //         while(head!=NULL){
    //             string key=head->key;
    //             V value =head->value;
    //             insert(key,value);
    //             head=head->next; 
    //         }
    //     }
    //     // deleteing previous map
    //     for(int i=0;i<oldBuketCount;i++){
    //         MapNode<int> *head=temp[i];
    //         delete head;
    //     }
    //     delete[]temp;
    // }
//     public:
    // double getloadfactor(){
    //     return (1.0*count)/numBukets;
    // }
//     void insert(string key,V value){
//         int buketindex=getBuketindex(key);
//         MapNode<V> *head=bukets[buketindex];
//         while(head!=NULL){
//             // updating new entry
//             if(head->key==key){
//                 head->value=value;
//                 return;
//             }
//             head=head->next;
//         }
//         // makeing new node 
//         head=bukets[buketindex];
//         MapNode<V> *node=new MapNode<V>(key,value);
//         node->next=head;
//         bukets[buketindex]=node;
//         count++; 

        // // Rehasing 
        // double loadFactor=(1.0*count)/numBukets; 
        // if(loadFactor > 0.7){
        //     rehash();
        // }
//     }

//     V remove(string key){
//         int buketindex=getBuketindex(key);
//         MapNode<V> *head=bukets[buketindex];
//         MapNode<V> *prev=NULL;
//         while(head!=NULL)
//         {
//             if(head->key == key){
//                 if(prev==NULL){
//                     // when we want to delete a head
//                     bukets[buketindex]=head->next;
//                 }else{
//                 prev->next=head->next;
//                 }
//                 V value=head->value;
//                 head->next=NULL;
//                 delete head;
//                 count--;
//                 return value;
//             }
//             prev=head;
//             head=head->next;
//         } 
//         return 0;       
//     }

// };