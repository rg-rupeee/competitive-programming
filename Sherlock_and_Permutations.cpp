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
#define MOD 1000000007
#define LINF 1e18

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, a, n) for (i = a; i <= n; ++i)
#define REPR(i, n, a) for (i = n; i >= a; --i)

// modular exponentiation
// return (x^n)mod 1000000007
ll binExpMOD(ll x, ll n)
{
  if (n == 0)
  {
    return 1;
  }

  if (n == 1)
  {
    return (x % MOD);
  }

  ll temp = binExpMOD(x, n / 2);
  temp = (temp * temp) % MOD;

  if (n & 1)
  {
    return ((x % MOD) * temp) % MOD;
  }

  return temp;
}

ll factMOD(ll n){
  if(n<=1){
    return 1;
  }
  return ((n%MOD)*factMOD(n-1))%MOD;
}

void solve()
{
  // All The Best
  // Stay Focused
  ll n, m;
  cin >> n >> m;

  ll temp = (factMOD(m-1)*factMOD(n))%MOD;
  ll pow = MOD-2;
  temp =  binExpMOD(temp, pow);

  ll ans = (factMOD(n+m-1)*temp)%MOD;
  cout<<ans<<'\n';
}

int main()
{

  fast_io;

  ull t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}