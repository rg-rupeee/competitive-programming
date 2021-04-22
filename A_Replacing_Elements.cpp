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
  ll d;
  cin>>n>>d;
  ll a[n];
  ll i;
  
  bool isGreater = false;
  rep(i, n){
    cin>>a[i];
    if(a[i]>d){
      isGreater = true;
    }
  }

  if(!isGreater){
    cout<<"YES"<<'\n';
    return;
  }

  ll j;
  bool flag=false;

  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(a[i]+a[j]<=d){
        flag = true;
        break;
      }
    }
  }

  if(flag){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
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