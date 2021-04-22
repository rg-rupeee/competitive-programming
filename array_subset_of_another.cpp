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
  ll a[n], b[m];
  ll i;
  unordered_set<ll> sa;
  rep(i, n){
    cin>>a[i];
    sa.insert(a[i]);
  }
  bool flag = true;
  rep(i, m){
    cin>>b[i];
  //check if b[m] is subset of a[n]
    if(!(sa.find(b[i])!=sa.end())){
      flag = false;
    }
  }


  if(flag){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }


}


int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}