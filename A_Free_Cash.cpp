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
 ll hr, min;
 ll time[n];
 ll i, temp;
 rep(i, n){
   cin>>hr>>min;
    temp = hr*60 + min;
    time[i] = temp;
 }

  if(n==1){
    cout<<1<<'\n';
    return;
  }

 // count the max number of repeats
 ll mx=1, cur=time[0];
 temp = 1;
 for(i=1; i<n; i++){
   if(time[i] == cur){
     temp++;
     mx =  max(mx, temp);
   }
   else{
     cur = time[i];
     temp = 1;
   }
 } 
 cout<<mx<<'\n';
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}