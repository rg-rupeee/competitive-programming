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

int gcd(int a, int b, int &x, int &y)
{
  if (b == 0)
  {
    x = 1;
    y = 0;
    return a;
  }

  int x1, y1;
  int d = gcd(b, a % b, x1, y1);
  x = y1;
  y = x1 - y1 * (a / b);

  return d;
}

void solve()
{
  // All The Best
  // Stay Focused

  int a, b;
  cin >> a >> b;

  // equation
  // gcd(a, b) = a.x + b.y

  int x, y, d;

  d = gcd(a, b, x, y);

  cout << "GCD : " << d << '\n';
  cout << x << " " << y << '\n';
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