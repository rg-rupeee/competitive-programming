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
  ll n, m, d;
  cin>>n>>m>>d;
  ll t = n*m;
  ll arr[t];
  ll i, j;
  rep(i, t){
    cin>>arr[i];
  }

  if(t==1){
    cout<<0<<'\n';
    return;
  }

  sort(arr, arr+t);

  ll med = t/2 -1;

  ll ans=LLONG_MAX;
  ll diff, cur, a;
  for(i=0; i<3; i++){
    a = 0;
    cur = arr[med+i];
    for(j=0; j<t; j++){
      diff = abs(cur - arr[j]);
      if(diff%d != 0){
        cout<<-1<<'\n';
        return;
      }
      a = a + (diff/d);
    }
    ans = min(ans, a);
  }

  cout<<ans<<'\n';
} 
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}