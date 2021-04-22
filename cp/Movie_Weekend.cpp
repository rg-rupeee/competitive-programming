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
  vector<pair<ll,ll>> vp;
  ll l[n], r[n];
  ll i;
  rep(i, n){
    cin>>l[i];
  }
  rep(i, n){
    cin>>r[i];
  }
  
  ll mx=0, rmx=0, temp, ind = -1;
  rep(i,n){
    temp = l[i]*r[i];
    if(temp == mx){
      if(r[i]>rmx){
        rmx = r[i];
        ind = i;
      }
    }else if(temp > mx){
      mx = temp;
      rmx = r[i];
      ind = i;
    }
  }

  cout<<ind+1<<'\n';

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