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
  ll n, a, b, c;
  cin>>n>>a>>b>>c;
  ll ans=0;

 for(int i=1; i<=n; i++){
   if((i%a==0) || (i%b==0) || (i%c==0)){
     ans++;
   }
 }
 cout<<ans<<'\n';
}
  
int main()
{
  
   fast_io;
  
  //  ull t;
  //  cin>>t;
  //  while(t--)
  //  {
     solve();
  //  }
   return 0;
}