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
  ll n;
  cin >> n;
  ll l[n], r[n];
  ll i;
  ll minL = 1000000001, maxR = -1;
  rep(i, n)
  {
    cin >> l[i] >> r[i];
    minL = min(minL, l[i]);
    maxR = max(maxR, r[i]);
  }

  bool flag = false;
  rep(i, n)
  {
    if (l[i] == minL && r[i] == maxR)
    {
      cout << i + 1 << '\n';
      return;
    }
  }
  cout << -1 << '\n';
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