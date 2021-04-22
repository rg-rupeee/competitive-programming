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
  ll n, k;
  cin>>n>>k;
  string str;
  cin>>ws;
  getline(cin,str);
  string l = "";
  ll i;
  
  for(auto i : str){
    if(i == ':'){
      l+=":";
    }
    l+=i;
  }

  queue<ll> ii;
  queue<ll> mm;

  ll ans = 0;

  for(i=0; i<l.length(); i++){

    if(l[i] == 'I'){
      while (!mm.empty() && mm.front()-i < k)
      {
        mm.pop();
      }
      if(!mm.empty()){
        ans++;
        mm.pop();
      }
      else{
        ii.push(i);
      }
    }
    else if(l[i] == 'M'){
      while (!ii.empty() && ii.front()-i < k)
      {
        ii.pop();
      }
      if(!mm.empty()){
        ans++;
        ii.pop();
      }
      else{
        mm.push(i);
      }
    }
    else if(l[i] == 'X'){
      while(!mm.empty()){
        mm.pop();
      }
      while (!ii.empty())
      {
        ii.pop();
      }
      
    }


  }

  cout<<ans<<endl;
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