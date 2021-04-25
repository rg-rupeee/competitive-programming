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

  ll n, m;
  cin >> n >> m;
  ll a[n];
  ll b[m];
  ll i;
  ll mx = -1;
  ll mn = 1000;
  rep(i, n)
  {
    cin >> a[i];
    mx = max(mx, a[i]);
    mn = min(mn, a[i]);
  }
  if (mx < mn * 2)
  {
    mx = mn * 2;
  }
  bool flag = true;
  rep(i, m)
  {
    cin >> b[i];
    if(b[i]<=mx){
      flag = false;
    }
  }

  if(flag){
    cout<<mx<<'\n';
  }
  else{
    cout<<-1<<'\n';
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