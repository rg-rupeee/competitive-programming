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
  ll c[n];
  ll i;
  map <ll, ll> colors;
  rep(i, n){
    cin>>c[i];
    colors[c[i]]++;
  }
  ll curColor, j, days, minDays;
  minDays = 1000001;
  for(auto x: colors){
    days = 0;
    curColor = x.first;
    // cout<<curColor<<" -< c"<<endl;
    for(j=0; j<n; j++){
      if(c[j] != curColor){
        j = j+k-1;
        days++;
      }
    }

    if(days<minDays){
      minDays = days;
    }
  }

  cout<<minDays<<'\n';
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