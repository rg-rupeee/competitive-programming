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
  string s1, s2, s3;

  getline(cin, s1);
  getline(cin, s2);
  getline(cin, s3);

  int n1 = 0, n2 = 0, n3 = 0;

  // cout << s1 << '\n'
  //      << s2 << '\n'
  //      << s3 << '\n';

  for (auto x : s1)
  {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
      n1++;
    }
  }

  for (auto x : s2)
  {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
      n2++;
    }
  }

  for (auto x : s3)
  {
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {
      n3++;
    }
  }

  // cout << n1 << " " << n2 << " " << n3 << '\n';

  if (n1 == 5 && n2 == 7 && n3 == 5)
  {
    cout << "YES" << '\n';
  }
  else
  {
    cout << "NO" << '\n';
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