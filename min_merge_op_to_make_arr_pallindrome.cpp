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
 ll arr[n];
 ll i;
 rep(i, n){
   cin>>arr[i];
 }

  ll j;
  i=0; 
  j=n-1;
  ll ans=0;

  while(i<=j){
    if(arr[i] == arr[j]){
       i++;
       j--;
    }
    else if(arr[i]<arr[j]){
      i++;
      arr[i] = arr[i]+arr[i-1];
      ans++;
    }
    else{
      j--;
      arr[j] = arr[j]+arr[j+1];
      ans++;
    }

  }


  cout<<ans<<endl;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}