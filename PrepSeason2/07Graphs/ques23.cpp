// Dijkstra's Algorithm --  using set
#include<bits/stdc++.h>
using namespace std;
// DT20256684561  ---> TCS 
// Thank you for registering with TCS !Please note your Reference ID: DT20256684561 for all further communication with TCS. 

vector<int> Dijkstra(int V,vector<vector<int>> adj,int source){

    set<pair<int,int>> st;
    
    vector<int> result(V,INT_MAX);
    result[source] = 0;
    st.insert({0,source});


    while(!pq.empty()){
        //  * -> give value
        auto &it = *st.begin();
        int distance = it.first;
        int node     = it.second;
        st.erase(it);

        for(auto &vec : adj[node]){

            int adj_node = vec[0];
            int adj_dist = vec[1];

            if(distance + adj_dist < result[adj_node]){

                if(result[adj_node]!=INT_MAX){
                    st.erase({result[adj_node],adj_node});
                    /*
                        auto it = st.find({result[adj_node],adj_node});
                        st.erase(it)
                    */
                }

                result[adj_node] = distance + adj_dist;
                st.insert({distance+adj_dist,adj_node});
            }
        }
    }

    return result;



}

int main(){

}