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
  ll a[n];
  ll b[n];
  ll i, j;
  rep(i, n){
    cin>>a[i];
  }
  rep(i, m){
    cin>>b[i];
  }
  ll mnind, temp, ar;
  for(i=0; i<n; i++){
    mnind = i;
    ar = 0;
    for(j=i; j<n; j++){
      if(a[j]<a[mnind]){
        mnind = j;
      }
    }
    for(j=0; j<m; j++){
      if(ar == 0){
        if(a[j]<a[mnind]){
          mnind = j;
          ar = 1;
        }
      }
      else{
        if(a[j]<a[mnind]){
          mnind = j;
        }
      }
    }

    if(ar == 0){
      temp = a[i];
      a[i] = a[mnind];
      a[mnind] = temp;
    }
    else{
      temp = a[i];
      a[i] = b[mnind];
      b[mnind] = temp;
    }
  }

  cout<<" array a is : "<<endl;
  rep(i, n){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  cout<<" array b is : "<<endl;
  rep(i, m){
    cout<<b[i]<<" ";
  }
  cout<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}