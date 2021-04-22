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
  ll arr[n];
  ll i;
  rep(i, n){
    cin>>arr[i];
  }

  cout<<"Array Elements before sorting : "<<endl;
  rep(i, n){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  ll st, en;
  st=0;
  en=0;

  while(en<n){
    if(arr[en]<0){
     swap(arr[st], arr[en]);
     st++;
     en++;

    }
    else{
      en++;
    }
  }

  cout<<"Array Elements after sorting : "<<endl;
  rep(i, n){
    cout<<arr[i]<<" ";
  }
  cout<<endl;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}