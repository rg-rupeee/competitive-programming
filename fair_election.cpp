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
  ll n, m, i;
  cin>>n>>m;
  ll a[n], b[m];
  rep(i, n){
    cin>>a[i];
  }
  rep(i, m){
    cin>>b[i];
  }
  ll ans=0;
  ll acnt=a[0]*n;
  ll bcnt=b[0]*m;
  bool flag = false;

  if(acnt<=bcnt){
    i=0;
    while(i<n && i<m){
      ans++;
      acnt = acnt - a[i] + b[i];

      bcnt = bcnt - b[i] + a[i];

      if(acnt>bcnt){
        flag = true;
        break;
      }

      i++;
    }

  }

  if(flag){
    cout<<ans<<'\n';
  }
  else{
    cout<<-1<<'\n';
  }

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