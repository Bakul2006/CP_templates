#include <iostream>
#include <vector>
using namespace std;
 bool cycleDetect(int node,int parent,vector<in>adj,vector<bool>&visited){
    visited[node] = 1;
    for(int j=0;j<adj[node].size;j++){
        if(parent == adj[node][j])continue;
        if(visited[adj[node][j]] == 1)return 1;
        if(cycleDetect(adj[node][j],node,adj,visited))return 1;
    }
    return 0;
 }
bool isCycle(int v,vector<int>adj[]){
  vector<bool>visited(v,0);                       //if cycle dtected then return 1 if it returns to the same node and not parent thn return 1else return 0; 
  bool cycle = false;
  return cycleDetect(0,-1,adj,visited);
}
int main(){

}
