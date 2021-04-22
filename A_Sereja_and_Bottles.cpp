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
  
  // vector<pair<ll, ll>> vp;
  // vp.push_back(make_pair(1, 2));
  // cout<<vp[0].first<<" "<<vp[0].second<<endl;
  
void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;

  vector<pair<ll, ll>> vp;
  ll i, j;
  ll a, b;
  // int flag = {0};
  ll ans = 0;
  rep(i, n){
    cin>>a>>b;
    vp.push_back(make_pair(a, b));
  }

  // cout<<"given vector"<<endl;
  // rep(i, n){
  //   cout<<vp[i].first<<" "<<vp[i].second<<endl;
  // }
  bool f;
  for(i=0; i<n; i++){
    f = false;
    for(j=0; j<n; j++){
      if(i==j) continue;

      if(vp[j].second == vp[i].first){
        f = true;
        break;
      }
    }
    if(!f) ans++;
  }

  cout<<ans<<'\n';
}

int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}