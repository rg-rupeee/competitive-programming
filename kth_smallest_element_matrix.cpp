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

void solve()
{
  // All The Best
  // Stay Focused
  int n, k;

  cin >> n >> k;
  int arr[n][n];
  int i, j;
  rep(i, n)
  {
    rep(j, n)
    {
      cin >> arr[i][j];
    }
  }

  cout << "\nInitial array" << endl;
  rep(i, n)
  {
    rep(j, n)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // print element in sorted order
  int a, b, c, d;

  a = 0;
  b = 1;
  c = 1;
  d = 0;

  cout<<arr[0][0]<<" ";
  while(1){
    if(arr[a][b] < arr[c][d]){
      cout<<arr[a][b]<<" ";
      b++;
    }
    else{
      cout<<arr[c][d]<<" ";
      d++;
    }

    // if b is out of bound
    if(b>=n){
      a++;
      b=d+1;
    }

    // if d is out of bound
    if(d>=n){
      c=a+1;
      d++;
    }

    // all a, b, c, d is out of bound
    if(a>=n && b>=n && c>=n && d>=n){
      break;
    }
  }


}

int main()
{

  //fast_io;

  solve();

  return 0;
}