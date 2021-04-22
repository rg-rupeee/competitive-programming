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
  ll n, m;
  cin>>n>>m;
  ll i, temp;
  vector<ll>a;
  vector<ll>::iterator it;
  rep(i, n){
    cin>>temp;
    a.push_back(temp);
  } 
  rep(i, m){
    cin>>temp;
    a.push_back(temp);
  }
  sort(a.begin(),a.end());
  it = std::unique(a.begin(),a.end());
  a.resize(std::distance(a.begin(),it));

  cout<<a.size()<<endl;
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