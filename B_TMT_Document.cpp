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
  ll i;
  ll cnt=0;
  bool flag = true;
  ll tcnt=0, mcnt=0;
  for(i=0; i<n; i++){
    if(s[i] == 'T'){
      tcnt++;
    }
    else{
      mcnt++;
    }
  }
  if(tcnt != mcnt*2) flag = false;
  for(i=0; i<n; i++){
    if(s[i] == 'T'){
      cnt++;
    }
    else{
      cnt--;
    }
    if(cnt<0){
      flag = false;
      break;
    }
  }
  cnt = 0;
  for(i=n-1; i>=0; i--){
    if(s[i] == 'T'){
      cnt++;
    }
    else{
      cnt--;
    }
    if(cnt<0){
      flag = false;
      break;
    }
  }
  
  if(flag){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
  }
}
  
int main()
{
  
   //fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}
// TTTMTTMMMTTT

