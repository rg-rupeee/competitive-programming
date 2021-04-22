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
  ll i;
  ll fuel[n];
  ll cost[n];
  rep(i, n){
    cin>>fuel[i];
  }
  rep(i, n){
    cin>>cost[i];
  }
  vector<pair<ll,ll>> vp;
  
  rep(i, n){
    vp.push_back(make_pair(cost[i],fuel[i]));
  }

  sort(vp.begin(),vp.end());  
  ll tcost=0;
  i=0;
  while(n){
    if(n<vp[i].second){
      tcost+=n*vp[i].first;
    }
    else{
      tcost+=vp[i].second*vp[i].first;
      n-=vp[i].second;
    }
  i++;
  }

  cout<<tcost<<endl;
}
  
int main()
{
  
   //fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}