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
  ll n, m;
  cin>>n>>m;

  ll i, j;
  string arr[n];

  rep(i, n){
    cin>>arr[i];
  }

  // rep(i, n){
  //   cout<<arr[i];
  //   cout<<'\n';
  // }

  int f1=1, f2=1;
  rep(i, n){
    if(f1){
      f2 = 0;
    }
    else{
      f2 = 1;
    }
    rep(j, m){
      if(arr[i][j] == '.'){
        if(f2){
          // cout<<"W";
          arr[i][j] = 'W';
        }
        else{
          // cout<<"B";
          arr[i][j] = 'B';
        }

      }
      f2 = 1-f2;
    }
    // cout<<'\n';
    f1 = 1-f1;
  }

  rep(i, n){
    rep(j, n){
      cout<<arr[i][j];
    }
    cout<<'\n';
  }
}
  
int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
   fast_io;
  
   solve();
  
   return 0;
}