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
  ll n, z;
  cin>>n>>z;
  ll i, temp;
  priority_queue<ll> pq;
  rep(i, n){
    cin>>temp;
    pq.push(temp);
  }
  ll ans=0;
  bool flag = 1;
    
  
  while(z>0){

    temp = pq.top();
    
    if(temp == 0){
      flag = 0;
      break;
    }
    
    ans++;
    z = z - temp;

    temp = temp/2;

    pq.pop();

    pq.push(temp);
    
  
  }

  if(flag){
    cout<<ans<<'\n';
  }
  else{
    cout<<"Evacuate"<<'\n';
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