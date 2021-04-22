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
  n--;
  vector<int> arr;
  ll i, temp;
  for(i=0; i<n; i++){
    cin>>temp;
    arr.push_back(temp);
  }
  sort(arr.begin(), arr.end());
  ll ans;
  bool flag = true;
  for(i=0; i<n; i++){
    if(arr[i] != i+1){
      ans = i+1;
      flag = false;
      break;
    }
  }

  if(flag){
    cout<<n+1<<'\n';
  }
  else{
    cout<<ans<<'\n';
  }  
} 
  
int main()
{
  
  solve();
  
   return 0;
}