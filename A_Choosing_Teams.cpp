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
 ll n, k;
 cin>>n>>k;
 ll arr[n];

  ll i, ans=0;
  rep(i, n){
    cin>>arr[i];
    if(5-arr[i]>=k){
      ans++;
    }
  }

  // cout<<ans<<'\n';
  ans = ans/3;
  cout<<ans<<'\n';
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}