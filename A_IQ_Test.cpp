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
  int arr[4][4];
  char ch;
  int i, j;
  memset(arr, 0, sizeof(arr));
  for(i=0; i<4; i++){
    for(j=0; j<4; j++){
      cin>>ch;
      if(ch=='#'){
        arr[i][j] = 1;
      }
      else{
        arr[i][j] = 0;
      }
    }
  }
  

  int sum;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      sum = arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i+1][j+1];
      if(sum==4 || sum==0 || sum==3 || sum==1){
        // cout<<sum<<endl;
        // cout<<i<<" "<<j<<endl;
        cout<<"YES"<<'\n';
        return;
      }
    } 
  }
  cout<<"NO"<<'\n';
}
  
int main()
{
  
   fast_io;
  
   solve();
  
   return 0;
}