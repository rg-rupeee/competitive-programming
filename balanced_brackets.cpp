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
  int length = s.length();
  // cout<<length<<'\n';
  stack<char> st;
  bool flag = 1;
  int i;
  char tp;
  for (i = 0; i < length; i++)
  {
    if (st.empty())
    {
      st.push(s[i]);
    }
    else
    {
      tp = st.top();
      if(s[i]=='{' || s[i]=='(' || s[i]=='['){
        st.push(s[i]);
      }
      else if ((tp == '{' && s[i] == '}') || (tp == '(' && s[i] == ')') || (tp == '[' && s[i] == ']'))
      {
        st.pop();
      }
      else{
        flag = 0;
        break;
      }
    }
  }

  if(!st.empty()){
    flag = 0;
  }

  if(length&1){
    flag = 0;
  }

  if (flag)
  {
    cout << "YES" << '\n';
  }
  else
  {
    cout << "NO" << '\n';
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