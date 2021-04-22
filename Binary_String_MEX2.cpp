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

ll binary_to_decimal(string s){
  ll ans = 0;
  ll i;

  for(i=0; i<s.size(); i++){
    if(s[i] == '1'){
      ans+=pow(2, i);
    }    
  }

  return ans;
}

void solve()
{
  // All The Best
  // Stay Focused
  string s;
  cin >> s;

  ll i, j, n;
  n = s.size();
  ll no_substr;
  no_substr = pow(2, n);
  int arr[no_substr] = {0};
  vector<ll> ans;
  for (i = 1; i < no_substr; i++)
  {
    string temp = "";
    for (j = 0; j < n; j++)
    {
      if (i & (1 << j))
      {

        temp += s[j];
      }
    }
    // binary to decimal
    ll t = binary_to_decimal(temp);
    arr[t]++;
  }

  for(i=0; i<no_substr; i++){
    if(arr[i] == 0){
      cout<<i<<endl;
      break;
    }
  }
}

int main()
{

  //fast_io;

  ull t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}