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
  
bool inline isPrime(int n) {
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  ll temp;
  ll i;
 
  // cout<<"test"<<endl;
 
  vector<pair<ll,ll>> vb;
  rep(i, n){
    cin>>temp;
    vb.push_back(make_pair(temp, i));
  }
  sort(vb.begin(),vb.end());
 
  // rep(i, n){
  //   cout<<vb[i].first<<" "<<vb[i].second<<endl;
  // }
  
  ll a[n];
  ll pn = 2;
  temp = vb[0].second;
  a[temp] = pn;
  
  for(i=0; i<n; i++){
      
    temp = vb[i].second;

    if(vb[i].first == vb[i-1].first){
      a[temp] = pn;
    }else{
      pn++;
      while(1){
        if(isPrime(pn)){
          break;
        }
        pn++;
      }
      a[temp] = pn;
    }

  }
  
  rep(i,n){
    cout<<a[i]<<'\n';
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