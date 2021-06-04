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

  ll pre[n];
  pre[0] = arr[0];
  pre[0] %= n;

  for(i=1; i<n; i++){
    // + n because if we encouter negetive number
    pre[i] = (arr[i]%n + pre[i-1]%n + n)%n;
  }

  map<ll, ll> mp;
  rep(i, n){
    mp[pre[i]]++;
  }

  ll num=-1;
  for(i=0; i<n; i++){
    if(mp[i]>1){
      num = i;
      break;
    }
  }

  if(num == -1){
    for(i=0; i<n; i++){
      if(pre[i] == 0){
        break;
      }
    }
    // printing size
    cout<<i+1<<'\n';
    for(ll j = 0; j<=i; j++){
      cout<<i+1<<" ";
    }
    cout<<'\n';
    return;
  }

  vector<ll> v;
  for(i=0; i<n; i++){
    if(pre[i] == num){
      v.push_back(i);
      if(v.size() == 2) break;
    }
  }

  // print size
  cout<<v[1]-v[0]<<'\n';

  // printing indexes
  for(i=v[0]+1; i<=v[1]; i++){
    cout<<i+1<<" ";
  }
  cout<<'\n';
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