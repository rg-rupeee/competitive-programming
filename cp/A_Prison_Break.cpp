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
  ll n, m, r, c;
  cin>>n>>m>>r>>c;

  ll s1, s2, s3, s4;

  s1 = abs(1-r)+abs(1-c);
  s2 = abs(1-r)+abs(m-c);
  s3 = abs(n-r)+abs(1-c);
  s4 = abs(n-r)+abs(m-c);

  ll ans;
  ans = max(s1, s2);
  ans = max(ans, s3);
  ans = max(ans, s4);

  cout<<ans<<"\n";
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