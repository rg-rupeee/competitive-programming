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
  ll i;
  ll arr[n];
  rep(i, n){
    cin>>arr[i];
  }

  ll buy[n], sell[n];
  ll temp=arr[0];
  for(i=0; i<n; i++){
    temp = min(temp,arr[i]);
    buy[i] = temp;
  }

  ll ans=-1;
  for(i=0; i<n; i++){
    sell[i] = arr[i]-buy[i];
    if(sell[i]<0){
      sell[i] = 0;
    }
    ans = max(ans,sell[i]);
  }


  cout<<"buy:"<<endl;
  rep(i, n){
    cout<<buy[i]<<" ";
  }
  cout<<"\nsell:"<<endl;
  rep(i, n){
    cout<<sell[i]<<" ";
  }
  cout<<"\n ans: "<<ans<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}