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
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }
  unordered_set<ll> sset;

  int sum=0;

  for(i=0; i<n; i++){
    sum+=arr[i];

    if(sum==0 || sset.find(sum)!=sset.end()){
      cout<<"Yes"<<endl;
      return;
    }
    sset.insert(sum);
  }
  
  cout<<"No"<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}