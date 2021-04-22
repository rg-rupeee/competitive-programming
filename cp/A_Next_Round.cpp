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
  ll n, k;
  cin>>n>>k;
  ll arr[n];
  ll i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  sort(arr,arr+n, greater<ll>());
 
  ll score = arr[k-1];
  //cout<<score<<endl;
  ll ans = 0;
  rep(i,n){
    if(arr[i]>=score && arr[i]>0){
      ans++;
    }
  }

  cout<<ans<<endl;

}
  
int main()
{
  

   //fast_io;
  
   //ull t;
   //cin>>t;
  //  while(t--)
  //  {
     solve();
  //  }
   return 0;
}