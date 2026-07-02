#include <iostream>
#include <vector>
using namespace std;
int solve(int n,int k){
    if(n==1 && k==1)return 0;
    int mid;
    if(k<=n/2)
    return solve(n-1,k);
else return !solve(n-1,k);
}
int main(){
    return 0;
}