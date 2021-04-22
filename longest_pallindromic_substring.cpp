/*
author : Mr Rupesh Garhwal 
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; ++i) 
#define REP(i,a,n) for (i = a; i <= n; ++i)
#define REPR(i,n,a) for (i = n; i >= a; --i) 
  
bool isPallindrome(string s, ll low, ll high){
  while (low<=high)
  {
    if(s[low] != s[high]) return false;
    low++;
    high--; 
  }
  return true;
}

// Naive
void solveNaive()
{
 // All The Best 
 // Stay Focused 
  string s;
  cin>>s;
  ll n = s.size();

  // NAIVE APPROACH
  // Brute Force
  ll i, j, len, mx=-1;
  string ans = "";
  ans += s[0];
  for(i=0; i<n; i++){
    for(j=i; j<n; j++){
      if(isPallindrome(s, i, j)){
        len = j - i + 1;
        if(len > mx){
          mx = len;
          ans = s.substr(i, len);
        }
      }
    }
  }

  cout<<ans<<'\n';
}
  
void solve(){
  // optimise algorithm
  string s;
  cin>>s;
  ll n = s.size();

  ll i, j, k;
  ll dp[n][n];
  memset(dp, 0, sizeof(dp));

  ll maxlen=1;
  ll start=0;
  
  // first diagonal fill 1 
  for(i=0; i<n; i++) dp[i][i]=true;

  // substring of length 2
  for(i=0; i<n-1; i++){
    if(s[i] == s[i+1]){
      dp[i][i+1] = true;
      start = i;
      maxlen = 2;
    }
  }

  // remaining substrings
  // size = k
  for(k=3; k<=n; k++){
    // start position = i
    for(i=0; i<n-k+1; i++){
      // end position = j
      j = i + k - 1;

      if(dp[i+1][j-1] && s[i]==s[j]){
        dp[i][j] = true;
        if(k>maxlen){
          start = i;
          maxlen = k;
        }
      }
    }
  }
  cout<<maxlen<<endl;
  cout<<s.substr(start, maxlen)<<endl;
}

int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}