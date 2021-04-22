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
  ll m, n;
  cin >> n >> m;
  // n -> rows
  // m -> columns
  ll mat[n][m];

  ll i, j;
  rep(i, n)
  {
    rep(j, m)
    {
      cin >> mat[i][j];
    }
  }

  cout << "Given matrix" << endl;
  rep(i, n)
  {
    rep(j, m)
    {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

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
  cout << "aux matrix" << endl;
  rep(i, n)
  {
    rep(j, m)
    {
      cout << aux[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;

  cout << "Enter number of queries" << endl;
  ll no; // number of queries
  cin >> no;
  while (no--)
  {
    ll x1, y1, x2, y2;
    cout << "Enter (x1, y1): " << endl;
    cin >> x1 >> y1;
    cout << "Enter (x2, y2): " << endl;
    cin >> x2 >> y2;

    ll li, lj, ri, rj;
    li = x1;
    lj = y1;
    ri = x2;
    rj = y2;
    // find sum between (li, lj) and (ri, rj)

    ll sum = aux[ri][rj];
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

    cout << "Sum : " << sum << endl;
  }
}

int main()
{

  //fast_io;

  solve();

  return 0;
}