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
  
  
  
int main()
{
  
   fast_io;

  while(1){
    ull n;
    cin>>n;
    if(n==0) break;
    ull arr[n+1];
    arr[0] = 0;
    ull i;
    rep(i, n){
      cin>>arr[i+1];
    }
    bool flag=true;
    for(i=1; i<=n; i++){
      if(arr[arr[i]] != i){
        flag = false;
        break;
      }
    }

    if(flag){
      cout<<"ambiguous"<<'\n';
    }else{
      cout<<"not ambiguous"<<'\n';
    }
  }
   
   return 0;
}