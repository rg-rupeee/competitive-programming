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
  ll x, y, s;
  cin>>x>>y>>s;
  ll i;
  ll prev_x=0, prev_y=0, sum_x=0, sum_y=0;
  ll cur;
  rep(i, x){
    cin>>cur;
    sum_x += (cur-prev_x-1)/s;
    prev_x = cur;
  } 
  sum_x += (n-prev_x)/s;
  rep(i, y){
    cin>>cur;
    sum_y += (cur-prev_y-1)/s;
    prev_y = cur; 
  }
  sum_y += (m-prev_y)/s;

  cout<<sum_x*sum_y<<'\n';

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