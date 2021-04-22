#include <bits/stdc++.h>
using namespace std;

int max_area_histograph(int arr[], int n){
  vector<int> right;
  vector<int> left;
  stack<pair<int,int>> s;
  int i;

  //1. index of next smaller element to right
  for(i=n-1; i>=0; i--){
    if((!s.empty()) && (s.top().first<arr[i])){
      right.push_back(s.top().second);
    }
    else{
      while((!s.empty()) && (s.top().first>=arr[i])){
        s.pop();
      }
      if(s.empty()){
        right.push_back(n);
      }
      else{
        right.push_back(s.top().second);
      }
    }
    s.push(make_pair(arr[i], i));
  }
  reverse(right.begin(), right.end());
  // for(i=0; i<n; i++){
  //   cout<<right[i]<<" ";
  // }
  // cout<<endl;

  //make stack empty
  while((!s.empty())){
        s.pop();
  }

  //2. index of next smaller element to left
  for(i=0; i<n; i++){
    if((!s.empty()) && (s.top().first<arr[i])){
      left.push_back(s.top().second);
    }
    else{
      while((!s.empty()) && (s.top().first>=arr[i])){
        s.pop();
      }
      if(s.empty()){
        left.push_back(-1);
      }
      else{
        left.push_back(s.top().second);
      }
    }
    s.push(make_pair(arr[i], i));
  }
  
  // for(i=0; i<n; i++){
  //   cout<<left[i]<<" ";
  // }
  // cout<<endl;

  int mx=-1, width, cur;
  for(i=0; i<n; i++){
    width = right[i]-left[i]-1;
    cur = width*arr[i];
    if(cur>mx){
      mx = cur;
    }
  }
  return mx;

}

int main(){
  int n;
  cin>>n;
  int arr[n];
  int i;
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  int ans = max_area_histograph(arr, n);
  cout<<"\nmax area : "<<ans;
  return 0;
}