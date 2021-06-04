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
  
void solveNaive()
{
 // All The Best 
 // Stay Focused 
  ll n, m;
  cin>>n>>m;
  // cout<<n<<" "<<m;
  ll i, j, ans=0, a1, a2;
  for(i=1; i<=n; i++){
    for(j=i+1; j<=n; j++){

      a1 = m%i;
      // a1 = a1%j;

      a2 = m%j;
      a2 = a2%i;
     
      if(a1 == a2){
        // cout<<i<<" "<<j<<'\n';
        ans++;
      }
    }
  }

  cout<<ans<<'\n';
}

void solveOptimized(){

}

int main()
{
  
   // For getting input from input.txt file
   // freopen("input.txt", "r", stdin);
   // Printing the Output to output.txt file
   // freopen("output.txt", "w", stdout);
  
  //  fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solveNaive();
    //  solveOptimized();
   }
   return 0;
}