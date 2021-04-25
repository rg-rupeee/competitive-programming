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
  string g1, g2;
  cin >> g1;
  cin >> g2;

  ll a1, a2, b1, b2;

  ll s1 = g1.size(), s2 = g2.size();

  if (s1 != s2)
  {
    cout << "NO" << '\n';
    return;
  }
  ll i;
  ll dist = 0;
  for (i = 0; i < s1; i++)
  {
    if (g1[i] != g2[i])
    {
      dist++;
      if (dist == 1)
      {
        a1 = g1[i];
        a2 = g2[i];
      }
      else if (dist == 2)
      {
        b1 = g1[i];
        b2 = g2[i];
      }
      else
      {
        cout << "NO" << '\n';
        return;
      }
    }
  }

  if (a1 == b2 && a2 == b1)
  {
    cout << "YES" << '\n';
  }
  else
  {
    cout << "NO" << '\n';
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