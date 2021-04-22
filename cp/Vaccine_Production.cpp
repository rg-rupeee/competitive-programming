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
  ll d1, v1, d2, v2, p;
  cin>>d1>>v1>>d2>>v2>>p;
  ll vaccine=0;
  ll day=0;
  while(vaccine<p){
    day++;
    if(day>=d1){
      vaccine+=v1;
    }
    if(day>=d2){
      vaccine+=v2;
    }
  }
  cout<<day<<'\n';
}
  
int main()
{
  
   fast_io;
     solve();
  
  //  ull t;
  //  cin>>t;
  //  while(t--)
  //  {
  //  }
   return 0;
}