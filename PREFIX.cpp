#include <bits/stdc++.h>
using namespace std;
vector<productExceptSelf(vector<int>&arr){
    int n = arr.size();
    vector<long>pre(n);
    vector<long>suf(n);
    pre[0] = arr[0];
    for(int i=1;i<n;i++){
        pre[i] = pre[i-1] * arr[i];
    }
    suf[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i] = suf[i-1]*arr[i];
    }
    vector<long long>res(n);
    for(int i=0;i<n;i++){
        if(i==0)res = suf[i+1];
        else if(i==n-1)pre[i-1];
        else res[i] = pre[i-1]*suf[i+1];
        return res;
    }
int main(){}
