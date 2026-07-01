#include <iostream>
#include <stack>
#include <vector>
using namespace std;
void DFS(int node,vector<int>adj[],vector<int>&visited,stack<int>&s){
    visited[node]=1;
    for(int j=0;j<adj[node].siz();j++){
        if(!visited[adj[node][j]]){
            DFS(adj[node][j],adj,visited,s);
        }
    }
    s.push(node);
}
vector<int>topologicalSort(int V,vector<int>adj[]){
    vector<bool>visited(V,0);
    stack<int>s;
    for(int i=0;i<visited.size();i++){
        if(!visited[i]){
            DFS(i,adj,visited,s);
        }
    }
    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}  //using DFS
