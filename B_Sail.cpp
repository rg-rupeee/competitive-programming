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
  
  
void solve()
{
 // All The Best 
 // Stay Focused 
  ll t, sx, sy, ex, ey;
  cin>>t>>sx>>sy>>ex>>ey;

  ll x, y;
  x = ex - sx;
  y = ey - sy;

  string str;
  cin>>str;

  ll i;
  rep(i, t){
    if(x<0){
      if(str[i] == 'W'){
        x++;
      }
    }
    else if(x>0){
      if(str[i] == 'E'){
        x--;
      }
    }

    if(y<0){
      if(str[i] == 'S'){
        y++;
      }
    }
    else if(y>0){
      if(str[i] == 'N'){
        y--;
      }

    }

    if(x==0 && y==0){
      cout<<i+1<<'\n';
      return;
    }
  }

  cout<<-1<<'\n';
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