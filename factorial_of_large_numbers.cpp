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
  
ll multiply(ll arr[], ll m, ll len){
  ll i, temp;
  ll carry=0;
  for(i=0; i<len; i++){
    temp = arr[i]*m + carry;
    arr[i] = temp%10;
    carry = temp/10;
  }
  while(carry){
    arr[len] = carry%10;
    carry = carry/10;
    len++; 
  }
  return len;
}

void solve()
{
 // All The Best 
 // Stay Focused 
  ll n;
  cin>>n;
  
  //insert n into array in reverse order
  ll arr[10001];
  ll i=0, len=0;
  ll temp = n;
  while(temp){
    arr[i] = temp%10;
    temp = temp/10;
    i++;
    len++;
  }

  
  // len = multiply(arr, m, len);
  for(i=n-1; i>=1; i--){
    len = multiply(arr,i,len);
  }


  //output the result
  for(i=len-1; i>=0; i--){
    cout<<arr[i];
  }
  cout<<endl;
}
  
int main()
{
  
   //fast_io;
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
  
   return 0;
}