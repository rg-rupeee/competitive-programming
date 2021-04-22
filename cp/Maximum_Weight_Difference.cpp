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

  ll n, k, temp;
  cin>>n>>k;
  ll weights[n];
  ll i;
  rep(i,n){
    cin>>weights[i];
  }
  temp = k;
  sort(weights,weights+n);
    ll wa=0, wb=0, diffa;
    rep(i, n){
      if(k){
        wa+=weights[i];
        k--;
      }
      else{
        wb+=weights[i];
      }
    }
    diffa = wb-wa;
    diffa = abs(diffa);

    ll wa_=0, wb_=0, diffa_;
    k = n-temp;
    rep(i, n){
      if(k){
        wa_+=weights[i];
        k--;
      }
      else{
        wb_+=weights[i];
      }
    }
    diffa_ = wb_-wa_;

  if(diffa>diffa_){
    cout<<diffa<<endl;
  }else
  {
    cout<<diffa_<<endl;
  }
  

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