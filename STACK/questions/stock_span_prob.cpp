#include <bits/stdc++.h>
using namespace std;

vector<int> stock_span(int arr[], int n){
  vector<int> v;
  stack<pair<int,int>> s;
  int i;
  for(i=0; i<n; i++){
    if((!s.empty()) && (s.top().first > arr[i])){
      v.push_back(s.top().second);
    }
    else{
      while((!s.empty()) && (s.top().first < arr[i])){
        s.pop();
      }
      if(s.empty()){
        v.push_back(-1);
      }
      else{
        v.push_back(s.top().second);
      }
    }
    s.push(make_pair(arr[i], i));
  }
  return v;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  int i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<int> ans;
  ans = stock_span(arr, n);
  for(i=0; i<n; i++){
    cout<<i-ans[i]<<" ";
  }
  return 0;
}