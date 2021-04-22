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
  ll r, c;
  cin>>r>>c;
  ll ans;
  if(r>c){
    if(r%2==0){
      ans = r*r-c;
    }
    else{
      ans = r*r-2*r-c-2;
    }
  }
  else{
    if(c%2==0){
      ans = c*c-2*c-r-2;
    }
    else{
      ans = c*c-r;
    }
  }
  cout<<ans+1<<'\n';
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