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
  int n, m, i, temp;
  cin>>n>>m;
  n++;
  int jobs[n] = {0};
  jobs[0] = 1;
  rep(i,m){
    cin>>temp;
    jobs[temp] = 1;
  }

  vector<int> v;
  rep(i, n){
    if(jobs[i] == 0){
      v.push_back(i);
    }
  }

  sort(v.begin(), v.end());
  int vlen = v.size();
  for(i=0; i<vlen; i=i+2){
     cout<<v[i]<<" ";
  }
  cout<<endl;
  for(i=1; i<vlen; i=i+2){
    cout<<v[i]<<" ";
  }
  cout<<endl;

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