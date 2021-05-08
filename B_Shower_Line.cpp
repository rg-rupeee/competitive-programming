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
  int n=5;
  ll arr[n][n];
  ll i, j;
  rep(i, n){
    rep(j, n){
      cin>>arr[i][j];
    }
  }
  int pos[n];
  rep(i, n){
    pos[i] = i;
  }

  ll temp, ans=0;

  // get all permutations
  do{
    // 01234
    temp = arr[pos[0]][pos[1]] + arr[pos[1]][pos[0]];
    temp += arr[pos[2]][pos[3]] + arr[pos[3]][pos[2]];

    // 1234
    temp += arr[pos[1]][pos[2]] + arr[pos[2]][pos[1]];
    temp += arr[pos[3]][pos[4]] + arr[pos[4]][pos[3]];

    // 234
    temp += arr[pos[2]][pos[3]] + arr[pos[3]][pos[2]];

    // 34
    temp += arr[pos[3]][pos[4]] + arr[pos[4]][pos[3]];

    ans = max(ans, temp);

  }while(next_permutation(pos, pos+n));

  cout<<ans<<'\n';
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