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
  ll i;
  ll arr[n];
  rep(i, n){
    cin>>arr[i];
  }

  ll el, cnt;
  el=arr[0];
  cnt=0;
  rep(i, n){
    if(cnt==0){
      el=arr[i];
    }
    if(arr[i] == el){
      cnt++;
    }    
    else{
      cnt--;
    }
  }
  ll tot=0;
  rep(i, n){
    if(arr[i] == el){
      tot++;
    }
  }

  if(tot>floor(n/2)){
    cout<<el<<endl;
  }
  else{
    cout<<-1<<endl;
  }

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}