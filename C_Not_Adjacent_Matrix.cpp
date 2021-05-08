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
  
  if(n==2){
    cout<<-1<<'\n';
    return;
  }

  ll i, j;
  ll val = 1;
  ll mat[n][n];
  for(i=0; i<n; i++){
    mat[i][i] = val;
    val++;
  }

  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      mat[i][j] = val;
      val++;
      mat[j][i] = val;
      val++;
    }
  }

  rep(i, n){
    rep(j, n){
      cout<<mat[i][j]<<" ";
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
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}