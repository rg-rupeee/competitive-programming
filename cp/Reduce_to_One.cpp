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

ll arr[1000001];
  
void solve(ll arr[])
{
 // All The Best 
 // Stay Focused 
  ll i;
  for(i=1; i<1000001; i++){
    arr[i] = ((i%(1000000007)) + ((arr[i-1])%(1000000007)) + ((i*arr[i-1])%(1000000007)));
  }
}
  
int main()
{
  
   fast_io;
   
   solve(arr);
  
   ull t;
   cin>>t;
   while(t--)
   {
     ll n;
     cin>>n;
    cout<<arr[n]%1000000007<<endl;
   }
   return 0;
}