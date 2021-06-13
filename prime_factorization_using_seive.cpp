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

#define mx 100

int spf[mx + 1];

void seive()
{
  memset(spf, 0, sizeof(spf));
  spf[1] = 1;

  int i, j;

  for (i = 2; i <= mx; i++)
  {
    if (spf[i] == 0)
    {
      spf[i] = i;
      for (j = i * i; j <= mx; j += i)
      {
        spf[j] = i;
      }
    }
  }
}

// complexity O(log n)
void solve()
{
  // All The Best
  // Stay Focused

  int n;
  cin >> n;

  int i, j;

  // calculate smallest prime factor of every number
  seive();

  // for (i = 1; i <= mx; i++)
  // {
  //   cout << i << " " << spf[i] << '\n';
  // }

  vector<int> ans;
  while (n != 1)
  {
    ans.push_back(spf[n]);
    n = n / spf[n];
  }

  cout << "prime factors are: " << '\n';
  for (auto x : ans)
  {
    cout << x << " ";
  }
  cout << '\n';
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