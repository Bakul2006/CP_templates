#include <iostream>
#include <vector>
#include <queue>
using namespace std;
bool BFS(vector<int>adj[],vector<bool>&visited){
    visited[0] = 1;
    queue<pair<int,int>>q;
    q.push({0,-1});
    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second();
        q.pop();
        for(int j=0;j<adj[node].size();j++){
            if(visited[adj[node][j]]==1 && parent!= adj[node][j])return 1;
            if(parent == adj[node][j])continue;
            visited[adj[node][j]] = 1;
            q.push({adj[node][j],node});
        }

    }
    return 0;
}
bool iscycle(int v,vector<int>adj[]){
    vector<int>visited(v,0);
    for(int i=0;i<visited.size();i++){
        if(!visited[i]){
            if(BFS(adj,visited))return 1;
        }
    }
    return 0;
}
