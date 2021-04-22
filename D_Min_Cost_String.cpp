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

char al[26];
  
void solve()
{
 // All The Best 
 // Stay Focused 
  ll n, k;
  cin>>n>>k;
  ll i;
  if(k==1){
    rep(i, n){
      cout<<al[0];
    }
    return;
  }
  if(n<=k){
    // print all integers from 1 to k
    rep(i, n){
      cout<<al[i];
    }
  }
  else{
    ll gap=0, j=0, st=0;
    rep(i, n){
      cout<<al[j];
      j = j+gap;
      if(j>=k){
        j = j%k;
        gap = (gap+1)%k;
      }
    }
  }
  cout<<"\n";
}
  
int main()
{ 
    char ch = 'a';
    for(int i=0; i<26; i++){
      al[i] = ch;
      ch++;
    }

   //fast_io;
  
   solve();
  
   return 0;
}