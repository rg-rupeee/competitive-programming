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

void multiplyMatrix(ll **m, ll **n, ll **ans, ll s)
{

  cout<<m[0][0]<<endl;
  // ans[s][s] = m[s][s] * n[s][s]

  ll i, j, k, temp;

  rep(i, s)
  {
    rep(j, s)
    {
      cout << m[i][j] << " ";
    }
    cout << '\n';
  }
  rep(i, s)
  {
    rep(j, s)
    {
      cout << n[i][j] << " ";
    }
    cout << '\n';
  }

  for (i = 0; i < s; i++)
  {
    for (j = 0; j < s; j++)
    {
      ans[i][j] = 0;
      for (k = 0; k < s; k++)
      {
        ans[i][j] += m[i][k] * n[k][j];
      }
    }
  }
  rep(i, s)
  {
    rep(j, s)
    {
      cout << ans[i][j] << " ";
    }
    cout << '\n';
  }
}

void solve()
{
  // All The Best
  // Stay Focused
  ll s;
  cin >> s;
  ll m[s][s], n[s][s], ans[s][s];
  ll i, j;
  rep(i, s)
  {
    rep(j, s)
    {
      cin >> m[i][j];
    }
  }
  rep(i, s)
  {
    rep(j, s)
    {
      cin >> n[i][j];
    }
  }

  // rep(i, s){
  //   rep(j, s){
  //     cout<<m[i][j]<<" ";
  //   }
  //   cout<<'\n';
  // }
  // rep(i, s){
  //   rep(j, s){
  //     cout<<n[i][j]<<" ";
  //   }
  //   cout<<'\n';
  // }


  multiplyMatrix((ll **)m, (ll **)n, (ll **)ans, s);

  // rep(i, s)
  // {
  //   rep(j, s)
  //   {
  //     cout << ans[i][j] << " ";
  //   }
  //   cout << '\n';
  // }
}

int main()
{

  //  fast_io;

  solve();

  return 0;
}