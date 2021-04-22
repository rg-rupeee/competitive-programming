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
  ll k, d0, d1, i;
  cin>>k>>d0>>d1;

  ll s = d0+d1;
  ll c = (2*s)%10 + (4*s)%10 + (8*s)%10 + (6*s)%10;

  ll num_cy = (k-3)/4;
  ll tot = 0;

  if(k==2){
    tot = s;
  }
  else{
    tot = 2*s + c*num_cy;
    ll left_ov = (k-3) - (num_cy*4);  
    ll p = 2;
    for(i=1; i<=left_ov; i++){
      tot+= (p*s);
      p = (p*2)%10;
    }
  }

  if((tot%3) == 0){
    cout<<"YES"<<'\n';
  }
  else{
    cout<<"NO"<<"\n";
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