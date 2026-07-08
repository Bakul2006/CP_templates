#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
vector<int>findTwoElement(vector<int>&arr){
    map<int,int>mp;
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto i:mp){
        if(i.second == 2){
            ans.push_back(i.first);
        }
    }
    for(int i=1;i<=arr.size();i++){
        if(mp.find(i)== mp.end())ans.push_back(i);
    }
    return ans;
}
// approach two with single space complexity
vector<int>findTwoElement(vector<int>&arr){
    int n = arr.size();
    long long sum = (long long)n*(n+1)/2;
    long long squaresum = (long long)(n)*(n+1)*(2*n+1)/6;
    long long si=0,sqi=0;
    for(int i=0;i<n;i++){
        si += (long long)arr[i];
        sqi += (long long)arr[i]*arr[i];
    }
    long long X_Y = sum-si;
    long long X_PLUS_Y = (squaresum- sqi)/X_Y;
    long long repeating =  X_PLUS_Y + X_Y/2;
    long long missing = X_PLUS_Y - X_Y/2;
    vector<int>ans(repeating,missing);
    return ans;
} 
int main(){

}
