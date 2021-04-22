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
  
bool known(string str, string match){

  ll i, j;

  rep(i,str.length()){
    bool letter = false;
    rep(j,match.length()){
      if(str[i] == match[j]){
        letter = true;
      }
    }
    if(!letter){
      return false;
    }
  }

  return true;
}
  
void solve()
{
 // All The Best 
 // Stay Focused 

  string kn;
  cin>>kn;
  ll n;
  cin>>n;
  ll i;
  string book[n];
  rep(i, n){
    cin>>book[i];
  }

  rep(i, n){
    if(known(book[i], kn)){
      cout<<"Yes"<<'\n';
    }
    else
    {
      cout<<"No"<<'\n';
    }
  }

}
  
int main()
{
  

  //  fast_io;
  
   solve();

   return 0;
}