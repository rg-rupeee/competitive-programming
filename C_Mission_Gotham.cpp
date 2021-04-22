/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <iostream>
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
  ll cap[n+1];
  ll i;
  rep(i, n){
    cin>>cap[i+1];
  }

  ll q;
  cin>>q;
  ll x, k, ans, j, temp;
  while(q--){
    cin>>x>>k;
    
    // k->people dropped at x->district 
    if(cap[x]>= k){
      cap[x] = cap[x] - k;
      ans = 0;
    }
    else{
      k = k - cap[x];
      cap[x] = 0;
      ans = 0;
      i = x+1;
      j = 1;
      for(i=x+1; i<=n; i++){
        if(cap[i]>=k){
          ans += k*j;
          cap[i] = cap[i] - k;
          k = 0;
          break;
        }
        else{
          k = k - cap[i];
          ans += cap[i]*j;
          cap[i] = 0;
        }
        j++;
      }
      cout<<ans<<'\n';
    }

  }

}
  
int main()
{
  
   fast_io;
  
   solve();
  
   return 0;
}