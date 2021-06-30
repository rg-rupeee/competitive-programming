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
  cin>>n;
  ll arr[n][n];
  memset(arr, -1, sizeof(arr));
  ll i, j;
  for(i=0; i<n; i++){
    for(j=0; j<=i; j++){
      cin>>arr[i][j];
    }
  }

  for(i=1; i<n; i++){
    arr[i][0] = arr[i][0] + arr[i-1][0];
  }

  for(i=1; i<n; i++){
    for(j=1; j<=i; j++){
      arr[i][j] = arr[i][j] + max(arr[i-1][j], arr[i-1][j-1]);
    }
  }

  ll ans=-1;
  for(i=0; i<n; i++){
    ans = max(ans, arr[n-1][i]);
  }

  // rep(i, n){
  //   rep(j, n){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<'\n';
  // }

  cout<<ans<<'\n';
}
  
int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
   fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}