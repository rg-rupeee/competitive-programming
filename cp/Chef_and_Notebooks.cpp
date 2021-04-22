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

  ll x, y, k, n, i;
  cin>>x>>y>>k>>n;
  ll pages[n], cost[n];
  ll pageneed = x-y;
  bool flag = false;
  rep(i,n){
    cin>>pages[i]>>cost[i];
    if(pages[i]>=pageneed  &&  k>=cost[i]){
      flag = true;
    }
  }

  if(flag){
    cout<<"LuckyChef"<<endl;
  }else
  {
    cout<<"UnluckyChef"<<endl;
  }
  

}
  
int main()
{
  

   //fast_io;
  
   ull t;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}