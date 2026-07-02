//leetcode 1823
#include <bits/stdc++.h>
using namespace std;
int findWinner(int n,int k){
  vector<int>arr;
  for(int i=0;i<n;i++)
  {
    arr.push_back(i+1);
  }
  int i=0;
  while(arr.size()>1){  //O(n2)
    int idx = (i+k-1)%arr.size();
    arr.erase(arr.begin+idx);
    i=idx
  }
  return arr[0];
  }
//approach 2 using queue as a practice
int findthe winner(int n,int k){
  queue<int>q;
  for(int i=1;i<=n;i++){
    q.push(i);
  }
  int i=0;
  while(q.size()>1){
    for(int count = 1;count<= k-1;count++){
      q.push(q.front());
      q.pop();
    }
    q.pop();
  }
  return q.front();
}
//using recursion we always see recursion here from bottom to top

int findWINNER(int n,int k){
  if(n==1)return 0;
  int idx = findWINNER(n-1,k);
  idx = (idx+k)%n;
  return idx;
}
int findTheWinnerF(int n,int k){
  int result_idx = findWINNER(n,k);
  return result_idx + 1
}
int main(){

}
