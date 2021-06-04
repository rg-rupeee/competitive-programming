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

  ll N = 100001;

  ll p[N];

  memset(p, 0, sizeof(p));

  ll i, j;

  p[2] = 1;
  for(i=3; i<=N; i=i+2){
    p[i] = 1;
  }

  for(i=3; i<=sqrt(N); i=i+2){
    if(p[i] == 1){
      for(j=i*i; j<=N; j=j+i){
        p[j] = 0;
      }
    }
  }


  // print all prime numbers
  cout<<"All Primes numbers :"<<'\n';
  for(i=1; i<N; i++){
    // cout<<i<<" "<<p[i]<<endl;
    if(p[i]){
      cout<<i<<"  ";
    }
  }

  cout<<'\n';
} 
  
int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
  //  fast_io;

    // cout<<"adfa"<<'\n';
   solve();
  
   return 0;
}