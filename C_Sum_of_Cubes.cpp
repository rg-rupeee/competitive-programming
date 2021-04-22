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

const ll N = 1000000000000L;

unordered_set<ll> cubes;

void precalc()
{
  ll i;
  for (i = 1; i * i * i <= N; i++)
  {
    cubes.insert(i * i * i);
  }
}

void solve()
{
  // All The Best
  // Stay Focused
  ll n;
  cin >> n;

  ll i, j;

  for (i = 1; i * i * i <= n; i++)
  {
    if (cubes.find(n - i * i * i) != cubes.end())
    {
      // cout<<n-i*i*i<<" "<<i*i*i<<endl;
      cout << "YES"<< "\n";
      return;
    }
  }

  cout << "NO"
       << "\n";
}

int main()
{

  fast_io;

  precalc();

  ull t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}