/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast_io                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

#define MAX_N 1e5 + 1
#define INF 1e9
#define MOD 1e9 + 7
#define LINF 1e18

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, a, n) for (i = a; i <= n; ++i)
#define REPR(i, n, a) for (i = n; i >= a; --i)

// clockwise
void solve()
{
  // All The Best
  // Stay Focused
  int n;
  cin >> n;
  int i, j;
  int arr[n][n];

  rep(i, n)
  {
    rep(j, n)
    {
      cin >> arr[i][j];
    }
  }

  cout << "Input array: " << endl;
  rep(i, n)
  {
    rep(j, n)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout<<endl;

  // Rotate clockwise

  // 1. take transpose of matrix
  // 2. reverse rows  

  rep(i, n){
    rep(j, i){
      swap(arr[i][j], arr[j][i]);
    }
  }

  rep(i, n){
    reverse(arr[i], arr[i]+n);
  }

  cout << "Final rotated array: " << endl;
  rep(i, n)
  {
    rep(j, n)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{

  //fast_io;

  solve();

  return 0;
}