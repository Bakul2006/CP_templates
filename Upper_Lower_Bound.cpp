#include <iostrea>
#include <vector>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int>arr(n);
  for(int i=0;i<arr.size();i++){
    cin>>arr[i];
  }
  while(k--){
    int x;
    cin>>x;
    int idx = lower_bound(arr.begin(),arr.end(),x)-arr.begin();  //ower bound function returns the itreator only hence we alway do -arr.begin()
    cout<<idx+1<<"\n
;  }
}
