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

ll gcd(ll a, ll b) {
  if (a == 0) {
    return b;
  }
  return gcd(b % a, a);
}

// number of digits in a number  
ll dig(ll n){
  return n;
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll a, b, c;
  cin>>a>>b>>c;
  
  
  // consider a<b<c
  ll cd, bd, ad;
  if(a<b){
    cd = getNo(c);
    ad = cd*2;
    bd = 
  }
  else{

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