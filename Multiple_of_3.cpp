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
  ll k, d0, d1;
  cin>>k>>d0>>d1;
  ll d2 = (d0+d1)%10;
  if(k<4){
    if(k==2){
      if((d0+d1)%3 == 0){
        cout<<"YES"<<'\n';
      }
      else{
        cout<<"NO"<<'\n';
      }
    }
    else{
      if((d0+d1+d2)%3==0){
        cout<<"YES"<<'\n';
      }
      else{
        cout<<"NO"<<'\n';
      }
    }
  }
  else{
    ll s = (2*(d0+d1))%10+(4*(d0+d1))%10+(8*(d0+d1))%10+(6*(d0+d1))%10;
    ll res = d0+d1+d2+s*((k-3)/4);
    ll mod = (k-3)%4;
    if(mod == 1){
      res += (2*(d0+d1))%10;
    }
    else if(mod == 2){
      res += (2*(d0+d1))%10+(4*(d0+d1))%10;
    }
    else if(mod == 3){
      res+=(2*(d0+d1))%10+(4*(d0+d1))%10+(8*(d0+d1))%10;
    }

    if(res%3==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

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