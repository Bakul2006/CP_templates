#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool detectCycle(int node,vector<int>adj[],vector<bool>&path,vector<bool>visited){
    visited[node] = 1;
    path[node] = 1;
    for(int j=0;j<adj[node].size();j++){
        if(adj[node][j]==1)return 1;
        if(visited[adj[node][j]])continue;  //neighbour already visited then skip it this is used for reducing the time complexity
        if(detectCycle(adj[node][j],adj,path,visited))return 1;
    }

    path[node] = 0;
    return 0;
}
bool isCyclic(int v,vector<int>adj[]){
    vector<bool>path(v,0);
    vector<bool>visited(v,0);
    return detectCycle(0,adj,path,visited);
}
int main(){
    return 0;
}
