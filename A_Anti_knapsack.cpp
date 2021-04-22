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
  vector<ll> v;
  ll i;
  for(i=k+1; i<=n; i++){
    v.push_back(i);
  }

    ll sum;
  for(i=1; i<k; i++){
    sum = (i*(i+1))/2;
    // cout<<i<<" "<<sum<<endl;
    if(sum<k){
      v.push_back(i);
    }
    else{
      break;
    }
  }

  ll s = v.size();
  cout<<s<<"\n";
  rep(i, s){
    cout<<v[i]<<" ";
  }
  cout<<"\n";
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



n = 10
k =  8

i=1 to k

k-i -> i

1, 2, 3, 

9, 10