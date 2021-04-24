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

#define N 10000001

bool HASH[N];

int divCount(int n)
{
  // sieve method for prime calculation

  // Traversing through all prime numbers
  int total = 1;
  for (int p = 2; p <= n; p++)
  {
    if (HASH[p])
    {

      int count = 0;
      if (n % p == 0)
      {
        while (n % p == 0)
        {
          n = n / p;
          count++;
        }
        total = total * (count + 1);
      }
    }
  }
  return total;
}

void solve()
{
  // All The Best
  // Stay Focused
  ll a, b, c;
  cin>>a>>b>>c;
  ll i, j, k, ans=0;
  ll cnt[(a*b*c)+1] = {0};
  
  for(i=1; i<=a; i++){
    for(j=1; j<=b; j++){
      for(k=1; k<=c; k++){
        if(!cnt[i*j*k]){
          cnt[i*j*k] = divCount(i*j*k);
        }
        
        ans = (ans + cnt[i*j*k])%1073741824;
      }
    }
  }

  cout<<ans<<'\n';
}

int main()
{

  // fast_io;

  memset(HASH, true, sizeof(HASH));
  for (int p = 2; p * p < N; p++)
    if (HASH[p] == true)
      for (int i = p * 2; i < N; i += p)
        HASH[i] = false;

  solve();

  return 0;
}