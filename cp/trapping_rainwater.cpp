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

void solve2(){
  ll n;
  cin>>n;
  ll arr[n];
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }

  int res = 0;
  int left[n], right[n];

  left[0] = arr[0];
  for(i=1; i<n; i++){
    left[i] =  max(left[i-1], arr[i]);
  }

  right[n-1] = arr[n-1];
  for(i=n-2; i>=0; i--){
    right[i] = max(right[i+1], arr[i]);
  }

  for(i=1; i<n-1; i++){
    res+=min(left[i],right[i])-arr[i];
  }

  cout<<res<<endl;
}

void solve3(){
  ll n;
  cin>>n;
  ll arr[n];
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }
  res = 0;
  

  cout<<res<<endl;
}


void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  ll arr[n];
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }

  int res = 0;
  int left, right;
  for(i=1; i<n-1; i++){
    left = arr[i];
    rep(j, i){
      left = max(left, arr[j]);
    }

    right = arr[i];
    rep(i+1, n){
      right = max(right, arr[j]);
    }

    res += min(left, right) - arr[i];
  } 

  cout<<res;
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