#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define ff first
#define ss second

//CREATED BY INSTINCT
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define endl "\n"
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
// ll dp[100005];
ll mod = 998244353;
bool vis[100000];
using namespace std;
bool isPrime(ll n)
{
  ll j;
  for (j = 2; j <= sqrt(n); j++)
  {
    if (n % j == 0)
    {
      break;
    }
  }
  if (j > sqrt(n))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
ll modexpo(ll a, ll b)
{
  ll ans = 1;
  a = a % mod;
  while (b > 0)
  {
    if ((b & 1) == 1)
    {
      ans = ((ans % mod) * (a % mod)) % mod;
    }
    b = b >> 1;
    a = ((a % mod) * (a % mod)) % mod;
  }
  return ans;
}
ll invmod(ll n)
{
  return modexpo(n, mod - 2);
}

ll comb(ll n, ll r)
{
  if (r == 0)
  {
    return 1;
  }
  ll fact[n + 1];
  fact[0] = 1;
  for (ll i = 1; i <= n; i++)
  {
    fact[i] = (fact[i - 1] * i) % mod;
  }
  return (fact[n] * invmod(fact[r]) % mod * invmod(fact[n - r]) % mod) % mod;
}
ll gcd(ll a, ll b)
{
  if (a == 0)
  {
    return b;
  }
  return gcd(b % a, a);
}
ll lcm(ll a, ll b)
{
  return (a * b) / gcd(a, b);
}
void dfs(ll i, vector<ll> adj[], bool visited[])
{
  visited[i] = 1;
  for (auto j : adj[i])
  {
    if (visited[j] == 0)
    {
      dfs(j, adj, visited);
    }
  }
}
bool sortbysecdesc(const pair<int, int> &a, const pair<int, int> &b)
{
  return a.second > b.second;
}
void solve(ll k)
{
  ll n;
  cin >> n;
  cout << "1 " << n << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
  // for getting input from input.txt
  freopen("input.txt", "r", stdin);
  // for writing output to output.txt
  freopen("output.txt", "w", stdout);
#endif

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}