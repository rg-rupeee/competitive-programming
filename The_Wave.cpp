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
  ll n, q;
  cin >> n >> q;
  ll a[n];
  ll i, j;
  rep(i, n)
  {
    cin >> a[i];
  }
  sort(a, a+n);
  
  while (q--)
  {
    ll x;
    cin >> x;

    ll pdt = 1;
    rep(i, n)
    {
      pdt *= (x - a[i]);
    }

    if (pdt == 0)
    {
      cout << 0 << '\n';
    }
    else if (pdt > 0)
    {
      cout << "POSITIVE" << '\n';
    }
    else
    {
      cout << "NEGATIVE" << '\n';
    }
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