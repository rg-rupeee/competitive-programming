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

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
  return (a.second > b.second);
}

void solve()
{
  // All The Best
  // Stay Focused
  ll n, k;
  cin >> n >> k;
  map<char, ll> mp;
  ll i;
  char ch;
  rep(i, n)
  {
    cin >> ch;
    mp[ch]++;
  }
  vector<pair<char, ll>> vp;
  for (auto x : mp)
  {
    // cout<<x.first<<" ";
    vp.push_back(make_pair(x.first, x.second));
  }
  // for(auto x: vp){
  //   cout<<x.first<<" "<<x.second<<endl;
  // }

  // sorting vector of pairs
  sort(vp.begin(), vp.end(), sortbysec);

  ll ans = 0;
  i=0;
  while (k)
  {
    if(vp[i].second>=k){
      ans += k*k;
      // cout<<k<<" "<<ans<<endl;
      k = 0;
    }
    else{
      ans += vp[i].second * vp[i].second;
      // cout<<k<<" "<<ans<<endl;
      k = k - vp[i].second;
    }
    i++;
  }
  


  cout<<ans<<'\n';
}

int main()
{

  //fast_io;

  solve();

  return 0;
}