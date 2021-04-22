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

  ll n, m, k;
  cin>>n>>m>>k;
  ll i, j, temp, inp, que;
  ll ans=0;
  rep(i,n){
    temp = 0;
    rep(j, k){
      cin>>inp;
      temp+=inp;
    }
    cin>>que;

    if(que<11 && temp>=m){
      ans++;
    }

  }

  cout<<ans<<'\n';
}
  
int main()
{
  
   fast_io;
   solve();
  
  //  ull t;
  //  cin>>t;
  //  while(t--)
  //  {
  //  }
   return 0;
}