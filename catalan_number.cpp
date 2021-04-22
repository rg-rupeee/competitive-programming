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

#define N 100
ll CAT[N];

// Returns value of Binomial Coefficient C(n, k)
ll binomialCoeff(ll n, ll k)
{
  ll res = 1;

  // Since C(n, k) = C(n, n-k)
  if (k > n - k)
    k = n - k;

  // Calculate value of [n*(n-1)*---*(n-k+1)] /
  // [k*(k-1)*---*1]
  for (int i = 0; i < k; ++i)
  {
    res *= (n - i);
    res /= (i + 1);
  }

  return res;
}

ll Catalan(ll n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  ll result = 0;
  ll i;
  for (i = 0; i < n; i++)
  {
    result += Catalan(i) * Catalan(n - i - 1);
  }
  return result;
}

void CatalanDP()
{
  CAT[0] = 1;
  CAT[1] = 1;
  ll i, temp, j;
  for (i = 1; i < N; i++)
  {
    temp = 0;
    for (j = 0; j < i; j++)
    {
      temp += CAT[j] * CAT[i - j - 1];
    }
    CAT[i] = temp;
  }
}

ll CatalanBinomial(ll n)
{
  ll c = binomialCoeff(2 * n, n);
  return (c / (n + 1));
}

void solve()
{
  // All The Best
  // Stay Focused
  ll n;
  cin >> n;

  // Recursive
  // cout << "The " << n << " position Catalan Number is: " << Catalan(n) << endl;

  // Dynamic Programming
  // CatalanDP();
  // cout << CAT[n] << endl;

  // Binomial Coefficient
  cout << "The " << n << " position Catalan Number is: " << CatalanBinomial(n) << endl;
}

int main()
{

  fast_io;

  solve();

  return 0;
}