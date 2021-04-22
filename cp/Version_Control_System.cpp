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

  ll n, m, k;
  cin>>n>>m>>k;
  
  ll i;
  int tr[n+1] = {0};
  int ig[n+1] = {0};
  ll temp;
  rep(i, m){
    cin>>temp;
    ig[temp] = 1;
  }
  rep(i,k){
    cin>>temp;
    tr[temp] = 1;
  }

  ll trig=0, untrig=0;
  REP(i,1,n){
    if(tr[i]&&ig[i]){
      trig++;
    }

    if(!tr[i]&&!ig[i]){
      untrig++;
    }
  }

  cout<<trig<<" "<<untrig<<"\n";
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