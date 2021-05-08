

/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long
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
  ll n, m, k;
  cin >> n >> m >> k;
  ll i, j;
  ll mat[n][m];
  rep(i, n)
  {
    rep(j, m)
    {
      cin >> mat[i][j];
    }
  }

  // preprocess the aux matrix
  ll aux[n][m];
  aux[0][0] = mat[0][0];

  for (j = 1; j < m; j++)
  {
    aux[0][j] = mat[0][j] + aux[0][j - 1];
  }
  for (i = 1; i < n; i++)
  {
    aux[i][0] = mat[i][0] + aux[i - 1][0];
  }
  for (i = 1; i < n; i++)
  {
    for (j = 1; j < m; j++)
    {
      aux[i][j] = mat[i][j] + aux[i - 1][j] + aux[i][j - 1] - aux[i - 1][j - 1];
    }
  }

  /**
    // find sum between (li, lj) and (ri, rj)
          sum = aux[ri][rj];
          if (li > 0)
          {
            sum = sum - aux[li - 1][rj];
          }
          if (lj > 0)
          {
            sum = sum - aux[ri][lj - 1];
          }
          if (li > 0 && lj > 0)
          {
            sum = sum + aux[li - 1][lj - 1];
          }
  */

  ll ans = 0;
  
  cout << ans << '\n';
}

int main()
{

  fast_io;

  ull t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
