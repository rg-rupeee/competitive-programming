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
  ll a, b;
  cin>>a>>b;
  ll evena, evenb, odda, oddb;
  if(a%2!=0){
    odda=a/2+1;
  }
  else{
    odda=a/2;
  }
  if(b%2!=0){
    oddb=b/2+1;
  }
  else{
    oddb=b/2;
  }
  evena=a/2;
  evenb=b/2;

  ll o2 = odda*oddb;
  ll e2 = evena*evenb;

  cout<<o2+e2<<endl;

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