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
  ll n, m, i;
  cin>>n>>m;
  ll a[n], b[m];
  rep(i, n){
    cin>>a[i];
  }
  rep(i, m){
    cin>>b[i];
  }
  sort(a, a+n);
  sort(b, b+m);

  vector<ll> v;
  ll j=0;
  i=0;

  while(i<n && j<m){
    if(a[i]<b[j]){
      v.push_back(a[i++]);
    }
    else if(a[i]>b[j]){
      v.push_back(b[j++]);
    }
    else{
      v.push_back(a[i++]);
      j++;
    }
  }

  // for(auto x: v){
  //   cout<<x<<" ";
  // }

  cout<<v.size()<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}