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
  

int pald(int n){
  int z=n;
  int rev=0;
  int temp;
  while(n){
    temp = n%10;
    n = n/10;
    rev = rev*10 + temp;
  }
  cout<<"rev: "<<rev<<endl;
  if(rev == z){
    return 1;
  }
  else{
    return 0;
  }
}

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
  ll cur;
  for(i=0; i<n; i++){
    cur = arr[i];

    //check if cur is pallindrome
    if(pald(cur) == 0){
      cout<<"no"<<endl;
    }
  }

  cout<<"yes"<<endl;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}