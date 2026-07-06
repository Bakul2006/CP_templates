#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
vector<int>subarraysum(vector<int>&arr,int target){
    map<int,int>mp;
    int n = arr.size();
    long long sum =0;
    vector<int>res;
    for(int i=0;i<n;i++){
  sum+= arr[i];
  long long extrasum = sum - target;
  if(extrasum==0)return {1,i+1};
  if(mp.find(extrasum) != mp.end()){

        res.push_back(mp[extrasum]+2);
        res.push_back(i+1);
        return res;

  }
     mp[sum] = i;
    }
    return {-1};
}
