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
  ll n;
  cin>>n;
  vector<vector<ll>> vv;
  ll i;
  ll m;
  ll j, temp;
  rep(i, n){
    cin>>m;
    vector<ll> v;
    rep(j, m){
      cin>>temp;
      v.push_back(temp);
    }
    vv.push_back(v);
  }
  bool pos=false, neg=false;
  rep(i, n){
    m = vv[i].size();
    rep(j, m){
      if(vv[i][j]>0){
        pos=true;
      }
      if(vv[i][j]<0){
        neg=true;
      }
      // cout<<vv[i][j]<<" ";
    }
    // cout<<'\n';
  }

  if(pos && neg){
    cout<<1<<'\n';
  }
  else{
    cout<<0<<'\n';
  }
}
  
int main()
{
  
   fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}