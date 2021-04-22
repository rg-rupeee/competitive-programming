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
  ll i;
  ll arr[n];
  rep(i, n)
  {
    cin >> arr[i];
  }

  ll s = 64;
  ll digits[s];
  memset(digits, 0, sizeof(digits));

  ll j, cur;
  for (i = 0; i < n; i++)
  {
    cur = arr[i];
    for (j = 0; j < s; j++)
    {
      // if jth bit of arr[i] is set
      if ((cur & (1 << j)))
      {
        digits[j] = digits[j] + 1;
      }
    }
  }
  ll ans = 0;
  for (j = 0; j < s; j++)
  {
    // set jth bit of ans if we have digit[j]!=0
    if (digits[j])
    {
      ans = (ans | (1 << j));
    }
  }
  cout << ans << '\n';

  // QUERIES
  ll x, v;
  while (q--)
  {
    cin >> x >> v;
    cur = arr[x-1];
    arr[x-1] = v;
    // if jth bit of arr[x] is set then digit[j]--
    for (j = 0; j < s; j++)
    {
      if ((cur & (1 << j)))
      {
        digits[j] = digits[j] - 1;
      }
    }
    cur = v;
    for (j = 0; j < s; j++)
    {
      if ((cur & (1 << j)))
      {
        digits[j] = digits[j] + 1;
      }
    }

    // construct ans
    ans = 0;
    for (j = 0; j < s; j++)
    {
      // set jth bit of ans if we have digit[j]!=0
      if (digits[j])
      {
        ans = (ans | (1 << j));
      }
    }
    cout << ans << '\n';
  }
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