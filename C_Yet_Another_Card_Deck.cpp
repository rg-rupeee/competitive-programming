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
  ll n, q, t, a;
  cin >> n >> q;
  stack<ll> s;

  ll i;
  rep(i, n)
  {
    cin >> a;
    s.push(a);
  }

  ll temp;
  while (q--)
  {
    cin >> t;
    // cout<<"t : "<<t<<endl;
    i=1;
    stack<ll> s2;
    while(s.top() != t){
      s2.push(s.top());
      s.pop();
      i++;
    }
    cout<<i<<" ";
    temp = s.top();
    s.pop();
    while (!s2.empty())
    {
      s.push(s2.top());
      s2.pop();
    }
    s.push(temp);

  }
  cout<<'\n';

}

int main()
{

  fast_io;

  solve();

  return 0;
}