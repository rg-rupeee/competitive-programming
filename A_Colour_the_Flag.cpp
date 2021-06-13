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
  ll n, m;
  cin >> n >> m;
  ll i, j;
  char col[n][m];
  rep(i, n)
  {
    rep(j, m)
    {
      cin >> col[i][j];
    }
  }

  int red, white, temp;
  bool flag = false;
  rep(i, n)
  {
    rep(j, m)
    {
      temp = i + j;

      if (col[i][j] == 'R')
      {
        
        if (temp & 1)
        {
          red = 1;
          white = 0;
        }
        else
        {
          white = 1;
          red = 0;
        }
        flag = true;
        break;
      }
      if (col[i][j] == 'W')
      {
       
        if (temp & 1)
        {
          white = 1;
          red = 0;
        }
        else
        {
          red = 1;
          white = 0;
        }
        flag = true;
        break;
      }
    }
    
    if (flag)
    {
      break;
    }
  }

  rep(i, n){
    rep(j, m){
      temp = i+j;
      // red is odd
      if(red){
        if(temp&1){
          if(col[i][j] == 'W'){
            cout<<"NO"<<"\n";
            return;
          }
          col[i][j] = 'R';
        }
        else{
          if(col[i][j] == 'R'){
            cout<<"NO"<<"\n";
            return;
          }
          col[i][j] = 'W';
        }
      }
      // white is odd
      else{ 
        if(temp&1){
          if(col[i][j] == 'R'){
            cout<<"NO"<<"\n";
            return;
          }
          col[i][j] = 'W';
        }
        else{
          if(col[i][j] == 'W'){
            cout<<"NO"<<"\n";
            return;
          }
          col[i][j] = 'R';
        }
      }
    }
  }
  
  cout << "YES" << '\n';
  rep(i, n){
    rep(j, m){
      cout<<col[i][j];
    }
    cout<<'\n';
  }
}

int main()
{

  // For getting input from input.txt file
  // freopen("input.txt", "r", stdin);
  // Printing the Output to output.txt file
  // freopen("output.txt", "w", stdout);

  fast_io;

  ull t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}