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

#define N 30
vector<string> CAS(N + 1);
// precalculate all countAndSay
void precalc()
{
  CAS[0] = "0";
  CAS[1] = "1";

  int i;
  for(i=2; i<=30; i++){
    string prv, ans;
    prv = CAS[i-1];
    ans = "";

    int j, n;
    n = prv.size();
    j=0;
    while(j<n){
      char cur = prv[j];
      int cnt=0;
      while (prv[j]==cur && j<n)
      {
        cnt++;
        j++;
      }
      
      ans = ans + (char)('0'+cnt) + cur;

    }


    CAS[i] = ans;
  }
}

// convert integer to char
// char ch = (char)('0'+n);

void solve()
{
  // All The Best
  // Stay Focused
  ll n;
  cin >> n;
  precalc();
  // ll i;
  // for(i=1; i<=10; i++){
  //   cout<<CAS[i]<<endl;
  // }
  cout<<CAS[n]<<endl;
}

int main()
{

  //fast_io;

  solve();

  return 0;
}