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

void solveOptimized(){
  ll n, k;
  cin>>n>>k;
  ll a[n];
  ll i, j;
  rep(i, n){
    cin>>a[i];
  }
  
  // rep(i, n){
  //   cout<<a[i]<<" ";
  // }
  // cout<<endl;

  i=0; 
  j=0;

  ll cnt, mx=1;
  map<ll,ll> m;

  while(j<n){
    m[a[j]]++;
    j++;
    
    while(m.size()>=k){
      m[a[i]]--;
      if(m[a[i]] == 0){
        m.erase(a[i]);
      }
      i++;
    }

    cnt = j-i;

    if(cnt>mx){
      mx = cnt;
    }

  }


  cout<<mx<<endl;
}


void solve()
{
 // All The Best 
 // Stay Focused 
  ll n, k;
  cin>>n>>k;
  ll a[n];
  ll i;
  rep(i, n){
    cin>>a[i];
  }
  ll j;
  ll cnt;
  ll mx = -1;
  set<ll> s;
  for(i=0; i<n; i++){
    s.clear();
    for(j=i; j<n; j++){
      s.insert(a[j]);
      if(s.size()>=k){
        break;
      }
    }
    cnt = j-i;
    if(cnt>mx){
      mx = cnt;
    }
  }

  cout<<mx<<endl;
}
  
int main()
{
  
   //fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solveOptimized();
   }
   return 0;
}