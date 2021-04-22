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

  stack<pair<int, int>> s;
  
  // index of next smaller to left
  vector<int> left;

  for(i=0; i<n; i++){
    if(s.empty()){
      left.push_back(-1);
      s.push(make_pair(arr[i], i));
    }
    else if(!s.empty() && s.top().first<arr[i]){
      left.push_back(s.top().second);
      s.push(make_pair(arr[i], i));
    }
    else if(!s.empty() && s.top().first>=arr[i]){
      while(!s.empty() && s.top().first>=arr[i]){
        s.pop();
      }
      if(s.empty()){
        left.push_back(-1);
      }
      else{
        left.push_back(s.top().second);
      }
      s.push(make_pair(arr[i], i));
    }
  }

  // empty stack
  while(!s.empty()) {
    s.pop();
  }

  // index of next smaller to right
  vector<int> right;

  for(i=n-1; i>=0; i--){
    if(s.empty()){
      right.push_back(n);
      s.push(make_pair(arr[i], i));
    }
    else if(!s.empty() && s.top().first<arr[i]){
      right.push_back(s.top().second);
      s.push(make_pair(arr[i], i));
    }
    else if(!s.empty() && s.top().first>=arr[i]){
      while(!s.empty() && s.top().first>=arr[i]){
        s.pop();
      }
      if(s.empty()){
        right.push_back(n);
      }
      else{
        right.push_back(s.top().second);
      }
      s.push(make_pair(arr[i], i));
    }
  }
  reverse(right.begin(), right.end());

  // for(i=0; i<n; i++){
  //   cout<<left[i]<<" ";
  // }
  // cout<<endl;
  // for(i=0; i<n; i++){
  //   cout<<right[i]<<" ";
  // }
  // cout<<endl;

  // int width[n];
  // for(i=0; i<n; i++){
  //   width[i] = right[i]-left[i]-1;
  // }
  // for(i=0; i<n; i++){
  //   cout<<width[i]<<" ";
  // }
  // cout<<endl;

  int mx=-1, width, cur;
  for(i=0; i<n; i++){
    width = right[i]-left[i]-1;
    cur = width*arr[i];
    // cout<<"width: "<<width<<" arr[i]: "<<arr[i]<<" cur: "<<cur<<" "<<endl;
    if(cur>=mx){
      mx = cur;
    }
  }

  cout<<"\nmax area of histogram: "<<mx<<endl;

}
  
int main()
{
  
   //fast_io;
  
   solve();
  
   return 0;
}