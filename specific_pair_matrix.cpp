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
  
  
void solveNaive()
{
 // All The Best 
 // Stay Focused 

  int n;
  // n -> rows
  // m -> col
  cin>>n;

  int arr[n][n];
  int i, j;
  
  rep(i, n){
    rep(j, n){
      cin>>arr[i][j];
    }
  }

  int mx = INT_MIN;

  int a, b, d, e;

  for(a=0; a<n-1; a++){
    for(b=0; b<n-1; b++){
      for(d=a+1; d<n; d++){
        for(e=b+1; e<n; e++){
          if(mx<(arr[d][e]-arr[a][b])){
            mx = arr[d][e] - arr[a][b];
          }
        }
      }
    }
  }

  cout<<"Required Maximum value is : "<<mx<<endl;
}

void solve(){
  int n;
  cin>>n;
  int arr[n][n];
  int i, j;
  
  // getiing input
  rep(i, n){
    rep(j, n){
      cin>>arr[i][j];
    }
  }
  
  // cout<<"\nInitial arr"<<endl;
  // rep(i, n){
  //   rep(j, n){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<"\n";
  // }

  int maxArr[n][n];

  // precomputing maxArr
  maxArr[n-1][n-1] = arr[n-1][n-1];
  
  int mx=arr[n-1][n-1];
  for(j=n-2; j>=0; j--){
    if(arr[n-1][j]>mx){
      mx = arr[n-1][j];
    }
    maxArr[n-1][j] = mx;
  }

  mx=arr[n-1][n-1];
  for(i=n-2; i>=0; i--){
    if(arr[i][n-1]>mx){
      mx = arr[i][n-1];
    }
    maxArr[i][n-1] = mx;
  }

  for(i=n-2; i>=0; i--){
    for(j=n-2; j>=0; j--){
      maxArr[i][j] = max(maxArr[i+1][j], maxArr[i][j+1]);
    }
  }

  // printing maxArr
  // cout<<"\nMaxarr: "<<endl;
  // rep(i, n){
  //   rep(j, n){
  //     cout<<maxArr[i][j]<<" ";
  //   }
  //   cout<<"\n";
  // }

  int ans = INT_MIN;
  for(i=0; i<n-1; i++){
    for(j=0; j<n-1; j++){
      if(maxArr[i][j]-arr[i][j] > ans){
        ans = maxArr[i][j]-arr[i][j];
      }
    }
  }
  cout<<"Ans: "<<ans<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}