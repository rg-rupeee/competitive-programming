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
  ll a[n];
  ll i, temp, sum, mx, fsum;
  sum=0;
  mx=-1;
  rep(i, n){
    cin>>temp;
    sum+=temp;
    if(temp>mx){
      mx = temp;
    }
  }

  if(mx>ceil((sum*1.0)/(n-1))){
    fsum = mx*(n-1);
  }
  else{
    fsum = ceil((sum*1.0)/(n-1))*(n-1);
  }

  ll ans = fsum-sum;

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