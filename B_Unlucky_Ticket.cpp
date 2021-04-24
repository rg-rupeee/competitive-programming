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
  string s;
  cin>>s;
  // size of s is 2n

  sort(s.begin(), s.begin()+n);
  sort(s.begin()+n, s.end());

  bool flag = false;
  ll i;

  // s[i]<s[i+n]
  for(i=0; i<n; i++){
    if(!(s[i]<s[i+n])){
      flag = true;
    }
  }

  if(flag){
    flag = false;
    // s[i]<s[i+n]
    for(i=0; i<n; i++){
      if(!(s[i]>s[i+n])){
        flag = true;
      }
    } 
  }

  if(!flag){
    cout<<"YES"<<'\n';
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