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

  ll n, c;
  cin>>n>>c;
  string s;
  cin>>s;
  vector<ll> pos;
  
  for(ll i=0; i<n; i++){
    if(s[i] == '1'){
      pos.push_back(i);
    }
  }

  ll cnt = 0;

  for(ll i=0; i+1< pos.size(); i++){
    if((pos[i+1]-pos[i]-1)>c){
      cnt++;
    }
  }

  if((!pos.empty()) && ((n-pos.back()-1+pos[0])>c)){
    cnt++;
  }

  if(cnt<=1){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<'\n';
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