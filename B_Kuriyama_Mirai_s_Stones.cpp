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
  vector<ll> v(n);
  ll i;
  rep(i, n){
    cin>>v[i];
  }

  ll vsum[n];
  vsum[0] = v[0];
  for(i=1; i<n; i++){
    vsum[i] = vsum[i-1] + v[i];
  }

  sort(v.begin(), v.end());
  ll usum[n];
  usum[0] = v[0];
  for(i=1; i<n; i++){
    usum[i] = usum[i-1] + v[i];
  }

  ll m;
  cin>>m;
  ll type, l, r, sum;
  while (m--)
  {
    cin>>type;
    cin>>l>>r;
    l--;
    r--;
    if(type == 1){
      if(l==0){
        sum = vsum[r];
      }
      else{
        sum = vsum[r]-vsum[l-1];

      }
    }
    else{
      if(l==0){
        sum = usum[r];
      }
      else{
        sum = usum[r]-usum[l-1];

      }
    }

    cout<<sum<<'\n';
  }
  
}
  
int main()
{
  
   fast_io;
  
   solve();
  
   return 0;
}