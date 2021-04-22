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
  
ll bin_search(ll arr[], ll x, ll low, ll high){
  ll mid;
  ll ans=high+1;
  while(low<=high){
    mid = low + ((high-low)/2);

    if(arr[mid]>x){
      ans = mid;
      high = mid-1;
    }
    else{
      low = mid-1;
    }
  }
  return ans;
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n, x; 
  cin>>n>>x;
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }
  cout<<bin_search(arr, x, 0, n-1);
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}