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
  ll d, c;
  cin>>d>>c;
  ll a1, a2, a3;
  ll b1, b2, b3;
  cin>>a1>>a2>>a3;
  cin>>b1>>b2>>b3;

  // without coupon
  ll chargeWithout;
  chargeWithout = a1+a2+a3+d+b1+b2+b3+d;

  // with coupon
  ll chargeWith;
  chargeWith = c+a1+a2+a3+b1+b2+b3;
  if(a1+a2+a3 < 150){
    chargeWith += d;
  }
  if(b1+b2+b3 < 150){
    chargeWith += d;
  }

  if(chargeWith<chargeWithout){
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