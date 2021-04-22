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
  ll x, y, l, r;
  cin>>x>>y>>l>>r;

  // set bits of y in range [l, r] and set this bits in x

  int i;
  for(i=l; i<=r; i++){
    if(y&(1<<i)){
      x = x | (1<<i);
    }
  }

  cout<<x<<endl;
}

void solveOptimal(){
  int x, y, l, r;

  cin>>x>>y>>l>>r;

  // zero based index

  int maskLength = (1<<(r-l+1)) - 1;
  
    // Shift the mask to the required position
    // "&" with y to get the set bits at between
    // l ad r in y
    int mask = ((maskLength)<<(l-1)) & y ;
    x = x | mask;
  
  cout<<x<<endl;
}

int main()
{
  
   //fast_io;
  
   solveOptimal();
  
   return 0;
}