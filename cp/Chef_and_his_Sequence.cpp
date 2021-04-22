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
  cin>>n;
  ll a[n];
  rep(i,n){
    cin>>a[i];
  }
  cin>>m;
  ll b[m];
  rep(i,m){
    cin>>b[i];
  }

  bool flag = true;
  ll temp;
  ll j=0;
  rep(i,m){
    temp = b[i];
    ll found = false;
    while(j<n){
      if(a[j] == temp){
        found = true;
        break;
      }
      j++;
    }

    if(!found){
      flag = false;
    }
  }

  if(flag){
    cout<<"Yes"<<'\n';
  }else{
    cout<<"No"<<'\n';
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