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
  ll n;
  cin>>n;

  ll i, sum=0;
  ll temp;
  ll hash[n+1] = {0};
  hash[0] = 1;

  rep(i, n){
    cin>>temp;
    sum+=temp;
    hash[temp]++;
  }

  ll diff = ((n*(n+1))/2) - sum;
  // ll rsum = (n*(n+1))/2;

  ll flag = 0;
  ll extra = 0;
  for(i=1; i<=n; i++){
    extra += hash[i] - 1;
    if(extra < 0){
      flag = 1;
      break;
    }
  }


  ll ans;

  // cout<<sum<<" "<<rsum<<endl;
  if(diff<=0 || flag){
    ans = 2;
  }
  else{
    // ll diff = rsum - sum;

    if(diff % 2 == 0){
      ans = 2;
    }
    else{
      ans = 1;
    }

  }

  if(ans == 1){
    cout<<"First"<<'\n';
  }
  else{
    cout<<"Second"<<'\n';
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