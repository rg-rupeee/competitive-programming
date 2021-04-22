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
  
// naive approach
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

  // index of next greater to right 
  vector<ll> right;
  stack<ll, ll> s;

  for(i=n-1; i>=0; i--){
    if(s.empty()){
      right.push_back(-1);
    }
  }



  // index of next greater to left
  vector<ll> left;
  

  


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