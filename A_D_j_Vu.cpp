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
  string s;
  cin >> s;
  ll n, i;
  n = s.size();
  // check if all characters are a

  string ans, ansRev;
  ans = s+'a';
  ansRev = ans;
  reverse(ansRev.begin(), ansRev.end());
  // cout<<ans<<" "<<ansRev<<endl;
  if(ans != ansRev){
    cout<<"YES"<<"\n";
    cout<<ans<<"\n";
    return;
  }
  else{
    ans = 'a'+s;
    ansRev = ans;
    reverse(ansRev.begin(), ansRev.end());
    if(ans != ansRev){
      cout<<"YES"<<"\n";
      cout<<ans<<"\n";
      return;
    }
  }

  cout<<"NO"<<"\n";
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