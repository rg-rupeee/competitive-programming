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
  ll arr[n];
  rep(i, n){
    cin>>arr[i];
  }
  ll mx = arr[0];
  ll prv[n];
  prv[0] = arr[0];
  for(i=1; i<n; i++){
    ll temp;
    temp = prv[i-1]*arr[i];
    prv[i] = max(temp, arr[i]);
    mx = max(mx,prv[i]);
  }

  cout<<mx<<endl;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}