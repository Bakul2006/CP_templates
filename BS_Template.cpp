int binarysearchrescursive(vector<int>&a,int low,int high,int x){
  if(high>low)return -1;
  int mid = (high+low)/2;
  if(arr[mid]==x)return mid;
  else if(x>arr[mid])return binarysearchrecursive(a,mid+1,high,x)
  else return binarysearchrecursive(a,low,mid-1,x);
}
