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
  ll left[n], right[n];
  left[0] = arr[0];
  right[n-1] = arr[n-1];
  for(i=1; i<n; i++){
    left[i] = max(arr[i], left[i-1]);
  }
  for(i=n-2; i>=0; i--){
    right[i] = max(arr[i], right[i+1]);
  }

  //left
  rep(i, n){
    cout<<left[i]<<" ";
  }
  cout<<endl;
  //right
  rep(i, n){
    cout<<right[i]<<" ";
  }
  cout<<endl;

  ll sum=0;
  ll temp;
  rep(i, n){
    temp = min(right[i],left[i]) - arr[i];
    if(temp<0){
      temp = 0;
    }
    sum+=temp;
  }

  cout<<sum<<endl;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}