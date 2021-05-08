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
  string s;
  cin>>s;
  ll n = s.size();
  ll i;

  map<char, ll> m;
  rep(i, n){
    m[s[i]]++;
  }

  bool f = true;
  for(auto x: m){
    if(x.second & 1){
      f = false;
      break;
    }
  }

  if(f){
    cout<<"First"<<'\n';
    return;
  }

  ll diff = n-1;

  if (diff & 1){
    cout<<"Second"<<'\n';
  }
  else{
    cout<<"First"<<'\n';
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