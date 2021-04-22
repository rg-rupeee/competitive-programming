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
  int n;
  cin>>n;
  int i;
  vector<int> v(n);
  rep(i, n){
    cin>>v[i];
  }

  // Given an array of integers, every element appears thrice except for one which occurs once.
  
  int cnt[32];       
  for(i=0; i<n; i++){
    int j, no;
    no = v[i];

    for(j=0; j<32; j++){
      if((no&(1<<j))){
        arr[j]++;
      }
    }
  }

  for(j=0; j<32;  j++){
    arr[j] = arr[j] % 3;
  }

  int ans = 0;
  for(j=0; j<32;  j++){
    if(arr[j]){
      ans = ans | (1<<j);
    }
  }

  return ans;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}