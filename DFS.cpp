#include <iostream>
#include <vector>
using namespace std;
void DFS(int node,vector<bool>&visited,vector<int>adj[],vector<int>ans){
    visited[node] = 1;
    ans.push_back(node);
    for(int j=0;j<adj[node].size();j++){
        if(!visited[adj[node][j]]){
            DFS(adj[node][j],visited,adj,ans);
        }  // here after adding the starting function we just made the small start by pushing the node which are the child node of the vertex and added up them to the visited bool vertex
    }
}
vector<int>DFSOfGraph(int v,vector<int>adj[]){
    vector<bool>visited(v,0);
    vector<int>ans;
    DFS(0,visited,adj,ans);
    return ans;
}//just added the current starting node into the answer vector array then called out the dfs function
int main(){

}
