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
  
ll sum_dig(ll n){
  ll sum=0;
  while(n){
    sum += n%10;
    n=n/10;
  }
  return sum;
}
  
void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  ll sm = sum_dig(n);
  ll near, ans;
  if(sm%10 == 0){
    near = sm;
  }
  else{
    near = sm - sm%10 +10;
  }
  ans = near-sm+10*n;

  cout<<ans<<'\n';

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