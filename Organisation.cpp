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

struct buckets
{
  ll tot=0;
  ll c1;
  ll c2;
};

  
void solve()
{
 // All The Best 
 // Stay Focused 
  ll n, k;
  cin>>n>>k;
  //colors: n+1
  vector<pair<ll,ll>> ducks;
  ll temp, i;
  rep(i, n+1){
    cin>>temp;
    ducks.push_back(make_pair(temp, i));
  }

  sort(ducks.begin(), ducks.end());

  buckets bc[n];
  ll j;
  for(i=0; i<n; i++){
    j=n-i-1;
    if(ducks[i].first<k){
      bc[]
    }
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