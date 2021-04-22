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
  vector<pair<ll,ll>> counts;
  ll cnt=1, cur=arr[0];
  for(i=1; i<n; i++){
    if(arr[i] == arr[i-1]){
      cnt++;
    }
    else{
      counts.push_back(make_pair(cur, cnt));
      cnt=1;
      cur=arr[i];
    }
  }
  if(cnt>0){
      counts.push_back(make_pair(cur, cnt));
  }
  
  bool flag = true;
  if(counts.size() == 13){
    for(i=0; i<13; i++){
      if(counts[i] != counts[13-i-1]){
        flag = false;
      }
      if(i<7 && counts[i].first!=i+1){
        flag = false;
      }
    }
  }
  else{
    flag = false;
  }

  if(flag){
    cout<<"yes"<<'\n';
  }
  else{
    cout<<"no"<<'\n';
  }
  
}
  
int main()
{
  
   fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}