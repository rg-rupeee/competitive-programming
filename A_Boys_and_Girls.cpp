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
  ll n, m;
  cin >> n >> m;
  bool flag = true;
  ll mn, b, g, i;
  mn = min(n, m);
  b = n - mn;
  g = m - mn;
  if (n > m)
  {
    // boy first
    for (i = 0; i < mn * 2; i++)
    {
      if (flag)
      {
        cout << "B";
        flag = false;
      }
      else
      {
        cout << "G";
        flag = true;
      }
    }
  }
  else
  {
    // girl first
    for (i = 0; i < mn * 2; i++)
    {
      if (flag)
      {
        cout << "G";
        flag = false;
      }
      else
      {
        cout << "B";
        flag = true;
      }
    }
  }

  if (b)
  {
    for (i = 0; i < b; i++)
    {
      cout << "B";
    }
  }

  if (g)
  {
    for (i = 0; i < g; i++)
    {
      cout << "G";
    }
  }
  cout << '\n';
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