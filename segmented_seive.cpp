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

#define MAX 10001

vector<int> seive()
{
  bool isPrime[MAX];
  int i, j;
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

  vector<int> primes;
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

void printPrimes(ll l, ll r, vector<int> &primes)
{

  // for(auto x: primes){
  //   cout<<x<<" ";
  // }

  int i, j;

  // 0 -> l
  // r-l -> r
  bool isPrime[r - l + 1];

  for (i = 0; i <= r - l; i++)
  {
    isPrime[i] = true;
  }

  for (i = 0; primes[i] * primes[i] <= r; i++)
  {
    int currentPrime = primes[i];
    ll base = ((l / currentPrime) * currentPrime);
    if (base < l)
    {
      base = base + currentPrime;
    }

    for (j = base; j <= r; j += currentPrime)
    {
      isPrime[j - l] = false;
    }

    // special case when base = 0 then base becomes equal to current prime no and we make it false so again making it true
    if (base == currentPrime)
    {
      isPrime[base - l] = true;
    }
  }

  // printing
  for (i = 0; i <= r - l; i++)
  {
    if (isPrime[i])
    {
      cout << i + l << '\n';
    }
  }
}

int main()
{

  // For getting input from input.txt file
  // freopen("input.txt", "r", stdin);
  // Printing the Output to output.txt file
  // freopen("output.txt", "w", stdout);

  //  fast_io;

  vector<int> primes = seive();

  int t;
  cin >> t;
  while (t--)
  {
    ll l, r;
    // print primes in range l to r
    cin >> l >> r;

    printPrimes(l, r, primes);
  }

  return 0;
}