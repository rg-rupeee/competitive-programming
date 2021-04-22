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
  ll i=0;
  while(!(s[i]=='A' || s[i]=='B')){
    i++;
    if(i>s.length()) break;
  }
  
  char prv;
  ll a=0, b=0;
  if(s[i]=='A'){
    prv='A';
    a++;
  }
  else if(s[i]=='B'){
    prv='B';
    b++;
  }
  i++;
  ll cnt=0;
  while(i<s.length()){
    
    if(s[i] == '.'){
      cnt++;
    }
    else if(s[i] == 'A'){
      a++;
      if(prv == 'A'){
        a+=cnt;
      }
      cnt=0;
      prv = 'A';
    }
    else{
      b++;
      if(prv == 'B'){
        b+=cnt;
      }
      cnt=0;
      prv = 'B';
    }


    i++;
  }

    cout<<a<<" "<<b<<'\n';
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