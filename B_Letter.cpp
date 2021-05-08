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
  string str, txt;
  getline(cin, str);
  getline(cin, txt);
  // cout << str << "\n";
  // cout << txt << "\n";
  ll n = str.size();
  ll m = txt.size();
  ll i;
  map<char, ll> mp;
  for (i = 0; i < n; i++)
  {
    if(isspace(str[i])) continue;
    mp[str[i]]++;
  }
  
  for(i=0; i<m; i++){
    if(isspace(txt[i])) continue;

    if(mp[txt[i]]>0){
      mp[txt[i]]--;
    }
    else{
      cout<<"NO"<<'\n';
      return;
    }
  }

  cout<<"YES"<<'\n';
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