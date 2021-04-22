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
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }
  ll ans, sum;
  ans = -100000;
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      sum=0;
      for(int k=i; k<=j; k++){
        sum+=arr[k];
      }
      ans = max(ans, sum);
    }
  }
  cout<<ans<<endl;
}

void solve2(){
  ll n;
  cin>>n;
  ll arr[n];
  ll i, j;
  rep(i, n){
    cin>>arr[i];
  }
  ll ans, sum=0;
  ans = -100000;
  for(i=0; i<n; i++){
      sum = max(arr[i], sum+arr[i]);
      ans = max(ans, sum);
  }
  cout<<ans<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve2();
  
   return 0;
}