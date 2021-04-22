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
  ll x, y;
  cin >> x >> y;
  ll n;
  cin >> n;
  // ll i;
  // for (i = 2; i < n; i++)
  // {
  //   nxt = cur - prv;
  //   prv = cur;
  //   cur = nxt;
  // }
  n = n%6;
  ll ans;
  switch (n)
  {
  case 1:
     ans = x;
    break;
  case 2: 
    ans = y;
    break;
  case 3: 
    ans= y-x;
    break;
  case 4:
    ans = -x;
    break;
  case 5: 
    ans = -y;
    break;
  default: 
    ans = x-y;
    break;
  }
  ans = ans % 1000000007;
  if (ans< 0)
  {
    ans += 1000000007;
  }
  
  cout << ans << endl;
}

int main()
{

  //fast_io;

  solve();

  return 0;
}