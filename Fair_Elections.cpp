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
  ll n, m;
  cin>>n>>m;
  ll a[n], b[m];

  ll i;
  ll acnt=0, bcnt=0;

  rep(i, n){
    cin>>a[i];
    acnt+=a[i];
  }

  rep(i, m){
    cin>>b[i];
    bcnt+=b[i];
  }

  ll  swaps = 0;
  bool flag = true;

  // cout<<acnt<<" "<<bcnt<<endl;

  if(acnt<=bcnt){
    
    flag = false;

    sort(a,a+n);
    sort(b,b+m,greater<ll>());

    // rep(i, n){
    //   cout<<a[i]<<" ";
    // }
    // cout<<endl;

    // rep(i, m){
    //   cout<<b[i]<<" ";
    // }
    // cout<<endl;
    

    ll ind = min(m,n);
    for(i=0; i<ind; i++){
      if(a[i]>=b[i]){
        // cout<<a[i]<<" "<<b[i]<<endl;
        break;
      }
      swaps++;
      //swap a[i] and b[i] and updatae acnt and bcnt
      acnt = acnt-a[i]+b[i];
      bcnt = bcnt-b[i]+a[i];
      //check if acnt > bcnt
      // cout<<acnt<<" "<<bcnt<<endl;
      if(acnt>bcnt){
        // cout<<i<<endl;
        flag = true;
        break;
      }
    }
  }

  if(flag){
    cout<<swaps<<'\n';
  }
  else{
    cout<<-1<<'\n';
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