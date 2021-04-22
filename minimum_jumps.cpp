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
  
  //approach fails for tc: 10 9 8 7 6 5 4 3 2 1 1
void solve()
{
 // All The Best 
 // Stay Focused 
  int n;
  cin>>n;
  int arr[n];
  int i, j;
  rep(i, n){
    cin>>arr[i];
  }
  
  int cnt=0, k, mx;
  i=0;

  while(i<n){
    cnt++;
    j=i+arr[i];
    //find maximum number b/w index i and j
    mx = -1;
    for(k=i+1; k<=j; k++){
      if(arr[k]>=mx){
        mx = arr[k];
        i=k;
      }
    }
  }

  cout<<cnt<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}