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
  
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

void solve()
{
 // All The Best 
 // Stay Focused 
  int a;
  string b;
  cin>>a>>b;
  
  if(a==0){
    cout<<b<<'\n';
  }

  int i;
  int c =0 ;
  int n=b.size();
  for(i=0; i<n; i++){
    // make number then take mod
    c = (c*10 + int(b[i]-'0'))%10;
  }

  int ans = gcd(a, c);
  cout<<ans<<'\n';
}
  
int main()
{
  
  //  fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}