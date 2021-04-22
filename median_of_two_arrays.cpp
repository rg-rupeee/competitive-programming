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
 
float getmed(ll a[], ll b[], ll start_a, ll end_a, ll start_b, ll end_b){
  
  if((end_a-start_a==1) && (end_b-start_b==1)){
    return (1.0*( max(a[start_a], b[start_b])+min(a[end_a],b[end_b])))/2;
  }

  int m1_index = (start_a+end_a)/2;
  int m2_index = (start_b+end_b)/2;

  int m2 = b[m2_index];
  int m1 = a[m1_index];

  if(m1 == m2){
    return m2;
  }

  if(m1<m2){
    start_a = m1_index;
    end_b = m2_index;
  }
  else{
    start_b = m2_index;
    end_a = m1_index;
  }

  return getmed(a,b,start_a, end_a, start_b, end_b);
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  ll i;
  ll a[n], b[n];
  rep(i, n){
    cin>>a[i];
  }
  rep(i, n){
    cin>>b[i];
  }

  cout<<" median is : "<<getmed(a,b,0,n-1,0,n-1)<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}