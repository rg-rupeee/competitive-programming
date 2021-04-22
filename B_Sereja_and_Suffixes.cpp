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
  ll n, m;
  cin>>n>>m;
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }
  ll dis[n];
  memset(dis, 0, sizeof(dis));

  set<ll> s;
  s.insert(arr[n-1]);
  dis[n-1] = 1;
  for(i=n-2; i>=0; i--){
    if(s.find(arr[i]) == s.end()){
      dis[i] = dis[i+1]+1;
      s.insert(arr[i]);
    }
    else{
      dis[i] = dis[i+1];
    }
  }
  
  ll l;
  while(m--){
    cin>>l;
    cout<<dis[l-1]<<'\n';
  } 
}
  
int main()
{
  
   //fast_io;
  // 
   solve();
  
   return 0;
}