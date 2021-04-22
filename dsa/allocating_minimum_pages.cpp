#include <iostream>
using namespace std;

#define ll long long

bool isPossible(int arr[], int n, int m, int curr_min){
  ll sum=0;
  ll st=1;
  ll i;
  for(i=0; i<n; i++){
    sum+=arr[i];
    if(sum>curr_min){
      st++;
      sum=arr[i];
    }
    
    if(st>m){
      return false;
    }
  }
  return true;
}

int solve(int arr[], int n, int m){
  ll sum, i;
  sum=0;
  for(i=0; i<n; i++){
    sum+=arr[i];
  }
  if(n<m){
    return -1;
  }
  ll mn, mx, mid;
  mn=0;
  mx=sum;
  ll res=INT_MAX;
  while(mn<=mx){
    mid = (mn+mx)/2;
    if(isPossible(arr,n,m,mid)){
      res=min(res,mid);
      mx=mid-1;
    }
    else{
      mn=mid+1;
    }
  }
  return res;
}

int main(){

  int n, m;
  cin>>n>>m;
  int i;
  int arr[n];
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"mx page : "<<solve(arr, n, m);

  return 0;
}