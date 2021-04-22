/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,a,n) for (i = a; i <= n; ++i)
#define REPR(i,n,a) for (i = n; i >= a; --i) 
  
  
void solve()
{
 // All The Best 
 // Stay Focused 
  int n;
  cin>>n;
  int arr[n];
  int i, j;
  rep(i, n){
    cin>>arr[i];
  }
  
  int ans[n];
  ans[0] = 0;

  for(i=1; i<n; i++){
    ans[i] = INT_MAX;
    for(j=0; j<i; j++){
      if(i<=j+arr[j] && ans[j]!=INT_MAX){
        ans[i] = min(ans[i], ans[j]+1);
        break;
      }
    }
  }
  cout<<ans[n-1]<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}