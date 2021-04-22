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
  ll row, col;
  cin>>row>>col;
  ll i, j;
  ll arr[row][col];
  rep(i, row){
    rep(j, col){
      cin>>arr[i][j];
    }
  }

  // cout<<"Entered Matrix : "<<endl;
  // rep(i, row){
  //   rep(j, col){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<'\n';
  // }
  // cout<<'\n';

  // using binary search in each row

  ll mxOne = -1;
  ll mxRow = -1;
  rep(i, row){
    ll posOne = col;
    ll noOne = 0;
    ll low, high, mid;
    low = 0;
    high = col-1;

    while(low <= high){
      mid = low + (high - low)/2;
      if( (arr[i][mid-1]==0 || mid==0) && arr[i][mid]==1){
        posOne = mid;
        break;
      }
      else if(arr[i][mid]==0){
        low = mid+1;
      }
      else{
        high = mid-1;
      }
    }
    noOne = col-posOne;
    if(noOne > mxOne){
      mxOne = noOne;
      mxRow = i;
    }
  }

  cout<<mxRow<<endl;
}

void solve(){

  ll row, col;
  cin>>row>>col;
  ll i, j;
  ll arr[row][col];
  rep(i, row){
    rep(j, col){
      cin>>arr[i][j];
    }
  }

  // cout<<"Entered Matrix : "<<endl;
  // rep(i, row){
  //   rep(j, col){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<'\n';
  // }
  // cout<<'\n';

  // find the position of leftmost 1 in first row
  ll posOne = col-1;
  ll ans = 0;
  rep(j, col){
    if(arr[0][j] == 1){
      posOne = j;
      break;
    }
  }
  j = posOne;
  for(i=1; i<row; i++){
    while(j>=0 && arr[i][j] == 1){
      j--;
      ans = i;
      posOne = j;
    }
  }

  cout<<ans<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}