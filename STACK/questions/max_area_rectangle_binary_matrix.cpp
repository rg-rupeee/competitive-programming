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
  int n, m;
  cin>>n>>m;
  int arr[n][m];
  int i, j;
 
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      cin>>arr[i][j];
    }
  }
  
  int v[m];

  for(i=0; i<m; i++){
    v[i] = arr[0][i];
  }
  int mx, temp; 
  mx = max_area_histograph(v, m);
    // cout<<"mx: "<<mx<<endl;

  for(i=1; i<n; i++){
    for(j=0; j<m; j++){
      if(arr[i][j] == 0){
        v[j] = 0;
      }
      else{
        v[j] = v[j]+arr[i][j];
      }
    }
    temp = max_area_histograph(v, m);
    // cout<<"temp: "<<temp<<endl;
    mx = max(mx, temp);
  }

  cout<<"\nans : "<<mx;

  return 0;
}