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
  
  ll x, y, z;
  ll ans = -1;
  ll temp;
  // x.a + y.b + z.c = n
  for(x=0; x<=n; x++){
    for(y=0; y<=n; y++){
      z = (n - (x*a + y*b))/c;
      // cout<<x<<" "<<y<<" "<<z<<endl;
      if((z>=0)&&(x*a+y*b+z*c == n)){
        // cout<<x<<" "<<y<<" "<<z<<endl;
        temp = x+y+z;
        ans = max(ans, temp);
      }
    }
  }
  cout<<ans<<'\n';
}
  
int main()
{
  
   fast_io;
  
   solve();
  
   return 0;
}