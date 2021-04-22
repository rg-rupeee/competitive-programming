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

bool isPrime(int n)
{
  // Corner cases
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;

  // This is checked so that we can skip
  // middle five numbers in below loop
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

void solve()
{
  // All The Best
  // Stay Focused
  ll n;
  cin >> n;
  ll i;
  ll x[n];
  rep(i, n)
  {
    cin >> x[i];
  }

  ll xn;
  rep(i, n)
  {
    xn = pow(x[i], 0.5);
    if (xn * xn == x[i])
    {

      if (isPrime(xn))
      {
        cout << "YES\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
    else{
      cout<<"NO\n";
    }
  }
}

int main()
{

  fast_io;

  solve();

  return 0;
}