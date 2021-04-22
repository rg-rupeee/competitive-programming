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
  cin>>n;
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }
  cin>>m;

  sort(arr, arr+n);
  ll st[m] = {0};
  
  ll j=0;
  i=0;
  while(i<n){
    
    st[j] += arr[i]; 

    i++;
    j++;

    if(j>=m){
      j=0;
    }
  }
  sort(st, st+m);

  rep(i, m){
    cout<<st[i]<<" ";
  }
  cout<<endl;

  ll ans = st[m-1]-st[0];
  cout<<ans<<endl;
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