#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>>dir{{1,0},{-1,0},{0,1},{0,-1}};
//find non obstacle count
//now also find the starting point
//then start the backtracking code
int result;
int countPoint;
void solve(vector<vector<int>>grid,int count,int i,int j){
    int m = grid.size();
    int n = grid[0].size();
    if(i<0 || j<0 ||i>=m||j>=n||grid[i][j]==-1)return;
    if(grid[i][j]==2){
        if(count==countPoint)result++;
        return;
    }
        grid[i][j] = -1;
        for(auto &a:dir){
            int new_i = i+a[0];
            int new_j = j+a[1];
            solve(grid,count+1,new_i,new_j);
        }
        grid[i][j]=0; 
}
int uniquePath(vector<vector<int>>grid){
    int m = grid.size();
    int n = grid[0].size();
     countPoint=1;
    int x,y;
    result=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==1){
                x=i;
                y=j;
            }
            if(grid[i][j]==0)countPoint++;
        }
    }
    int count =0;
    solve(grid,count,x,y);
    return result;
}
int main(){

}
