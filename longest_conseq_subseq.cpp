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
  ll temp;
  set<ll> s;
  rep(i, n){
    cin>>temp;
    s.insert(temp);
  }


  set<ll>::iterator itr;
  itr = s.begin();

  ll cur, prv, ans=0;
  temp=1;
  prv=*itr;
  for(;itr!=s.end(); itr++){
    cur = *itr;
    // cout<<cur<<" "<<prv<<" "<<temp<<endl;
    if(prv+1 == cur){
      temp++;
    }
    else{
      ans=max(ans,temp);
      temp=1;
    }
    prv=cur;
  }
  ans=max(ans,temp);
  cout<<endl;
  cout<<ans<<endl;
} 
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}