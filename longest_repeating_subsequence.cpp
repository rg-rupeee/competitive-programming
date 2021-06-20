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

vector<string> subseq;

void subsequnce(string ip, string op)
{
  if (ip.length() == 0)
  {
    if(op != "") {
      subseq.push_back(op);
    }
    // cout << op << '\n';
    return;
  }

  subsequnce(ip.substr(1), op);
  subsequnce(ip.substr(1), op+ip[0]);
}

void solve()
{
  // All The Best
  // Stay Focused
  string str;
  cin>>str;
  subsequnce(str, "");
  sort(subseq.begin(), subseq.end(), greater<string>());

  for(auto x: subseq){
    cout<<x<<'\n';
  }
  cout<<"......."<<'\n';
  int ans=-1;
  for(int i=1; i<subseq.size(); i++){
    if(subseq[i-1] == subseq[i]){
      cout<<subseq[i]<<" "<<subseq[i-1]<<'\n';
      int len = subseq[i].length();
    
      ans = max(ans, len);
    }
  }


  cout<<ans<<'\n';
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