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
  sort(arr, arr+n);
  ll cnt=1;
  ll mxCnt = 1;
  for(i=1; i<n; i++){
    if(arr[i]==arr[i-1]){
      cnt++;
      mxCnt = max(mxCnt, cnt);
    }
    else{
      cnt = 1;
    }
  }

  // cout<<mxCnt<<endl;
  bool flag;
  if(n&1){
    if(mxCnt>(n/2+1)){
      flag = false;
    }
    else{
      flag = true;
    }
  }
  else{
    if(mxCnt > n/2){
      flag = false;
    }
    else{
      flag = true;
    }
  }

  if(flag){
    cout<<"YES"<<"\n";
  }
  else{
    cout<<"NO"<<'\n';
  }

}
  
int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
   fast_io;
  
   solve();
  
   return 0;
}