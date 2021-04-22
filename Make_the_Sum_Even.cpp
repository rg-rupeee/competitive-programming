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
  ll i;
  bool two = false;
  ll odd=0, even=0;
  rep(i, n){
    cin>>a[i];
    if(a[i] == 2){
      two = true;
    }
    if(a[i]&1){
      odd++;
    }
    else{
      even++;
    }
  }  
  ll ans = 0;
  if(odd&1){

    if(two){
      ans = 1;
    }
    else{
      ans = -1;
    }

  }

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