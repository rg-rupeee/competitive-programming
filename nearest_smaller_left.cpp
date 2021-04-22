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
  int n;
  cin>>n;
  int arr[n];
  int i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }

  vector<int> v;
  stack<int> s;

  for(i=0; i<n; i++){
    if(s.empty()){
      v.push_back(-1);
      s.push(arr[i]);
    }
    else if(!s.empty() && s.top()<arr[i]){
      v.push_back(s.top());
      s.push(arr[i]);
    }
    else if(!s.empty() && s.top()>=arr[i]){
      while(!s.empty() && s.top()>=arr[i]){
        s.pop();
      }
      if(s.empty()){
        v.push_back(-1);
      }
      else{
        v.push_back(s.top());
      }
      s.push(arr[i]);
    }
  }

  for(i=0; i<n; i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}