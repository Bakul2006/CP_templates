#include <iostream>
#include <vector>
using namespace std;
int main(){
  stack<int>s;
  vector<int>arr;
  for(int i=0;i<arr.size;i++){
    while(!s.empty() && arr[s.top()]>arr[i]){
      s.pop();
    }
    s.push(i);
  }
}
