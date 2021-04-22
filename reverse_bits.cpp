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
  unsigned int n;
  cin >> n;

  unsigned int ans, i, temp, no_bits;
  ans = 0;
  no_bits = sizeof(n) * 8;
  cout << no_bits << endl;
  for (i = 0; i < no_bits; i++)
  {
    temp = (n & (1 << i));
    if (temp)
    {
      ans = ans | (1 << ((no_bits - 1) - i));
    }
  }

  cout << ans << endl;
}

void solve2()
{
  unsigned int n;
  cin >> n;

  unsigned int ans, i, bitcnt, k;
  ans = 0;
  bitcnt = 32;

  for (i = 0; i < bitcnt; i++)
  {
    // k contains rightmost bit
    k = n & 1;

    ans = ans << 1;

    ans = ans | k;

    n = n >> 1;
  }

  cout << ans << endl;
}

void solve3()
{
  unsigned int n;
  cin >> n;

  unsigned int count = sizeof(n) * 8 - 1;
  unsigned int ans = n;

  n >>= 1;
  while (n)
  {
    ans <<= 1;
    ans |= n & 1;
    n >>= 1;
    count--;
  }
  ans <<= count;
  cout << ans;
}

int main()
{

  //fast_io;

  solve3();

  return 0;
}