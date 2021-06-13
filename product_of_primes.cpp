#include <bits/stdc++.h>
using namespace std;

#define MAX 100001
#define ll long long
#define MOD 1000000007

vector<ll> seive()
{
  bool isPrime[MAX];
  ll i, j;
  for (i = 0; i < MAX; i++)
  {
    isPrime[i] = true;
  }

  for (i = 2; i * i <= MAX; i++)
  {
    if (isPrime[i])
    {
      for (j = i * i; j < MAX; j = j + i)
      {
        isPrime[j] = false;
      }
    }
  }

  vector<ll> primes;
  primes.push_back(2);
  for (i = 3; i < MAX; i = i + 2)
  {
    if (isPrime[i])
    {
      primes.push_back(i);
    }
  }

  return primes;
}

int main()
{

  vector<ll> primes = seive();
  ll l, r;
  cin >> l >> r;

  // generate all prime number from l to r
  ll i, j;
  bool isPrime[r - l + 1];
  for (i = 0; i <= r - l; i++)
  {
    isPrime[i] = true;
  }

  ll curPrime, base;
  for (i = 0; primes[i] * primes[i] <= r; i++)
  {
    curPrime = primes[i];
    base = ((l / curPrime) * curPrime);
    if (base < l)
    {
      base = base + curPrime;
    }
    for (j = base; j <= r; j += curPrime)
    {
      isPrime[j - l] = false;
    }
    if(base == curPrime){
      isPrime[base-l] = true;
    }
  }

  ll ans = 1;

  for(i=0; i<=r-l; i++){
    if(isPrime[i]){
      // cout<<i+l<<'\n';
      ans = (ans*(i+l))%MOD;
    }
  }

  cout<<ans<<'\n';

  return 0;
}