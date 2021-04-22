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
  ll temp;
  ll i;
  vector<pair<ll, ll>> v;
  rep(i, 2 * n)
  {
    cin >> temp;
    v.push_back(make_pair(temp, i));
  }

  sort(v.begin(), v.end());

  for (i = 0; i < n * 2; i = i + 2)
  {
    if (v[i].first != v[i + 1].first)
    {
      cout << -1 << '\n';
      return;
    }
  }

  for (i = 0; i < n * 2; i = i + 2)
  {
    cout << v[i].second + 1 << " " << v[i + 1].second + 1 << '\n';
  }
}

int main()
{

  //  fast_io;

  // For getting input from input.txt file
  freopen("input.txt", "r", stdin);

  // Printing the Output to output.txt file
  freopen("output.txt", "w", stdout);

  solve();

  return 0;
}